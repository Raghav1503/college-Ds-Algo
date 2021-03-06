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
        while currentNode is not None:
                print(currentNode.data, end=" ")
                currentNode = currentNode.nextNode

        print()
    
    def reverse(self):
        currentNode = self.head # (1)
        previousNode = None
        while currentNode is not None:
            nextNode = currentNode.nextNode 
            currentNode.nextNode = previousNode 
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

    print("Linked List : ", end=" ")
    linkedList.print()
    print("Reverse Linked List : ", end=" ")
    linkedList.reverse()

    linkedList.print()
