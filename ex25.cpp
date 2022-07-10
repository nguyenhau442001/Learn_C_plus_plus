// Đề bài: Liệt kê tất cả “ước số” của số nguyên dương n.
// Số a gọi là ước số nếu n/a kết quả là 1 số nguyên , ta kiểm tra trong đoạn [1,n] có cố nào chia hết.

#include <iostream>

int n;
int sum=0;
int main()

{
    int chiso=0;
    // Nhap vao so nguyen duong n tu ban phim
    std::cout<<"Nhap vao so nguyen duong: "<<std::endl;
    std::cin>>n;

    //Kiem tra trong đoạn [1,n] có số nào mà số n chia hết.
    
    for (int i=1;i<=n;i++)
    {   
        
        if ((n%i)==0)
        {   
            
            //std::cout<<i<<" \t";
            if((i%2)==0)
            {
                    sum=sum+i;
                    std::cout<<"So chan la:  "<< i<<"\n";
            }
            
        }
    }
    std::cout<<"sum:  "<< sum;
}

