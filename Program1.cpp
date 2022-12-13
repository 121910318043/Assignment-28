#include<iostream>
using namespace std;
class Complex{
private:
    int r;
    int i;
public:
    Complex(int x,int y)
    {
        r=x;
        i=y;
    }
    Complex(){}
    friend ostream& operator<<(ostream&,Complex&);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &os,Complex &C)
{
    cout<<C.r<<"+"<<C.i<<"i";
    return os;
}
istream& operator>>(istream &is,Complex &C1)
{
    cout<<"Enter Real Part";
    cin>>C1.r;
    cout<<"Enter Imaginary Part";
    cin>>C1.i;
    return is;
}
int main()
{
    Complex C1;
    cin>>C1;
    cout<<C1;
    return 0;
}
