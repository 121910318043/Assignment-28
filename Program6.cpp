#include<iostream>
using namespace std;
/*Create a complex class and overload assignment operator for that class.*/
class Complex{
private:
    int real;
    int imaginary;
public:
    Complex(){real=0;imaginary=0;}
    Complex(int r,int i)
    {
        real= r;
        imaginary= i;
    }
    Complex(const Complex &C)
    {
        real=C.real;
        imaginary=C.imaginary;
    }
    Complex operator=(Complex &C)
    {
        real=C.real;
        imaginary=C.imaginary;
        return *this;
    }
    friend ostream& operator<<(ostream&,Complex&);
};
ostream& operator<<(ostream &OS,Complex &C)
{
    OS<<C.real<<"+"<<C.imaginary<<"i";
    return OS;
}
int main()
{
    Complex C1(1,2),C2,C3(9,10);
    Complex C4=C1;
    C2=C3;
    cout<<C4;
    cout<<endl;
    cout<<C2;
    return 0;
}
