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
    
    int sparse_matrix[100][3], k=0;
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols; j++)
        {   
            cin>>n;
            if(n != 0)
        {   
            sparse_matrix[k][0] = i;
            sparse_matrix[k][1] = j;
            sparse_matrix[k][2] = n;
            k++;
        }
        }
    }
    cout<<endl;

    cout<<"FINAL MATRIX\n";
    int l=0;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(sparse_matrix[l][0] == i && sparse_matrix[l][1] == j)
            {
                cout<<sparse_matrix[l][2]<<" ";
                l++;
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=0; i<k;i++)
    {
            cout<<sparse_matrix[i][0]<<" ";
            cout<<sparse_matrix[i][1]<<" ";
            cout<<sparse_matrix[i][2]<<" "<<endl;
    }
    cout<<endl;

    // TRANSPOSE

    for(int i=0; i<k;i++)
    {
        int temp = sparse_matrix[i][1];
        sparse_matrix[i][1] = sparse_matrix[i][0];
        sparse_matrix[i][0] = temp;
    }

    for(int i=0; i<k;i++)
    {
            cout<<sparse_matrix[i][0]<<" ";
            cout<<sparse_matrix[i][1]<<" ";
            cout<<sparse_matrix[i][2]<<" "<<endl;
    }
    cout<<endl;

    // SORTING
    for(int j=0; j<k-1; j++)
    {
        for(int i=0;i<k-j-1;i++)
        {
            if(sparse_matrix[i][0] > sparse_matrix[i+1][0])
            {
                int temp1 = sparse_matrix[i][0], temp2 = sparse_matrix[i][1], temp3 = sparse_matrix[i][2];
                
                sparse_matrix[i][0] = sparse_matrix[i+1][0];
                sparse_matrix[i][1] = sparse_matrix[i+1][1];
                sparse_matrix[i][2] = sparse_matrix[i+1][2];
            
                sparse_matrix[i+1][0] = temp1;
                sparse_matrix[i+1][1] = temp2;
                sparse_matrix[i+1][2] = temp3;
            }
        }
    }

    cout<<"FINAL MATRIX\n";
    int a=0;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(sparse_matrix[a][0] == i && sparse_matrix[a][1] == j)
            {
                cout<<sparse_matrix[a][2]<<" ";
                a++;
            }
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