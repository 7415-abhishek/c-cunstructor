#include<iostream>
using namespace std;

class sample {
    int i;
    float j;
    char k;

public:
    sample(int a, float b, char c) {
        i = a;
        j = b;
        k = c;
    }

    sample(const sample& s) {
        i = s.i;
        j = s.j;
        k = s.k;
    }

    void show() {
        cout << "i: " << i << ", j: " << j << ", k: " << k << endl;
    }
};

int main() {
    sample s1(5, 10.0, 'A');
    sample s2(s1);
    s1.show();
    s2.show();
    return 0;
}
