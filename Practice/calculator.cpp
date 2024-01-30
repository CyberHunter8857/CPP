#include <iostream>
using namespace std;

class calculator
{
private:
    int a, b, c;

public:
    void values()
    {
        cout << "Enter The Value of A:";
        cin >> a;
        cout << "Enter The Value of B:";
        cin >> b;
    }
    void add()
    {
        c = a + b;
        cout << "Addition is " << c << endl;
    }
    void sub()
    {
        c = a - b;
        cout << "Subtraction is " << c << endl;
    }
    void multi()
    {
        c = a * b;
        cout << "Multiplication is " << c << endl;
    }
    void div()
    {
        c = a / b;
        cout << "Division is " << c << endl;
    }
    void mod()
    {
        c = a % b;
        cout << "Modulus is " << c << endl;
    }
};
int main()
{
    calculator n1;
    n1.values();
    n1.add();
    n1.sub();
    n1.multi();
    n1.div();
    n1.mod();
}