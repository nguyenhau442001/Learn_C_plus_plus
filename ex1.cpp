#include <iostream>
#include <iomanip>
using namespace std;

int sum=0,dem=0,diem;
float average;
int main()
{     
    //Khi bat dau chuong trinh, nhap so diem dau tien cho nguoi dau tien
    cout<<"Nhap vao so diem cua hoc sinh, neu ket thuc hay nhap -1 " <<endl;
    cin>>diem;
    while ( diem != -1)
    {   
        dem++;
        sum=sum+diem;
        cout<<"Nhap vao so diem cua hoc sinh, neu ket thuc hay nhap -1 " <<endl;
        cin>>diem;
    }
     
    average=static_cast<double>(sum)/dem;
    cout << "Class average is " << setprecision(2) << average << endl;
}