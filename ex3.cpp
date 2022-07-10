#include <iostream>
#include <cmath>

using namespace std;

//Tinh tong n phan tu  s(n)=1+1/2+1/3+...+1/n
float n=0,sum=0;

int main()
{
    cout<<"Nhap n phan tu mang :";
    cin>>n;
    if (n!=0)
    {
    for (float i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    }
    else 
    sum=0;
    cout<<"Gia tri tong la :"<<sum;
}