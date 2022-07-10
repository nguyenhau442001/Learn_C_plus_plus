#include <iostream>
#include <cmath>

using namespace std;

float n=0,product=1;

int main()
{
    cout<<"Nhap n  :";
    cin>>n;
    if (n>0)
    {
    for (float i=1;i<=n;i++)
    {
        product=product*i;
    }
        cout<<"Gia tri tich la: "<<product;
    }
    else
        cout<<"Vui long nhap lai, so khong hop le";
}