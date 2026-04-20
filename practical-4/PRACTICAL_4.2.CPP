#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:

    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }


    Point& move(int dx, int dy) {
        x = x + dx;
        y = y + dy;
        return *this;
    }


    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

void updatePoint(Point* p) {
    p->move(5, 5);
}

int main() {
    Point p(1, 1);

    cout << "Initial ";
    p.display();


    p.move(2, 3).move(-1, 4);

    cout << "After chaining ";
    p.display();

    updatePoint(&p);

    cout << "After pointer update ";
    p.display();
cout<<"bhesdadiya palasi_25CE008";

    return 0;
}
