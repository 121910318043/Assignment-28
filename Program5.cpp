#include<iostream>
using namespace std;
void* operator new(size_t size)
{
    cout<<"called";
    void *p;
    p = malloc(size);
    return p;
}
void operator delete(void *p)
{
    cout<<"deleted";
    free(p);
}
class Student{
private:
    int Roll;
public:
    void Display()
    {
        cout<<Roll;
    }
};
int main()
{
    Student *S1 = new Student;
    delete S1;
    return 0;
}
