#include <iostream>
using namespace std;

int main() {
    int length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    
    int area = length * breadth;
    cout << "Area of the rectangle is: " << area << endl;

    return 0;
}
