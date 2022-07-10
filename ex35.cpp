#include <iostream>
#include <cmath>
using namespace std;

float cluster_sqrt=0;
float n;
int main()
{
    cout<<"Bieu thuc co bao nhieu dau can: "<<endl;
    cin>>n;
    cluster_sqrt=sqrt(n);
    for(int i=n;i>1;i--)
    {                
        cluster_sqrt=sqrt((i-1)+cluster_sqrt);
        cout<<"Day la lan lap thu \t:"<<(n-i+1)<<endl;
        cout<<cluster_sqrt<<endl;        
    }
    cout<<cluster_sqrt;
}
