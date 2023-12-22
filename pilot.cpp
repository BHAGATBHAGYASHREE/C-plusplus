#include <iostream>
using namespace std;
int main()
{ 
    int height;
    cout<<"enter the airplane height"; 
    cin >>height;
    cout<<height;
    if (height == 10000){
    cout<<"go around"<<endl;  
    } if (height>=5000 && height<=2000){
        cout<<"open gears of tyres";
    } if (height>2000 && height<1000){
        cout<<"open flaps";
    } if (height<1000){
        cout<<"land the plane and apply reverse";
    }
    return 0 ;
}