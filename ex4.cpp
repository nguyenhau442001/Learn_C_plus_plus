#include <iostream>
#include <cmath>
using namespace std;
int n; // n phan tu
int sum=1;
int main()
{   
    cout<<"Nhap vao so phan tu n: ";
    cin>>n;
    for (int i=2;i<=n;i++)
    {
        sum=sum+pow(i,2);   
    }
    cout<<sum<<endl;
}