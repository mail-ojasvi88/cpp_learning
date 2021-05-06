#include<iostream>
using namespace std;
class complex
{
   private:
     int real;
     int img;
   public:
     void print()
     {
         cout<<real<<"+i"<<img<<endl;
     }  
     complex(int r,int i)
     {
         real=r;
         img=i;
     }
};
int main()
{
    complex c1(10,15);
    c1.print();
    return 0;
}