#include <iostream>

using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there is only one disk, move it from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary peg using destination as the auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary peg to destination using source as the auxiliary peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
