#include <iostream>
using namespace std;

int main()
{   
    // ################## INPUT : ROWS AND COLS ##############################################
    int rows=0, cols=0, n=0;
    cout<<"Enter the number of rows of the matrix : ";
    cin>>rows;
    cout<<"Enter the number of cols of the matrix : ";
    cin>>cols;

    int sparse_matrix2[100][3], sparse_matrix1[100][3], result_sparse_matrix[100][3];
    // ######################################################################################
    

    // ################## INPUT : MATRIX 1 ##############################################
    cout<<"Enter the elements of the Matrix 1 : "<<endl;
    int k1=0;
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols; j++)
        {   
            cin>>n;
            if(n != 0)
            {   
                sparse_matrix1[k1][0] = i;
                sparse_matrix1[k1][1] = j;
                sparse_matrix1[k1][2] = n;
                k1++;
            }   
        }
        cout<<endl;
    }
    cout<<endl;
    // ######################################################################################


    // ################## INPUT : MATRIX 1 ##############################################
    cout<<"Enter the elements of the Matrix 2 : "<<endl;
    int k2=0;
    for(int i=0; i<rows;i++)
    {
        cout<<"Enter Row "<<i+1<<endl;
        for(int j=0; j<cols; j++)
        {   
            cin>>n;
            if(n != 0)
            {   
                sparse_matrix2[k2][0] = i;
                sparse_matrix2[k2][1] = j;
                sparse_matrix2[k2][2] = n;
                k2++;
            }   
        }
        cout<<endl;
    }
    cout<<endl;
    // ######################################################################################


    // ################## PRINT : MATRIX 1 IN DENSE FORM ##############################################
    cout<<"MATRIX 1 = "<<endl;
    int temp_print=0;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(sparse_matrix1[temp_print][0] == i && sparse_matrix1[temp_print][1] == j)
            {
                cout<<sparse_matrix1[temp_print][2]<<" ";
                temp_print++;
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    // #################################################################################################
    
    // ################## PRINT : MATRIX 1 IN SPARSE FORM ##############################################
    for(int i=0; i<k1;i++)
    {
            cout<<sparse_matrix1[i][0]<<" ";
            cout<<sparse_matrix1[i][1]<<" ";
            cout<<sparse_matrix1[i][2]<<" "<<endl;
    }
    cout<<endl;
    // #################################################################################################

    // ################## PRINT : MATRIX 2 IN DENSE FORM ##############################################
    cout<<"MATRIX 2 = "<<endl;
    int temp_print2=0;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(sparse_matrix2[temp_print2][0] == i && sparse_matrix2[temp_print2][1] == j)
            {
                cout<<sparse_matrix2[temp_print2][2]<<" ";
                temp_print2++;
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    // #################################################################################################
    

    // ################## PRINT : MATRIX 2 IN SPARSE FORM ##############################################
    for(int i=0; i<k2;i++)
    {
            cout<<sparse_matrix2[i][0]<<" ";
            cout<<sparse_matrix2[i][1]<<" ";
            cout<<sparse_matrix2[i][2]<<" "<<endl;
    }
    cout<<endl;
    // #################################################################################################

    

    // ################## ADDITION ####################################################################
    int i=0,j=0,k3=0;
    while (i<k1 && j<k2)
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

    while (i < k1)
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
    // ############################################################################################
    
    
    // ################## PRINT : RESULT SPARSE IN SPARSE FORM #####################################
    cout<<"RESULT SPARCE MATRIX\n";
    for(int i=0; i<k3;i++)
    {
            cout<<result_sparse_matrix[i][0]<<" ";
            cout<<result_sparse_matrix[i][1]<<" ";
            cout<<result_sparse_matrix[i][2]<<" "<<endl;
    }
    cout<<endl;
    // ############################################################################################

    // ################## PRINT : RESULT SPARSE IN DENSE FORM #####################################
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
    // ############################################################################################
    
    return 0;
}