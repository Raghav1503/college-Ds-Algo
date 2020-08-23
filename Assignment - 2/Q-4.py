class Node:
    def __init__(self, data=None, nextNode=None):
        self.data = data
        self.nextNode = nextNode

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insert(self, newNode):
        if(self. head is None):
            self.head = newNode
        else:
            currentNode = self.head
            while currentNode.nextNode is not None:
                currentNode = currentNode.nextNode
            
            currentNode.nextNode = newNode
    
    def print(self):
        if self.head is None:
            print("List is Empty...")
            return
            
        currentNode = self.head
        print("Linked List : ", end=" ")
        while currentNode is not None:
                print(currentNode.data, end=" ")
                currentNode = currentNode.nextNode

        print()
    
    def reverse(self):
        currentNode = self.head # (1)
        previousNode = None
        # Null->1->2->3-Null
        while currentNode is not None:
            nextNode = currentNode.nextNode #(2)
            currentNode.next = previousNode #(Null) Null<-1 2
            previousNode = currentNode
            currentNode = nextNode
        
        self.head = previousNode


if __name__ == '__main__':
    
    linkedList = LinkedList()

    linkedList.insert(Node(1))
    linkedList.insert(Node(2))
    linkedList.insert(Node(3))
    linkedList.insert(Node(4))
    linkedList.insert(Node(5))

    linkedList.print()

    linkedList.reverse()

    linkedList.print()
