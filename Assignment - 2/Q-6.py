class Node:
    def __init__(self, data=None, nextNode=None):
        self.data = data
        self.nextNode = nextNode
    
class LinkedList:
    def __init__(self):
        self.head = None

    def list_length(self):
        currentNode = self.head
        length = 0
        
        while True:
            if currentNode.nextNode is None:
                break
            length += 1
            currentNode = currentNode.nextNode

        return length
    
    def insert(self, newNode, atStart=False, inBetween=False, pos=1):
        if atStart:
            temp_node = self.head
            self.head = newNode
            self.head.nextNode = temp_node
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
                    previousNode.nextNode  = newNode
                    newNode.nextNode = currentNode
                    
                    break

                previousNode = currentNode
                currentNode = currentNode.nextNode
                currentPosition += 1

            return
            
        if self.head is None:
            self.head = newNode
        else:
            lastNode = self.head
            while True:
                if lastNode.nextNode is None:
                    break
                lastNode = lastNode.nextNode
            lastNode.nextNode = newNode

    
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
            current_node = current_node.nextNode
        print()
    
    def rotate_2(self, k=None):
        if self.head is None:
            return None
        
        currentNode = self.head
        count = 0
        previousNode = None
        tempNode = None
        len = self.list_length()
        
        if len == 1:
            return self.head
        k %= len

        while currentNode.nextNode is not None:
            if count == len-k:
                previousNode = currentNode
                tempNode = previousNode.nextNode
            currentNode = currentNode.nextNode
            count = count + 1

        previousNode.nextNode = None
        currentNode.nextNode = self.head
        self.head = tempNode
        
if __name__=='__main__':

    linked_list = LinkedList()

    linked_list.insert(Node(10))
    linked_list.insert(Node(20))
    linked_list.insert(Node(30))
    linked_list.insert(Node(40))
    linked_list.insert(Node(50))
    linked_list.insert(Node(60))
    
    linked_list.print()

    linked_list.rotate_2(2)
    
    linked_list.print()

