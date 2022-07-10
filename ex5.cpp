#include <iostream>
#include <cmath>

using namespace std;

//Tinh tong n phan tu  s(n)=1+1/3+1/5+...+1/(2n+1)
float n=0,sum=0;

int main()
{
    cout<<"Nhap n  :";
    cin>>n;
    for (float i=0;i<=n;i++)
    {
        sum=sum+(1/(2*i+1));
    }
        cout<<"Gia tri tong la: "<<sum;
    
}