#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of y: ";
    cin >> y;

    int product = x * y;
    cout << "Product of " << x << " and " << y << " is: " << product << endl;

    return 0;
}
