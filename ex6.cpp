#include <iostream>
#include <cmath>

using namespace std;

//Tinh tong n phan tu  s(n)=1/1x2 + 1/2x3 +...+1/n x (n+1)
float n=0,sum=0;

int main()
{
    cout<<"Nhap n  :";
    cin>>n;
    for (float i=1;i<=n;i++)
    {
        sum=sum+(1/(i*(i+1)));
    }
        cout<<"Gia tri tong la: "<<sum;
    
}