/*

Q-1) Space required to store any two-dimensional array is number of rows X number of columns. Assuming array is used to store elements of the following
matrices, implement an efficient way that reduces the space requirement.
a) Diagonal Matrix
    [1, 0, 0
     0, 2, 0
     0, 0, 3]

b) Tri-diagonal Matrix
c) Lower triangular Matrix
d) Upper Triangular Matrix
e) Symmetric Matrix
*/



#include <iostream>
using namespace std;

int main()
{   
    int s=0, n=0;
    cout<<"Enter the Size of Square Matrix : ";
    cin>>s;

    cout<<"Enter the Diagonal Elements of The Matrix : "<<endl;
    int diagonal_elements[s];
    for(int i=0;i<s;i++)
    {
        cin>>n;
        diagonal_elements[i] = n;
    }
    
    cout<<"\nMATRIX = "<<endl;
    for(int i=0;i<s;i++)
    {
        for(int j=0; j<s; j++)
        {
            if(i == j)
                cout<<diagonal_elements[i]<<" ";
            else
            {
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}