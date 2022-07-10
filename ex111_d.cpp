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
        if(i==1) cout<<"*";
        if(i==2) cout<<"**";
        if(i==height) 
        {
            for(int i=0;i<height;i++)
                cout<<"*";
        }   
        if((i!=2)&&(i!=height)&&(i!=1)) 
        {
            cout<<"*";
            for(int j=0;j<i-2;j++)
            {
               cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }
}
