#include <iostream>
using namespace std;

int main()
{
    int s=0, n=0;
    cout<<"Enter the Size of Square Matrix : ";
    cin>>s;
    int len = (s*(s+1))/2;
    int elements[len];
    cout<<"Enter elements (row wise) : "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        elements[i] =n;
    }
    int k=0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(j <= i)
            {
                cout<<elements[k++]<<" ";
            }
            if(i <j)
            {
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}