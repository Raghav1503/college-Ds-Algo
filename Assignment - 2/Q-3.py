class Node:
    def __init__(self, data = None, next_node = None):
        self.data = data
        self.next_node = next_node

class LinkedList:
    def __init__(self):
        self.head = None

    def list_length(self):
        currentNode = self.head
        length = 0
        
        while True:
            if currentNode.next_node is None:
                break
            length += 1
            currentNode = currentNode.next_node

        return length
    
    def insertBegin(self, newNode):
        temp_node = self.head
        self.head = newNode
        self.head.next_node = temp_node
        del temp_node

        return

    def insertAt(self, newNode, pos):
        if(pos == 0):
            self.insertBegin(newNode)
            return 
        
        length = self.list_length()
        if(pos < 0 or pos > length):
            print("Index out of Bounds")

            return

        currentNode = self.head
        currentPosition = 0

        while True:
            if currentPosition == pos:
                previousNode.next_node  = newNode
                newNode.next_node = currentNode
            
                break

            previousNode = currentNode
            currentNode = currentNode.next_node
            currentPosition += 1

        return    


    def insert(self, newNode, inbetween=False, pos=1):
        if self.head is None:
            self.head = newNode
        else:
            lastNode = self.head
            while True:
                if lastNode.next_node is None:
                    break
                lastNode = lastNode.next_node
            lastNode.next_node = newNode
    
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

    def deleteEnd(self):
        lastNode = self.head
        previousNode = None

        while lastNode.next_node is not None:
            previousNode = lastNode
            lastNode = lastNode.next_node
        

        previousNode.next_node = None
        del lastNode
    
    def deleteBegin(self):
        temp = self.head
        head = head.next

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

    node4 = Node(50)
    linked_list.insert(node4)

    node4 = Node(60)
    linked_list.insert(node4)

    node5 = Node(5)
    linked_list.insertBegin(node5)

    node5 = Node(35)
    linked_list.insertAt(node5, pos=4)
    linked_list.print()


    linked_list.deleteEnd()
    linked_list.print()
