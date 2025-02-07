#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(float r = 0, int i = 0) : real(r), imag(i) {}

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator + (const Complex& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};

int main() {
    float real1, imag1, real2, imag2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> real1 >> imag1;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> real2 >> imag2;

    Complex c1(real1, imag1);
    Complex c2(real2, imag2);

    Complex c3 = c1 + c2;

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}