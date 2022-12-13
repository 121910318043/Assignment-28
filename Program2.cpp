#include<iostream>
using namespace std;
class Complex{
private:
    int r;
    int i;
public:
    Complex(){r=i=0;}
    void SetData(int r,int i)
    {
        (*this).r=r;
        (*this).i=i;
    }
    void showData()
    {
        cout<<r<<"+"<<i<<"i";
    }
};
int main()
{
    Complex C;
    C.SetData(2,3);
    C.showData();
    return 0;
}
