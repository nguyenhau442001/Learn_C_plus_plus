// Đề bài: Liệt kê tất cả “ước số” của số nguyên dương n.
// Số a gọi là ước số nếu n/a kết quả là 1 số nguyên , ta kiểm tra trong đoạn [1,n] có cố nào chia hết.

#include <iostream>
int n,product=1;
int main()
{
    // Nhap vao so nguyen duong n tu ban phim
    std::cout<<"Nhap vao so nguyen duong: "<<std::endl;
    std::cin>>n;

    //Kiem tra trong đoạn [1,n] có số nào mà số n chia hết.
    std::cout<<"Uoc so cua n la: "<<std::endl;
    for (int i=1;i<=n;i++)
    {   
        
        if ((n%i)==0)
        {   
            product=product*i;
            std::cout<<i<<" \t";
        }
    }
    std::cout<<",Tong cac uoc so la: "<<product;
}

