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
    
    def insertAt_Num(self, newNode, num):
        currentNode = self.head
        previousNode = None

        while currentNode is not None:
            if currentNode.data == num:
                temp = currentNode.next_node
                currentNode.next_node = newNode
                newNode.next_node = temp
            
            currentNode = currentNode.next_node
	    
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
            print("\nList is Empty...")
            return 
            
        current_node = self.head
        print("\nLinked List : ", end="")
        while True:
            if current_node is None:
                break
            print(current_node.data, end=" ")
            current_node = current_node.next_node
        print()

    def deleteEnd(self):
        if self.head.next_node is None:
            self.head = None
            return 

        lastNode = self.head
        previousNode = None

        while lastNode.next_node is not None:
            previousNode = lastNode
            lastNode = lastNode.next_node
        

        previousNode.next_node = None
        del lastNode
    
    def deleteBegin(self):
        temp = self.head
        self.head = None
        del temp

    def findNum(self, num):
        currentNode = self.head
        pos = 0
        while currentNode is not None:
            if currentNode.data == num:
                return pos
            
            if currentNode.next_node is None:
                return -1

            currentNode = currentNode.next_node
            pos = pos + 1
    
    def delete_inBetween_pos(self, pos):
        currentNode = self.head
        count = 0
        while currentNode.next_node is not None:
            if count == pos:
                break
            previousNode = currentNode
            currentNode = currentNode.next_node
            count = count + 1
        
        previousNode.next_node = currentNode.next_node
        del currentNode
	

    def delete_inBetween_num(self, num):
        currentNode = self.head
        previousNode = None
        while currentNode.next_node is not None:
            if currentNode.data == num:
                break
            previousNode = currentNode
            currentNode = currentNode.next_node
        
        previousNode.next_node = currentNode.next_node
        del currentNode

if __name__=='__main__':
    choice = None
    linkedlist = LinkedList()
    while True: 
        print('\n1) Insert at Begining')
        print('2) Insert at End')
        print('3) Insert in between when position is given.')
        print('4) Insert in between when number is given.')
        print('5) Delete from Beginning.')
        print('6) Delete from End.')
        print('7) Delete from In Between when Position is given.')
        print('8) Delete from In Between when Number is given.')
        print('9) Find a Number in the LinkedList.')
        print('10) Print The LinkedList')
        print('Press Q to Exit.')
        
        choice = input("\nPlease Enter Your Choice : ")
        
        if choice == '1':
            data = int(input("\nData : "))
            linkedlist.insertBegin(Node(data))

        elif choice == '2':
            data = int(input("\nData : "))
            linkedlist.insert(Node(data))
            
        elif choice == '3':
            data = int(input("\nData : "))
            pos  = int(input("Position : "))
            linkedlist.insertAt(Node(data), pos)

        elif choice == '4':
            data = int(input("\nData : "))
            num  = int(input("Number : "))
            linkedlist.insertAt_Num(Node(data), num)

        elif choice == '5':
            linkedlist.deleteBegin()

        elif choice == '6':
            linkedlist.deleteEnd()

        elif choice == '7':
            pos = int(input("\nEnter the Position of the Number : "))
            linkedlist.delete_inBetween_pos(pos)

        elif choice == '8':
            num = int(input("\nEnter the Number : "))
            linkedlist.delete_inBetween_num(num)

        elif choice == '9':
            num = int(input("\nEnter the Number : "))
            pos = linkedlist.findNum(num)
            if pos == -1:
                print("\nError 404 : Not Found :( ")
            else:
                print("\nElement {} found at {}.".format(num, pos+1))

        elif choice == '10':
            linkedlist.print()

        else:
            break