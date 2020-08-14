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

    def insert(self, newNode, atStart=False, inBetween=False, pos=1):
        if atStart:
            temp_node = self.head
            self.head = newNode
            self.head.next_node = temp_node
            del temp_node

            return
        
        if inBetween:
            if(pos == 0):
                self.insert(newNode, atStart=True)
                
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
            
        if self.head is None:
            self.head = newNode
        else:
            lastNode = self.head
            while True:
                if lastNode.next_node is None:
                    break
                lastNode = lastNode.next_node
            lastNode.next_node = newNode
    
    def printList(self):
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
    linked_list.insert(node5, atStart=True)

    node5 = Node(35)
    linked_list.insert(node5, inBetween=True ,pos=4)
    
    linked_list.printList()