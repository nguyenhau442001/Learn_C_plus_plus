#include <iostream>
#include <cmath>

using namespace std;

float sum=1,n,product=1;

int main()
{
    cout<<"Nhap n  :";
    cin>>n;
    
    for (int i=2;i<=n;i++)
    {   
        product=product*i;
        sum=sum+product;
    }
    cout<<sum;
}