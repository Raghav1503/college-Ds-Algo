/*

2) Design the logic to remove the duplicate elements from an Array and after the
deletionthearrayshould containtheuniqueelements.

*/

#include <iostream>
using namespace std;

void sort(int*, int);
void remove_duplicates(int*, int);

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

void remove_duplicates(int arr[], int n)
{

    int temp[n]; 

    int j = 0; 
    for (int i=0; i<n-1; i++) 
  
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
    temp[j++] = arr[n-1]; 

    for(int i=0;i<j;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
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
    
    remove_duplicates(arr, len);

    return 0;
}