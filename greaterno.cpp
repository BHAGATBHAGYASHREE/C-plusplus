#include <iostream>
using namespace std;
int main(){
int num1;
int num2;
int num3;
cout<<"enter the number1:"<<endl;
 cin>>num1;

cout<<"enter the number2:"<<endl;
   cin>>num2;

cout<<"enter the number3:"<<endl;
  cin>>num3;

if(num1>num2)
{
 cout<<"the greater number is:"<<num1; 
}  
else if(num2>num3)
{
 cout<<"the greater number is:"<<num2;   
}
else
 cout<<"the greater number is:"<<num3;   

return 0;
}