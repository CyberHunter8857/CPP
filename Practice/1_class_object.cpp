#include <iostream>
using namespace std;
class circle
{
private:
    float r, dia, ar, peri;

public:
    void input()
    {
        cout << "Enter The Value of Radius:";
        cin >> r;
    }
    void diameter()
    {
        dia = r * 2;
        cout << "The Value of Diameter:" << dia << endl;
    }
    void area()
    {
        ar = 3.14 * r * r;
        cout << "Area is " << ar << endl;
    }
    void perimeter()
    {
        peri = 2 * 3.14 * r;
        cout << "Perimeter is " << peri << endl;
    }
};
int main()
{
    circle c1;
    c1.input();
    c1.diameter();
    c1.area();
    c1.perimeter();
    return 0;
}