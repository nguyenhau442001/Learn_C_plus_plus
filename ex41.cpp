#include <iostream>
#include <cmath>
using namespace std;

float fraction=0.5; //(1/ (1+1) )
float n,x,add,divided_fraction,result;

// +1 into fraction,and then divided by 1

int main()
{
    cout<<"Nhap so nguyen n: "<<endl;
    cin>>n;
    if(n>=2)
    {
        for(int i=1;i<=(n-1);i++)
        {
                add=1+fraction;
                divided_fraction=1/add;
                fraction=divided_fraction;
        }
    
    } 
    if(n==1)
    {
      cout<<"Result is :"<<0.5;  
    }
    cout<<fraction;
}