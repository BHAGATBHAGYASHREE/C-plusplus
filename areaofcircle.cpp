#include<iostream>
using namespace std;
float area(float);
float area(float,float);
int main()
{
        
        float r,bs,ht;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        cout<<"Area of circle is "<<area(r)<<endl;
        cout<<"Area of triangle is "<<area(bs,ht)<<endl;

}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}