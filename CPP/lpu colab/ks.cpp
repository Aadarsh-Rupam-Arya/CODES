#include <iostream>
using namespace std;

class A {
public:
    int x;
    A() { x = 5; cout << x << " "; }
    ~A() { x += 10; cout << x << " "; }
};

class B : public A {
public:
    int y;
    B() { y = 3; cout << y << " "; }
    ~B() { y += 20; cout << y << " "; }
};

class C : public B {
public:
    int z;
    C() { z = 7; cout << z << " "; }
    ~C() { z += 30; cout << z << " "; }
};

int main() {
    C obj;
    cout << obj.x + obj.y + obj.z << endl;
    return 0;
}