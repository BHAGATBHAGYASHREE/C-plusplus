#include <iostream>
using namespace std ;
int add(int x,int y=5,int r=6)
{
    
    int z = x+y+r;
    return z;

   
}
int main()
{
    int a, b,r,sum;
    cout<<"enter value of A:"<<endl;
    cin>>a;

    // cout<<"enter the value of b:"<<endl;
    // cin>>b;
   sum= add(a);
cout<<"addition is : "<<sum;
    return 0;
}