#include<iostream>
using namespace std;

class abstraction{
    private:
    int a,b;
    public:
    void set(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"Value of A is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main(){
    abstraction obj;
    obj.set(20,60);
    obj.display();
}