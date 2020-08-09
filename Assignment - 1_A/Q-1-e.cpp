#include <iostream>
using namespace std;

int main()
{
    int s=0, n=0;
    cout<<"Enter the Size of Square Matrix : ";
    cin>>s;
    int len = (s*(s+1))/2;
    int elements[s];
    int e[((s-1)*(s))/2];
    cout<<"Enter elements (row wise) -1 : "<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>n;
        elements[i] =n;
    }
    cout<<"a"<<endl;
    int k=0;
    for(int i=0; i<((s-1)*(s))/2; i++)
    {
        cin>>n;
        e[i] =n;
    }
    int p=0, l=0, m=0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(j == i)
            {
                cout<<elements[p++]<<" ";
            }
            if(i < j)
            {
                cout<<e[l++]<<" ";
            }
            if(j < i)
            {
                cout<<e[m++]<<" ";
            }            
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}