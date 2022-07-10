#include <iostream>
#include <iomanip>
using namespace std;

int height;

int main()
{   
    cout<<"Nhap vao day chieu cao cua tam giac: ";
    cin>>height;
    for(int i=1;i<=height;i++)
    {   
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
