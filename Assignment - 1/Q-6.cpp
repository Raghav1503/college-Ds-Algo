/*

6) Bubble Sort is the simplest sorting algorithm that works by repeatedly
swapping the adjacent elements if they are in wrong order. Code the
Bubble sort with the following elements:

*/


#include <iostream>
using namespace std;

void sort(int*, int);
int binary_search(int*, int, int, int);

void sort(int arr[], int len)
{
    // #### BUBBLE SORT #####
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }        
    }
}

int binary_search(int arr[], int start, int end, int search)
{
    int mid = (start+end)/2;

    if (arr[mid] == search)
    {
        return mid;
    }
    else if (arr[mid] < search)
    {
        binary_search(arr, mid+1, end, search);
    }
    else if (arr[mid] > search)
    {
        binary_search(arr, start, mid-1, search);
    }

    return -1;

}


int main()
{
    int len=0, n=0, search=0;
    
    cout<<"Please Enter the Length of the Array : ";
    cin>>len;
    
    int arr[len];
    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        arr[i] = n;
    }

    cout<<"Please enter the number you want to search : ";
    cin>>search;

    sort(arr, len);

    int start = 0, end=len;
    int pos = binary_search(arr, start, end, search);

    if (pos > 0)
    {
        cout<<"Found Number "<<search<<" at postion "<<pos+1<<" .\n";
    }
    else
    {
        cout<<"ERROR 404! NOT FOUND"<<endl;
    }
    
   
   return 0;
}
