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

    int row_sum[rows], col_sum[cols];
    
    for(int i=0; i<cols; ++i)
    {   
        int sum=0;
        for(int j=0; j<rows; ++j)
        {
            sum += matrix[j][i];
        }
        col_sum[i] = sum;
    }


    for(int i=0; i<rows; ++i)
    {   
        int sum=0;
        for(int j=0; j<cols; ++j)
        {
            sum += matrix[i][j];
        }
        row_sum[i] = sum;
    }

    cout<<"Sum of Rows : "<<endl;
    for(int i=0; i<cols-1; i++)
    {
        cout<<row_sum[i]<<" ";
    }
    cout<<endl;

    cout<<"Sum of Columns : "<<endl;
    for(int i=0; i<rows+1; i++)
    {
        cout<<col_sum[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}