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

int arr[1000], len;

void create();
void display();
void insert();
void del();
void search();
int linear_search(int);

void create()
{	
 	cout<<"\nPlease enter the Length of the Array : ";
    cin>>len;
			
    cout<<"\nEnter the Elements of the Array : "<<endl;
    
	int n = 0;
    for(int i=0; i<len; i++)
    {
		cin>>n;
		arr[i] = n;
    }
    
	cout<<endl;
}

void display()
{
    cout<<"Elements of the Array : "<<endl; 
	for(int i=0; i<len; i++)
	{
 	    cout<<arr[i]<<" ";
    }
	cout<<endl<<endl;
}

void insert()
{	int num, pos;
    
	cout<<"\nPlease Enter the Number you want to insert : ";
    cin>>num;
    cout<<"Please Enter the Postion you want to insert at : ";
    cin>>pos;
			
	if (pos > len)
	{
        cout<<"Wait Thats Illegal..."<<endl;
	}
	
	for(int i=len-1; i>=pos;i--)
	{
	    arr[i+1] = arr[i];
	}
	arr[pos] = num;	
	len = len+1;
}

void del()
{	int pos;

    cout<<"\nPlease Enter the Postition of the Number you want to delete : ";
    cin>>pos;
	
	if (pos > len)
	{
        cout<<"Wait Thats Illegal..."<<endl;
	}

	for(int i=pos-1; i<=len-1;i++)
	{
	    arr[i] = arr[i+1];
	}
	len = len-1;
	cout<<endl;
}

int linear_search(int search)
	{
		for(int i=0; i<len;i++)
		{
			if(arr[i] == search)
			{
				return i+1;
				break;
			}
			else
			{
				continue;
			}
		}
		return 0;
	}

void search()
{
	cout<<endl;
	int search=0;
	cout<<"\nEnter the Number you want to search  : ";
	cin>>search;

	int pos = linear_search(search);
	if (pos != 0)
	{
		cout<<"Found number "<<search<<" at postition "<<pos<<"."<<endl;
	}
	else
	{
		cout<<"ERROR 404 : Number Not Found!!"<<endl;
	}
	cout<<endl;
}

int main()
{	
	int choice = 0;
	int exit = 1;
    
    do{
    	cout<<"--MENU--"<<endl;
		cout<<"1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. SEARCH\n6. EXIT\n\nPlease Enter your Choice : ";
 		cin>>choice;
 	
 		switch(choice)
 		{
	  	case 1:create();
 			 break;
		case 2:display();
			  break; 
        case 3:insert();
			  break;
        case 4:	del();
			  break;
        case 5:	search();
			  break;
        case 6:	exit=0;
			  break;
        }
	}while(exit);
 	
	return 0;
}
