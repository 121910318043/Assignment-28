#include<iostream>
using namespace std;
class Integer{
private:
    int a;
public:
    Integer(){a=0;}
    Integer(int a):a(a){}
    Integer operator!()
    {
        a=-a;
        return *this;
    }
    friend ostream& operator<<(ostream&,Integer&);
};
ostream& operator<<(ostream &OS,Integer &I)
{
    OS<<I.a;
    return OS;
}
int main()
{
    Integer a(2),B;
    B=!a;
    cout<<B;
}
