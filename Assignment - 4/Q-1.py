import numpy as np
import array as arr

class stack:
    def __init__(self):
        self.arr = []
        self.max = 0
        self.top = 0
    
    def push(self, num):
#        if self.isFull:
#            print('Stack is Full.')
        print(self.top)
        self.arr[self.top] = num
        self.top += 1

    def pop(self):
        pass

    def print(self):
        if isEmpty:
            print('Stack is empty.')
        
        for i in range(self.len()):
            print(self.arr[i], end=" ")
        print(" ")


    def isFull(self):
        return false

    def isEmpty(self):
        return false

    def peek(self):
        print(self.arr[self.top-1])
    
    def len(self):
        return self.top


if __name__=='__main__':
    choice = None
    s = stack()

    len   = int(input('Enter the length of the stack : '))
    s.max = len

    while True: 
        print('\n1) Push the element.')
        print('2) Pop the element.')
        print('3) Check if stack is empty or not.')
        print('4) Check if stack is full or not.')
        print('5) Print the stack.')
        print('6) Print top element.')
        print('Press Q to Exit.')
        
        choice = input("\nPlease Enter Your Choice : ")

        if choice == '1':
            num = int(input('Enter the number to insert into stack : '))
            s.push(num)

        elif choice == '2':
            s.pop()

        elif choice == '3':
            s.print()

        elif choice == '4':
            s.isFull()

        elif choice == '5':
            s.isEmpty()

        elif choice == '6':
            s.peek()

        else:
            break