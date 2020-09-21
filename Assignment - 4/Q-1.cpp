/*

1) Develop a Menu driven program to demonstrate the following operations of
Arrays ——MENU——- 1.CREATE
2.DISPLAY
3.INSERT
4.DELETE
5.SEARCH
6.EXIT

*/

#include <iostream>
using namespace std;

#define len 1000

int top=-1;
int arr[len];

void push(int num)
		{
			top += 1;
			arr[top] = num;
		}

		void pop()
		{
			top -= 1;
		}

		void print()
		{
			cout<<top<<endl;
			for(int i=0; i<=top; i++)
			{
				cout<<arr[i]<<"\t";
			}
			cout<<endl;
		}

		void peek()
		{
			cout<<arr[top]<<endl;
		}

		bool isFull()
		{
			return (top == len);
		}

int main()
{	
	int choice = 0, exit = 1, element=0;

	cout<<"\nEnter the length of stack : ";
	//cin>>len;
    
    do{
    	cout<<"--MENU--"<<endl;
		cout<<"1. PUSH\n2. POP\n3. DISPLAY\n4. isFULL\n5. PEEK\n6. EXIT\n\nPlease Enter your Choice : ";
 		cin>>choice;

 		switch(choice)
 		{
	  	case 1:
		  	 cout<<"Enter a number : ";
			 cin>>element;
			 push(element);
 			 break;
		case 2:pop();
			  break; 
        case 3:print();
			  break;
        case 4:
              if (isFull)
			  {
			  	cout<<"True"<<endl;
			  }
			  else
			  {
				  cout<<"False"<<endl;
			  }
			  
			  break;
        case 5:peek();
			  break;
        case 6:	exit=0;
			  break;
        }
	}while(exit);
 	
	return 0;
}
