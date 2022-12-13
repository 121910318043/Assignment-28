#include<iostream>
using namespace std;
class Marks{
public:
    int a=3;
    int b=11;
public:
    int showData()
    {
        cout<<a;
        cout<<b;
        return 0;
    }
    Marks* operator->()
{
    return this;
}
};
int main()
{
    Marks M1;
    M1->showData();
}
