#include <iostream>
using namespace std;

class Element {
public:
    int value;
    Element(int val) : value(val) {}
    Element operator++(int) {
        value--;
        return *this;
    }
};

int main() {
    Element obj(121);
    Element result = obj++;
    cout << result.value;
    return 0;
}