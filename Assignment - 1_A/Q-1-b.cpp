#include <iostream>
using namespace std;

int main()
{
    int s=0, n=0;
    cout<<"Enter the Size of Square Matrix : ";
    cin>>s;
    int len=3*s-2;
    int diagonal_elements[len];
    cout<<"Enter the elements : "<<endl;
    for (int i=0; i<len;i++)
    {
        cin>>diagonal_elements[i];
    }

    cout<<"\nMATRIX = "<<endl;
    int k=0;
    for(int i=0;i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            if(i-j<=1 && i-j>=-1)
            {
                cout<<diagonal_elements[k++]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}