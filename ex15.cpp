#include <iostream>
#include <cmath>

using namespace std;

double sum=0,n,mauso=0,phanso;

int main()
{   
    cout<<"Nhap n  : ";
    cin>>n;
    
    for (int i=1;i<=n;i++)
    {   
        mauso=mauso+i;
        sum=sum+(1/mauso);
    }
    cout<<sum;
    return 0;
}