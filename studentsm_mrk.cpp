#include <iostream>
using namespace std;
int main()
{
    int arr[] = {90, 9,15, 6, 101, 1, 33};
    int size = sizeof(arr) / sizeof(arr[0]); 

    if (size == 0) {
       cout << "The array is empty." <<endl;
        return 1; 
    }

    int max = arr[0]; 

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

  cout << "The largest number in the array is: " << max << endl;

    return 0;
}