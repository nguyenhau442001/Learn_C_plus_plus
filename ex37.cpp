#include <iostream>
#include <cmath>
using namespace std;

float cluster=0;
float n;

int main()
{
    cout<<"Nhap so nguyen n: "<<endl;
    cin>>n;
    
    for(float i=2;i<=n;i++)
    {                
        cluster=pow((i+cluster),(1/i));
        cout<<"Day la lan lap thu \t:"<<i-1<<endl;
        cout<<"Ket qua la: "<<cluster<<endl;        
    }
    cout<<cluster;
}
