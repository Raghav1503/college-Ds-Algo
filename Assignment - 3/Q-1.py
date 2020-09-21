class Node:
    def __init__(self, data=None, previousNode=None, nextNode=None):
        self.data = data
        self.previousNode = previousNode
        self.nextNode = nextNode

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insert(self, newNode, atBegin=False, atEnd=False, inBetween=False, beforeNodeData=None):
        if atBegin:
            newNode.nextNode = self.head
            newNode.previousNode = None

            if self.head is not None:
                self.head.previousNode = newNode

            self.head = newNode
        
        if atEnd:
            if self.head is None:
                self.insert(newNode, atBegin=True)
            
            currentNode = self.head
            while currentNode.nextNode is not None:
                currentNode = currentNode.nextNode
            
            currentNode.nextNode = newNode
            newNode.previousNode = currentNode
        
        if inBetween:
            if self.head is None:
                self.insert(newNode, atBegin=True)
            
            currentNode = self.head
            while currentNode.nextNode is not None:
                if currentNode.data == beforeNodeData:
                    break
                currentNode = currentNode.nextNode

            newNode.nextNode = currentNode
            currentNode.previousNode.nextNode = newNode
            newNode.previousNode = currentNode.previousNode
    
    def delete():
        pass
        
    def search(self, searchData):
        currentNode = self.head
        pos = 1
        found = False
        while currentNode.nextNode is not None:
            if currentNode.data == searchData:
                found=True
                break
            currentNode = currentNode.nextNode
            pos = pos + 1

        if found:
            print("Element {} found at position {}.".format(searchData, pos))
        else:
            print("Error 404: Not Found :(")
    
    def print(self):
        if self.head is None:
            print('List is empty....')

        currentNode = self.head
        while currentNode is not None:
            print(currentNode.data, end=" ")
            currentNode = currentNode.nextNode
        print()
        
if __name__=='__main__':
    linkedlist = LinkedList()

    linkedlist.insert(Node(10), atBegin=True)
    linkedlist.insert(Node(20), atBegin=True)
    linkedlist.insert(Node(30), atBegin=True)

    linkedlist.insert(Node(40), atEnd=True)
    linkedlist.insert(Node(50), atEnd=True)

    linkedlist.insert(Node(60), inBetween=True, beforeNodeData=10)
    linkedlist.insert(Node(70), inBetween=True, beforeNodeData=50)

    linkedlist.print()

    linkedlist.search(10)