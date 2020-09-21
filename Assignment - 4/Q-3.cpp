#include <iostream>
#include <string>
using namespace std;

#define len 100

int top = -1;
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
	cout << top << endl;
	for (int i = 0; i <= top; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

bool isEmpty()
{
	return (top == 0);
}

bool ArePair(char opening, char closing)
{
	if (opening == '(' && closing == ')')
		return true;
	else if (opening == '{' && closing == '}')
		return true;
	else if (opening == '[' && closing == ']')
		return true;
	return false;
}

bool checkBrackets(string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			push(str[i]);
		}
		else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (isEmpty || !ArePair(arr[top], str[i]))
			{
				return false;
			}
			else
			{
				pop();
			}
		}
		i++;
	}
	return isEmpty ? true:false;
}

int main()
{
	string str;

	cout << "Enter a string : ";
	getline(cin, str);
	
	cout<<checkBrackets(str)<<endl;

	return 0;
}
