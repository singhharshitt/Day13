#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Copy constructor
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
    }

    // Function to display dimensions
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);  // Create a rectangle
    Rectangle rect2 = rect1;  // Copy constructor is called

    rect1.display();
    rect2.display();

    return 0;
}
