#include <iostream>
#include <iomanip>
using namespace std;
int ketqua,so_nguoi_dau=0,so_nguoi_rot=0;
int main()
{     
    //Nhap vao ket qua thi lan luot cua 10 thi sinh
    for(int dem=0;dem<10;dem++)
    {
    cout<<"Nhap vao ket qua thi cua thi sinh 1:do 2:truot \n";
    cin>>ketqua;
    if (ketqua==1)
    {
        so_nguoi_dau=so_nguoi_dau+1;
    }
    else
    {
        so_nguoi_rot=so_nguoi_rot+1;
    }
    }
    cout<<"So nguoi dau la: "<<so_nguoi_dau;
    cout<<"So nguoi rot la: "<<so_nguoi_rot;
    if (so_nguoi_dau>8)
    {
        cout<<"Tang tien hoc phi \n";
    }
    else
    {
        cout<<"Giu nguyen hoc phi \n";
    }
}