class Node:
    def __init__(self, data = None, next_node = None):
        self.data = data
        self.next_node = next_node

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insert(self, newNode):
        if self.head is None:
            self.head = newNode
        else:
            lastNode = self.head
            while True:
                if lastNode.next_node is None:
                    break
                lastNode = lastNode.next_node
            lastNode.next_node = newNode

    def listLength(self):
        currentNode = self.head
        count = 0
        while currentNode is not None:
            count = count + 1
            currentNode = currentNode.next_node
        
        return count
    
    def print(self):
        if self.head is None:
            print("List is Empty...")
            return 
            
        current_node = self.head
        print("Linked List : ", end="")
        while True:
            if current_node is None:
                break
            print(current_node.data, end=" ")
            current_node = current_node.next_node
        print()
    
    def middleNum_method1(self):
        # This Method Uses Remainder idea.
        len = self.listLength()
        middleIndex = 0

        if len%2 == 0:
            middleIndex = len/2
        else:
            middleIndex = (len / 2) + 1

        currentNode = self.head
        for i in range(int(middleIndex)-1):
            currentNode = currentNode.next_node

        print("Middle Node By Traversing Method : ", currentNode.data)

#        return int(middleIndex)

    def middleNum_method2(self):
        currentNode = self.head
        middleNode  = self.head
        while currentNode.next_node is not None:
            middleNode  = middleNode.next_node 
            currentNode = currentNode.next_node
            currentNode = currentNode.next_node
            
        
        print("Middle Node By Pointer Method    : ", middleNode.data)
        

if __name__=='__main__':

    linked_list = LinkedList()

    node1 = Node(10)
    linked_list.insert(node1)

    node2 = Node(20)
    linked_list.insert(node2)
    
    node3 = Node(30)
    linked_list.insert(node3)

    node4 = Node(40)
    linked_list.insert(node4)

    node5 = Node(50)
    linked_list.insert(node5)

    node6 = Node(60)
    linked_list.insert(node6)

    node7 = Node(100)
    linked_list.insert(node7)

    node8 = Node(200)
    linked_list.insert(node8)

    node9 = Node(500)
    linked_list.insert(node9)
    
    linked_list.print()
    linked_list.middleNum_method1()
    linked_list.middleNum_method2()
    

