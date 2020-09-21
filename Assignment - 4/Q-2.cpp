#include <iostream>
#include <string>
using namespace std;

#define len 100

int top=-1;
char arr[len];

void push(char letter)
		{
			top += 1;
			arr[top] = letter;
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

        void reverse()
        {
            int i=top;
            for(i; i>=0; i--)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }

int main()
{	
	string str;

    cout<<"Enter a string : ";
    getline(cin, str);

    int i=0;
    while(str[i])
    {   
        if (str[i] == ' ')
        {
            i+=1;
            continue;
        }
        else
        {
            push(str[i++]);
        }
    }
    reverse();
 	
	return 0;
}

