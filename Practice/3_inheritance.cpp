#include <iostream>
using namespace std;

class example
{
private:
    int b;

public:
    int a;
    void display()
    {
        cout << "\nThis is base class.\n";
        cout << "The Value of A is " << a << endl;
    }
};
class example2 : public example
{
public:
    void show()
    {
        cout << "\nThis is Derived class of Example.\n";
        cout << "The Value of A is " << a << endl;
    }
};
class example3: public example2
{
    public:
    void disp(){
        cout << "\nThis is Derived class of Example 2.\n";
        cout << "The Value of A is " << a << endl;
    }
};

int main()
{
    example obj1;
    obj1.a = 50;
    obj1.display();

    example2 obj2;
    obj2.a = 60;
    obj2.show();
    obj2.display();
    
    example3 obj3;
    obj3.a= 90;
    obj3.disp();
    obj3.show();
    obj3.display();
}