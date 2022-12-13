#include<iostream>
using namespace std;
class Array{
private:
    int *a;
    int index;
    int size;
public:
    Array(){}
    Array(int size1)
    {
        size=size1;
        index=0;
        a = (int*)malloc(sizeof(int)*size1);
    }
    Array& operator[](int ind)
    {
        if(ind>=(*this).size)
        {
            cout<<"Error";
            exit(0);
        }
        index=ind;
        return *this;
    }
    void operator=(int x)
    {
        a[index]=x;
    }
    friend ostream& operator<<(ostream&,Array&);

};
ostream& operator<<(ostream &os,Array &A){
    cout<<A.a[A.index];
    return os;
}
int main()
{
    Array A(10);
    A[9]=1;
    A[8]=2;
    cout<<A[9];
    cout<<A[8];
    return 0;
}
