#include <iostream>
using namespace std;
int main()
{
    unsigned long n;
    do{
        cout<<"enter any number";
        cin>>n;
         
        cout<<"you entered "<<n<<"\n";
       
    }while(n!=0);
    cout<<"exited the loop";
    return 0;
}