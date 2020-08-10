#include <iostream>
using namespace std;

int main()
{
    int rows=0, cols=0, n=0;
    cout<<"Enter the number of rows of the matrix : ";
    cin>>rows;
    cout<<"Enter the number of cols of the matrix : ";
    cin>>cols;

    int matrix1[rows][cols], matrix2[rows][cols], sparse_matrix2[100][3], sparse_matrix1[100][3], result_sparse_matrix[100][3];
    
    cout<<"Enter the elements of the Matrix 1 : "<<endl;
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols; j++)
        {   
            cin>>n;
            matrix1[i][j] = n;
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Enter the elements of the Matrix 2 : "<<endl;
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols; j++)
        {   
            cin>>n;
            matrix2[i][j] = n;
        }
        cout<<endl;
    }

    cout<<"MATRIX 1 = "<<endl;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int k=0;
    for(int i=0; i<rows;i++)
    {   
        for(int j=0; j<cols; j++)
        {
            if(matrix1[i][j] != 0)
        {   
            sparse_matrix1[k][0] = i;
            sparse_matrix1[k][1] = j;
            sparse_matrix1[k][2] = matrix1[i][j];
            k++;
        }
        }
    }
    
    for(int i=0; i<k;i++)
    {
            cout<<sparse_matrix1[i][0]<<" ";
            cout<<sparse_matrix1[i][1]<<" ";
            cout<<sparse_matrix1[i][2]<<" "<<endl;
    }
    cout<<endl;

    cout<<"MATRIX 2 = "<<endl;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    
    int k2 = 0;
    for(int i=0; i<rows;i++)
    {   
        for(int j=0; j<cols; j++)
        {
            if(matrix2[i][j] != 0)
        {   
            sparse_matrix2[k2][0] = i;
            sparse_matrix2[k2][1] = j;
            sparse_matrix2[k2][2] = matrix2[i][j];
            k2++;
        }
        }
        
    }
    
    for(int i=0; i<k2;i++)
    {
            cout<<sparse_matrix2[i][0]<<" ";
            cout<<sparse_matrix2[i][1]<<" ";
            cout<<sparse_matrix2[i][2]<<" "<<endl;
    }
    cout<<endl;

    //ADDITION

    
        int i=0,j=0,k3=0;
    while (i<k && j<k2)
    {
        if (sparse_matrix1[i][0] > sparse_matrix2[j][0] || (sparse_matrix1[i][0] == sparse_matrix2[j][0] && sparse_matrix1[i][1] > sparse_matrix2[j][1]))
        {
            result_sparse_matrix[k3][0] = sparse_matrix2[j][0];
            result_sparse_matrix[k3][1] = sparse_matrix2[j][1];
            result_sparse_matrix[k3][2] = sparse_matrix2[j][2];
            j++;
            k3++;
        }

        else if (sparse_matrix1[i][0] < sparse_matrix2[j][0] || (sparse_matrix1[i][0] == sparse_matrix2[j][0] && sparse_matrix1[i][1] < sparse_matrix2[j][1]))
        {
            result_sparse_matrix[k3][0] = sparse_matrix1[i][0];
            result_sparse_matrix[k3][1] = sparse_matrix1[i][1];
            result_sparse_matrix[k3][2] = sparse_matrix1[i][2];
            i++;
            k3++;
        }

        else
        {
            int sum_of_val = sparse_matrix1[i][2] + sparse_matrix2[j][2];

            if (sum_of_val != 0)
            {
                result_sparse_matrix[k3][0] = sparse_matrix2[j][0];
                result_sparse_matrix[k3][1] = sparse_matrix2[j][1];
                result_sparse_matrix[k3][2] = sum_of_val;
            }
            i++;
            j++;
            k3++;
        }
    }

    while (i < k)
    {
        result_sparse_matrix[k3][0] = sparse_matrix1[i][0];
        result_sparse_matrix[k3][1] = sparse_matrix1[i][1];
        result_sparse_matrix[k3][2] = sparse_matrix1[i][2];
        i++;
        k3++;
    }

    while (j < k2)
    {
        result_sparse_matrix[k3][0] = sparse_matrix2[j][0];
        result_sparse_matrix[k3][1] = sparse_matrix2[j][1];
        result_sparse_matrix[k3][2] = sparse_matrix2[j][2];
        j++;
        k3++;
    }
    
    

    cout<<"RESULT SPARCE MATRIX\n";
    for(int i=0; i<k3;i++)
    {
            cout<<result_sparse_matrix[i][0]<<" ";
            cout<<result_sparse_matrix[i][1]<<" ";
            cout<<result_sparse_matrix[i][2]<<" "<<endl;
    }
    cout<<endl;

    // Converting back to matrix
    cout<<"FINAL MATRIX\n";
    int l=0;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(result_sparse_matrix[l][0] == i && result_sparse_matrix[l][1] == j)
            {
                cout<<result_sparse_matrix[l][2]<<" ";
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