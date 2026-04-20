#include <iostream>
using namespace std;

class Grading {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }


    virtual void calculateGrade() = 0;
};

class Undergraduate : public Grading {
public:
    void calculateGrade() {
        cout << "Undergraduate Student Grade: ";

        if (marks >= 75)
            cout << "A" << endl;
        else if (marks >= 60)
            cout << "B" << endl;
        else if (marks >= 50)
            cout << "C" << endl;
        else
            cout << "Fail" << endl;
    }
};


class Postgraduate : public Grading {
public:
    void calculateGrade() {
        cout << "Postgraduate Student Grade: ";

        if (marks >= 80)
            cout << "A" << endl;
        else if (marks >= 65)
            cout << "B" << endl;
        else if (marks >= 55)
            cout << "C" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main() {
    int choice, marks;

    cout << "Enter Student Type:\n";
    cout << "1. Undergraduate\n2. Postgraduate\n";
    cin >> choice;

    cout << "Enter Marks: ";
    cin >> marks;

    Grading* g;
    if (choice == 1) {
        g = new Undergraduate();
    } else {
        g = new Postgraduate();
    }

    g->setMarks(marks);
    g->calculateGrade();

    delete g;
    cout<<"\n bhesdadiya palsi_25CE008";

    return 0;
}
