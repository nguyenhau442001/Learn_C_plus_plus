#include <iostream>
#include <cmath>
using namespace std;

float cluster=0;
float n;

int cal_factorial(int n)
{
    if(n==0) return 1;
    return n*cal_factorial(n-1);
}
int main()
{
    cout<<"Nhap so nguyen n: "<<endl;
    cin>>n;
    
    for(float i=1;i<=n;i++)
    {                
        cluster=pow((cal_factorial(i)+cluster),(1/(i+1)));
        cout<<"Day la lan lap thu \t:"<<i<<endl;
        cout<<"Ket qua la: "<<cluster<<endl;        
    }
    cout<<cluster;
}
