#include <iostream>
#include <cmath>

using namespace std;
float factorial,fraction,x,sum=1,n; //fraction=x^2n/(2n)!;  n= factorial, (2n)!=(2n)*(2n-1)!

// Ham tinh giai thua
int cal_factorial(int n)
{
    if (n==0) return 1;
    return n*cal_factorial(n-1);
}

float cal_fraction(float x,float n)
{   
    factorial=cal_factorial(2*n+1);
    fraction=(pow(x,(2*n+1)))/factorial;
    return fraction;
}

int main()
{   
    cout<<"Nhap gia tri x"<<endl;
    cin>>x; 
    cout<<"Nhap gia tri n"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        sum=sum+cal_fraction(x,i);
        
    }
    cout<<sum;
}