#include <iostream>
#include <cmath>

using namespace std;

//Tinh tong n phan tu  s(n)=1+1/2+1/4+...+1/2n
float n=0,sum=0;

int main()
{
    cout<<"Nhap n phan tu mang :";
    cin>>n;
    if (n!=0)
    {
        for (float i=1;i<=n;i++)
        {
        sum=sum+(1/(2*i));
        }
        cout<<"Gia tri tong la: "<<sum;
    }
    else 
        cout<<"Gia tri khong hop le, xin nhap lai ";
    
    
}