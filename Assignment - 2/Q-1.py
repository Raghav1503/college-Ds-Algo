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
    
    linked_list.print()