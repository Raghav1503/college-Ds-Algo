#include <iostream>
using namespace std;

void sort(int*, int);
int find_missing_no(int*, int);


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

int find_missing_no(int a[], int len) 
{ 
    for (int i=0; i<len; i++)         
        if (a[i] != (i+1)) 
            return (i+1); 
   
    // If all numbers from 1 to n 
    // are present 
    return len+1; 
} 


int main()
{
    int len=0, n=0;
    
    cout<<"Please Enter the Length of the Array : ";
    cin>>len;
    
    int arr[len];
    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        arr[i] = n;
    }
    
    sort(arr, len);

    cout << find_missing_no(arr, len)<<" "<<endl;
    
    return 0; 
}