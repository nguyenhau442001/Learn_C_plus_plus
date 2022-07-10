#include <iostream>
#include <cmath>

using namespace std;

//Tinh tong n phan tu  s(n)=1^2+2^2+3^2+.........+n^2
int n=0,sum=0;

int main()
{
    cout<<"Nhap n phan tu mang :";
    cin>>n;
    if (n!=0)
    {
    for (int i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    }
    else 
    sum=0;
    cout<<"Gia tri tong la :"<<sum;
}