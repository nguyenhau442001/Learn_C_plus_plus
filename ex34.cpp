#include <iostream>
#include <cmath>
using namespace std;

float cluster_sqrt=0;
int n;
int main()
{
    cout<<"Bieu thuc co bao nhieu dau can: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {       
         
        cluster_sqrt=sqrt(i+cluster_sqrt);
    }
    cout<<cluster_sqrt;
}
