class Term:
    def __init__(self, coefficent=None, power=None, nextNode=None):
        self.coefficent = coefficent
        self.power = power
        self.nextNode = nextNode

class PolyNomial:
    def __init__(self):
        self.head = None
    
    def insert(self, term):
        if self.head is None:
            self.head = term
        
        else:
            lastNode = self.head
            while lastNode.nextNode is not None:
                lastNode = lastNode.nextNode
            lastNode.nextNode = term
    
    def print_experimental(self):
        if self.head is None:
            print("List is Empty...")
            return
            
        currentNode = self.head
        while currentNode is not None:
            if  currentNode.power == 2 or currentNode.power == 3:
                a = chr(0x00b0 + currentNode.power)
            elif currentNode.power < 0:
                if  currentNode.power*-1 == 2 or currentNode.power*1 == 3:
                    a = chr(0x207B)
                    num = chr(0x00b0 + currentNode.power*-1)
                else:
                    a = chr(0x207B)
                    num = chr(0x2070 + currentNode.power*-1)
            else:
                a = chr(0x2070 + currentNode.power)

            if currentNode.nextNode is None:
                if currentNode.power < 0:
                    print(str(currentNode.coefficent) + "x"+a+num)
                elif currentNode.power == 0:
                    print(str(currentNode.coefficent))    
                else:
                    print(str(currentNode.coefficent) + "x"+a)
            else:
                if currentNode.power < 0:
                    print(str(currentNode.coefficent) + "x"+a+num, end=" + ")
                elif currentNode.power == 0:
                    print(str(currentNode.coefficent), end=" + ")
                else:
                    print(str(currentNode.coefficent) + "x"+a, end=" + ")
            currentNode = currentNode.nextNode
    
    def print(self):
        if self.head is None:
            print("List is Empty...")
            
            return
        
        currentNode = self.head
        while currentNode is not None:
            if currentNode.nextNode is None:
                if currentNode.power == 0:
                    print(str(currentNode.coefficent))
                else:
                    print(str(currentNode.coefficent) + "x^"+str(currentNode.power))
            else:
                if currentNode.power == 0:
                    print(str(currentNode.coefficent), end=" + ")
                else:
                    print(str(currentNode.coefficent) + "x^"+str(currentNode.power), end=" + ")
            
            currentNode = currentNode.nextNode

    def add(self,poly):
        resPoly = PolyNomial()
        nodeA = self.head
        nodeB = poly.head

        while nodeA is not None and nodeB is not None:
            if nodeA.power > nodeB.power:
                power = nodeA.power
                coefficent = nodeA.coefficent
                nodeA = nodeA.nextNode

            elif nodeB.power > nodeA.power:
                power = nodeB.power
                coefficent = nodeB.coefficent
                nodeB = nodeB.nextNode

            else:
                power = nodeA.power
                coefficent = nodeB.coefficent + nodeA.coefficent
                nodeB = nodeB.nextNode
                nodeA = nodeA.nextNode
            
            resPoly.insert(Term(coefficent, power))
        
        while nodeA is not None:
            resPoly(Term(nodeA.coefficent, nodeA.power))
            nodeA.nextNode
        
        while nodeB is not None:
            resPoly(Term(nodeB.coefficent, nodeB.power))
            nodeB.nextNode
        
        return resPoly

if __name__ == '__main__':
    poly1 = PolyNomial()
    poly2 = PolyNomial()

    poly1.insert(Term(4, 4))
    poly1.insert(Term(2, 3))
    poly1.insert(Term(10, 2))
    poly1.insert(Term(1, 1))
    poly1.insert(Term(100, 0))

    poly2.insert(Term(3, 3))
    poly2.insert(Term(2, 2))
    poly2.insert(Term(1, 1))
    poly2.insert(Term(20, 0))

    print("Polynomial 1 = ", end="")
    poly1.print_experimental()
    print("Polynomial 2 = ", end="")
    poly2.print_experimental()

    result = PolyNomial()
    result = poly1.add(poly2)

    print("Result 1 = ", end="")
    result.print_experimental()
    