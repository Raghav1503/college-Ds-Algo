#include <iostream>
using namespace std;

int main()
{
    int rows1=0, cols1=0, rows2=0, cols2=0, n=0;
    
    cout<<"Enter the number of rows of the matrix 1 : ";
    cin>>rows1;
    cout<<"Enter the number of cols of the matrix 1 : ";
    cin>>cols2;

    cout<<"Enter the number of rows of the matrix 2 : ";
    cin>>rows1;
    cout<<"Enter the number of cols of the matrix 2 : ";
    cin>>cols2;

    int matrix1[rows1][cols1], matrix2[rows2][cols2], sparse_matrix2[100][3], sparse_matrix1[100][3];
    
    cout<<"Enter the elements of the Matrix 1 : "<<endl;
    for(int i=0; i<rows1;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols1; j++)
        {   
            cin>>n;
            
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Enter the elements of the Matrix 2 : "<<endl;
    for(int i=0; i<rows2;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols2; j++)
        {   
            cin>>n;
            matrix2[i][j] = n;
        }
        cout<<endl;
    }

    cout<<"MATRIX 1 = "<<endl;
    for(int i=0; i<rows1;i++)
    {
        for(int j=0; j<cols1; j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int len1=0;
    for(int i=0; i<rows1;i++)
    {   
        for(int j=0; j<cols1; j++)
        {
            if(matrix1[i][j] != 0)
        {   
            sparse_matrix1[len1][0] = i;
            sparse_matrix1[len1][1] = j;
            sparse_matrix1[len1][2] = matrix1[i][j];
            len1++;
        }
        }
    }
    
    for(int i=0; i<len1;i++)
    {
            cout<<sparse_matrix1[i][0]<<" ";
            cout<<sparse_matrix1[i][1]<<" ";
            cout<<sparse_matrix1[i][2]<<" "<<endl;
    }
    cout<<endl;

    cout<<"MATRIX 2 = "<<endl;
    for(int i=0; i<rows2;i++)
    {
        for(int j=0; j<cols2; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    
    int len2 = 0;
    for(int i=0; i<rows2;i++)
    {   
        for(int j=0; j<cols2; j++)
        {
            if(matrix2[i][j] != 0)
        {   
            sparse_matrix2[len2][0] = i;
            sparse_matrix2[len2][1] = j;
            sparse_matrix2[len2][2] = matrix2[i][j];
            len2++;
        }
        }
        
    }
    
    for(int i=0; i<len2;i++)
    {
            cout<<sparse_matrix2[i][0]<<" ";
            cout<<sparse_matrix2[i][1]<<" ";
            cout<<sparse_matrix2[i][2]<<" "<<endl;
    }
    cout<<endl;

    //MULITIPLICATION
    if(cols1 != rows2)
    {
        cout<<"MATRIX MULTIPLICATION IS NOT POSSIBLE."<<endl;
        return 0;
    }
    
    int res_matrix[cols1][rows2], res_sparse_matrix[100][3];
    
    int i=0, j=0;
    while(i<len1 && j<len2)
    {
        if(sparse_matrix1[i][2] == 0)
    }


    // Converting back to matrix
    cout<<"FINAL MATRIX\n";
    int l=0;
    for(int i=0; i<cols1;i++)
    {
        for(int j=0; j<rows2; j++)
        {
            if(res_sparse_matrix[l][0] == i && res_sparse_matrix[l][1] == j)
            {
                cout<<res_sparse_matrix[l][2]<<" ";
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

    return 0;
}