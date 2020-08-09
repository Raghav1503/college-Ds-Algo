#include <iostream>
using namespace std;

int main()
{
    int rows=0, cols=0, n=0;
    cout<<"Enter the number of rows of the matrix : ";
    cin>>rows;
    cout<<"Enter the number of cols of the matrix : ";
    cin>>cols;
    int matrix[rows][cols];
    cout<<"Enter the elements of the Matrix : "<<endl;
    
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols; j++)
        {   
            cin>>n;
            matrix[i][j] = n;
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"MATRIX = "<<endl;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<rows; i++)
    {
        int min_row = matrix[i][0], col_index=0;
        for(int j=1; j<cols; j++)
        {
            if(min_row > matrix[i][j])
            {
                min_row = matrix[i][j];
                col_index = j;
            }
        }

        int k=0;
        for(k; k<rows; k++)
        {
            if(min_row < matrix[k][col_index])
            {
                break;
            }
        }

        if(k == cols)
        {
            cout << "Value of Saddle Point : " << min_row<<endl;
        }
    }
    
    return 0;
}