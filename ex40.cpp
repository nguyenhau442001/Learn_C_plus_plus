#include <iostream>
#include <cmath>
using namespace std;

float cluster=0;
float n,x;

int main()
{

    cout<<"Nhap so  x: "<<endl;
    cin>>x;
    cout<<"Nhap so nguyen n: "<<endl;
    cin>>n;
    for(float i=1;i<=n;i++)
    {                
        cluster=sqrt((pow(x,i)+cluster));
        cout<<"Day la lan lap thu \t:"<<i<<endl;
        cout<<"Ket qua la: "<<cluster<<endl;        
    }
    cout<<cluster;
}
