#include <iostream>
using namespace std;

class Matrix
{
    private:
        int square=3;
        int a[3][3], a_transpose[3][3];

    public:
         Matrix()
        {
            int n=0, element=0;
            //cout<<"Enter the size of square matrix : ";
            //cin>>n;
            //square = n;

            cout<<"Enter the Elements for first Matrix : "<<endl;
            
            for(int i=0; i<square;i++)
            {
                for(int j=0; j<square;j++)
                {
                    cin>>element;
                    a[i][j] = element;
                }
            }
            cout<<endl;
        }

        void display()
        {
            cout<<"MATRIX A = "<<endl<<endl;
            for(int i=0; i<square;i++)
            {
                for(int j=0; j<square;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl<<endl;
            }
        }

        void transpose()
        {
            for(int i=0; i<square; i++)
            {
                for(int j=0; j<square; j++)
                {
                    a_transpose[i][j] = a[j][i];
                }
            }

            cout<<"MATRIX A' = "<<endl<<endl;
            for(int i=0; i<square;i++)
            {
                for(int j=0; j<square;j++)
                {
                    cout<<a_transpose[i][j]<<"\t";
                }
                cout<<endl<<endl;
            }
        }
        
};

int main()
{
    Matrix m;
    m.display();
    m.transpose();
    return 0;
}