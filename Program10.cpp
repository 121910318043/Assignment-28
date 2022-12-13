/*Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/
#include<iostream>
using namespace std;
class Distance{
private:
    int feet;
    int inches;
public:
    Distance(){feet=0,inches=0;}
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void operator()(int a,int b,int c)
    {
        feet = a+c+5;
        inches=a+b+15;
    }
    void showDistance()
    {
        cout<<"Feet "<<feet;
        cout<<endl;
        cout<<"Inches "<<inches;
    }
};
int main()
{
    Distance D1;
    D1(2,3,4);
    D1.showDistance();
    return 0;
}
