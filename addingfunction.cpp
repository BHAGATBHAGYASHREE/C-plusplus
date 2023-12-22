#include <iostream>
using namespace std ;
void add(int x,int y)
{
    cout<<"addition is : "<<x+y;
}
int main()
{
    int a, b;
    cout<<"enter value of A:"<<endl;
    cin>>a;

    cout<<"enter the value of b:"<<endl;
    cin>>b;
    add(a,b);

    return 0;
}