#include <iostream>
#include <cmath>

using namespace std;

float n=0,sum=0;

int main()
{
    cout<<"Nhap n  :";
    cin>>n;
    if (n>=0)
    {
    for (float i=0;i<=n;i++)
    {
        sum=sum+((2*i+1)/(2*i+2));
    }
        cout<<"Gia tri tong la: "<<sum;
    }
    else
        cout<<"Vui long nhap lai, so khong hop le";
}