#include<iostream>
using namespace std;
/*Create a student class and overload new and delete operators as a member function
of the class.*/
class Student{
public:
    int SGrade;
    int Sage;
    int something;
public:
    Student()
    {SGrade=1;
    Sage=0;}
    Student(int g,int s){SGrade=g;Sage=s;}
    void* operator new(long long unsigned int x)
    {
        cout<<"overloaded op called";
        void *p;
        p = malloc(sizeof(x));
        return p;
    }
    void operator delete(void* p)
    {
        cout<<"delete called";
        free(p);
    }

};
int main()
{
    Student *p = new Student;
    cout<<(*p).SGrade;
    cout<<sizeof(*p);
    delete p;
    return 0;
}
