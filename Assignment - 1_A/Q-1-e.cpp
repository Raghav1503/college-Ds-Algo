#include <iostream>
using namespace std;

int main()
{
    int s=0, n=0;
    std::cout<<"Enter the Size of Square Matrix : ";
    cin>>s;
    int len = s * (s + 1) / 2, elements[len];
    std::cout<<"Enter elements (row wise) : "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>n;
        elements[i] =n;
    }
    std::cout<<"Matrix : "<<endl;
    int p=0, l=0, m=0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(i < j)
            {
                std::cout<<elements[l++]<<" ";
            }
            else if(j<i)
            {
                std::cout<<elements[p]<<" ";
                if(i -j == 1)
                {
                    p = i;
                }
                else
                {
                    p += (s-1) - j;
                }
            }
            else
            {
                std::cout<<elements[l++]<<" ";
                p++;
            }
            
        }
        cout<<endl;                
        }
        std::cout<<endl;

    return 0;
}
   