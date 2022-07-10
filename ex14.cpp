#include <iostream>
#include <cmath>

using namespace std;

double sum=0,n,x;

int main()
{   
    cout<<"Nhap x  :";
    cin>>x;
    
    cout<<"Nhap n  :";
    cin>>n;
    
    for (int i=0;i<=n;i++)
    {   
        sum=sum+pow(x,2*i+1);
    }
    cout<<sum;
}