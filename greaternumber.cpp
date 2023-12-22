#include <iostream>
using namespace std ;
int findLargest(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int number1, number2;

   cout << "Enter the first number: ";
   cin >> number1;

  cout << "Enter the second number: ";
cin >> number2;


    int largest = findLargest(number1, number2);

 cout << "The largest number is: " << largest << std::endl;

    return 0;
}
