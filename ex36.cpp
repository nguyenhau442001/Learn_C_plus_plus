#include <iostream>
#include <cmath>
using namespace std;

float cluster_sqrt=0;
float n;

int cal_fractorial(int n)
{
    if (n==0) return 1;
    return n*cal_fractorial(n-1);
}

int main()
{
    cout<<"Bieu thuc co bao nhieu dau can: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {                
        cluster_sqrt=sqrt(cal_fractorial(i)+cluster_sqrt);
        cout<<"Day la lan lap thu \t:"<<i<<endl;
        cout<<"Ket qua la: "<<cluster_sqrt<<endl;        
    }
    cout<<cluster_sqrt;
}
