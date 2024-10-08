#include <iostream>

class MyClass {
public:
    MyClass(char character) : data(character) {}

    char getData() {
        return data;
    }

private:
    char data;
};

int main() {
    MyClass obj = MyClass('A');
    //Missing line
    std::cout << ch;
    return 0;
}