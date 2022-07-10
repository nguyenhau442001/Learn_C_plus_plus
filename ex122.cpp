#include <iostream>
using namespace std;
float a;
float myArray[10]={12222,3,5,10.6,7,81,221,31123,435.3,200};
int main()
{
    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
            if(myArray[i]>myArray[j])
            {
                a=myArray[j];
                myArray[j]=myArray[j];
                myArray[j]=a;
            }
        
    }
    printf("\nMang da sap xep la: ");
    for(int i=0;i<10;i++)
    {
        printf("%0.2f ",myArray[i]);
    }
}