#include <iostream>
#include <iomanip>
using namespace std;

int height,bottom,thutle;

int plot_dot(int thutle)
{

}
int main()
{   
    cout<<"Nhap vao day chieu cao cua tam giac: ";
    cin>>height;
    for(int i=1;i<=height;i++)
    {   
        //Thut le giong nhu bai truoc
        for(int j=1;j<=height-i;j++)
            cout<<" ";
                //Neu la dinh thi cho 1*
        if(i==1) cout<<"*";
        // Neu la day thi cho height * sao
        if(i==height) 
            for(int i=0;i<2*height-1;i++)
                cout<<"*";
         

        if((i!=1)&&(i!=height))
        {            
                cout<<"*"; 
                for(int j=0;j<2*i-3;j++) 
                    cout<<" ";
                cout<<"*";
        }
        cout<<endl;
        

    }
}
