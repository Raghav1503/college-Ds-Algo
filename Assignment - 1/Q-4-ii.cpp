#include <iostream>
using namespace std;

class Matrix
{
    private:
        int square=3;
        int a[3][3], b[3][3], c[3][3];

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

            cout<<"Enter the Elements for Second Matrix : "<<endl;
            
            for(int i=0; i<square;i++)
            {
                for(int j=0; j<square;j++)
                {
                    cin>>element;
                    b[i][j] = element;
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

            cout<<"MATRIX B = "<<endl<<endl;
            for(int i=0; i<square;i++)
            {
                for(int j=0; j<square;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl<<endl;
            }
        }

        void multiply()
        {
            for(int i=0; i<square; i++)
            {
                for(int j=0; j<square; j++)
                {
                    c[i][j] = 0;
                    for(int k=0; k<square; k++)
                    {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            cout<<"MATRIX C = "<<endl<<endl;
            for(int i=0; i<square;i++)
            {
                for(int j=0; j<square;j++)
                {
                    cout<<c[i][j]<<"\t";
                }
                cout<<endl<<endl;
            }
        }
        
};

int main()
{
    Matrix m;
    m.display();
    m.multiply();
    return 0;
}