/*

5) Implement the Binary search algorithm regarded as a fast search
algorithm with run-time complexity of Ο(log n) in comparison to the Linear
Search.

*/


#include <iostream>
using namespace std;

int main()
{
    int len, n;
    
    cout<<"Please Enter the Length of the Array : ";
    cin>>len;
    
    int arr[len];
    cout<<"Enter the Elements : "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        arr[i] = n;
    }

    cout<<"UNSORTED ARRAY : "<<endl;
    for (int i=0; i<len; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<endl;
    
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
            for(int i=0; i<len; i++)
            {
                cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
        
    }

    std::cout<<"\nSORTED ARRAY : "<<endl;
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;


    return 0;
}
