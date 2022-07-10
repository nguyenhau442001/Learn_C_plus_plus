#include <iostream>
#include <cmath>

using namespace std;

double fraction,x,sum=0; // fraction = x^n/(1+2+3+...+n)
int n;
int denominator=0; 
int main()
{   
    cout<<"Nhap x  : "; cin>>x; 
    cout<<"Nhap n  : "; cin>>n;
   
    
    for (float i=1;i<=n;i++)
    {   
        //in ra thu tu lap
        cout<<"Day la lan lap thu: "<< i<<endl;

        denominator=denominator+i;
        cout<<"Mau so cua phan so hien tai la: "<<denominator<<endl;

        fraction=(pow(x,i))/denominator;
        cout<<"Phan so hien tai la: "<<fraction<<endl;
        sum=sum+fraction;
        

    }
    cout<<"Tong hien tai la: "<<sum<<endl;
    return 0;
}