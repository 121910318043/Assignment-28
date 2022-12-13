#include<iostream>
using namespace std;
class Convert{
private:
    float a;
public:
    Convert(){a=1.2f;}
    operator int()
    {
        cout<<"called";
        this->a = (int)this->a;
        return this->a;
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    Convert A;
    A.display();
    (int)A;
    A.display();
}
