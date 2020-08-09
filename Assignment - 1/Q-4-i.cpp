# include <iostream>
using namespace std;

void display(int*, int);
void reverse_arr(int*, int);

void display(int arr[], int len)
{
    cout<<"Elements of the Array : "<<endl; 
	for(int i=0; i<len; i++)
	{
 	    cout<<arr[i]<<" ";
    }
	cout<<endl<<endl;
}

void reverse_arr(int arr[], int len)
{
    int temp[len], j=0;
    for(int i=len-1;i>=0;i--)
    {
        temp[j++] = arr[i];
    }

    for(int i=0;i<len;i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int len=0, n=0;
    cout<<"\nPlease enter the Length of the Array : ";
    cin>>len;
    int arr[len];
    cout<<"\nEnter the Elements of the Array : "<<endl;
    for(int i=0; i<len; i++)
    {
		cin>>n;
		arr[i] = n;
    }
	cout<<endl;

    display(arr, len);

    reverse_arr(arr, len);

    display(arr, len);
    
    
    return 0;
}