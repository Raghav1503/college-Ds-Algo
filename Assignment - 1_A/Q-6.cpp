#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of square matrix : ";
    cin>>size;
    
    int matrix[size][size];
    int rowBegin=0, columnBegin=0, rowEnd=size-1, columnEnd=size-1, num=1;
    while(rowBegin <= rowEnd && columnBegin <= columnEnd)
    {
        for(int i=columnBegin; i<=columnEnd; i++)
        {
            matrix[rowBegin][i] = num++;
        }
        rowBegin++;

        for(int i=rowBegin; i<=rowEnd; i++)
        {
            matrix[i][columnEnd] = num++;
        }
        columnEnd--;

        if(rowBegin <=rowEnd)
        {
            for(int i=columnEnd; i>=columnBegin; i--)
            {
                matrix[rowEnd][i] = num++;
            }
        rowEnd--;
        }
        
        if(columnBegin <=columnEnd)
        {
            for(int i=rowEnd; i>=rowBegin; i--)
            {
                matrix[i][columnBegin] = num++;
            }
        columnBegin++;
        }
    }
    
    cout<<"\nSPIRAL MATRIX = "<<endl;
    for(int i=0; i<size;i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}