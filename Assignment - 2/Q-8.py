class Node:
    def __init__(self, data = None, next_node = None):
        self.data = data
        self.next_node = next_node

class LinkedList:
    def __init__(self):
        self.head = None
    
    def list_length(self):
        currentNode = self.head
        count = 0
        while currentNode:
            count = count + 1
            currentNode = currentNode.next_node
        
        return count

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
    
    def intersectionPoint(self, second_list):        
        currentNodeA = self.head
        currentNodeB = second_list.head

        len1 = self.list_length()
        len2 = second_list.list_length()
        d    = abs(len1 - len2)

        if len1 > d:
            for i in range(d):
                currentNodeA = currentNodeA.next_node
        else:
            for i in range(d):
                currentNodeB = currentNodeB.next_node

        while currentNodeA and currentNodeB:
            if currentNodeA == currentNodeB:
                return currentNodeA
            
            currentNodeA = currentNodeA.next_node
            currentNodeB = currentNodeB.next_node

if __name__=='__main__':

    linked_listA = LinkedList()
    linked_listB = LinkedList()

    node_common = Node(15)

    linked_listA.insert(Node(3))
    linked_listA.insert(Node(6))
    linked_listA.insert(Node(9))
    linked_listA.insert(node_common)
    linked_listA.insert(Node(30))
    linked_listA.insert(Node(40))
    
    linked_listA.print()

    linked_listB.insert(Node(10))
    linked_listB.insert(node_common)
    linked_listB.insert(Node(35))
    linked_listB.insert(Node(70))
    linked_listB.print()
    print(linked_listA.intersectionPoint(linked_listB).data)
