#include <iostream>
#include <cmath>

using namespace std;

//Tinh tong n phan tu  s(n)=1/2 + 2/3 +...+n/(n+1)
float n=0,sum=0;

int main()
{
    cout<<"Nhap n  :";
    cin>>n;
    if (n>=0)
    {
    for (float i=1;i<=n;i++)
    {
        sum=sum+(i/(i+1));
    }
        cout<<"Gia tri tong la: "<<sum;
    }
    else
        cout<<"Vui long nhap lai, so khong hop le";
}