#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float a,n=0; // amount on deposit

int main()
{   
    int p=1000; //unit: dollars
    float r=0.05; // interest rate 
     cout<<setw(4)<<"Year"<<setw(21)<<"Amount on deposit"<<endl;
    for(int i=0;i<10;i++)
    {
    a=p*(pow((1+r),(n+1)));
    
    cout<<setw(4)<<n+1<<setw(21)<<a<<endl;
    n++;
    }
}