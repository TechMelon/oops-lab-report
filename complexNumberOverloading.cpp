#include <iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0){
    real = r;
    imag = i;
};
 
    Complex operator + (Complex c){
        Complex temp;
		temp.real=real+c.real;
		temp.imag=imag+c.imag;
		return temp;
    };
    void getComplex();
};

void Complex::getComplex(){
    cout<< real <<" + i"<< imag << endl;
}

int main(){
    Complex c1(3,7);
    Complex c2(5,4);
    Complex c3;
    
    c3 = c1+c2;
    
    c3.getComplex();
    return 0;
}