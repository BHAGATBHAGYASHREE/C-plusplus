#include <iostream>
using namespace std;
int main() 
{
int numofrows;
cout<<"enter the number of rows";
cin>>numofrows;
 for (int i=1;i<=numofrows;i++)
{
     for(int k=1;k<=i;k++){
        cout<<"*";
     }
    cout << endl;
}
    return 0;
}
