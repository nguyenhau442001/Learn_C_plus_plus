#include <iostream>
#include <cmath>
using namespace std;

float cluster_sqrt=sqrt(2);;
int n;
int main()
{
    cout<<"Bieu thuc co bao nhieu dau can: "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)
    {        
        cluster_sqrt=sqrt(2+cluster_sqrt);
    }
    cout<<cluster_sqrt;
}
