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
    
    def print(self):
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
    
if __name__ == '__main__':
    cubic = Term(3,3)
    square = Term(5,-2)
    linear = Term(10,1)
    const = Term(100,0)

    polyNomial = PolyNomial()
    polyNomial.insert(cubic)
    polyNomial.insert(square)
    polyNomial.insert(linear)
    polyNomial.insert(const)
    polyNomial.insert(Term(1,-1))
    polyNomial.insert(Term(2,-2))
    polyNomial.insert(Term(3,-3))
    polyNomial.insert(Term(4,-4))
    polyNomial.insert(Term(5,-5))
    polyNomial.insert(Term(6,-6))
    polyNomial.insert(Term(7,-7))
    polyNomial.insert(Term(8,-8))
    polyNomial.insert(Term(9,-9))
    polyNomial.insert(Term(10,10))


    polyNomial.print()