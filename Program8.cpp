/*Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/
#include<iostream>
using namespace std;
class Coordinate{
private:
    int x,y,z;
public:
    Coordinate(){x=y=z=0;}
    Coordinate(int x,int y,int z){this->x=x;this->y=y;this->z=z;}
    Coordinate operator,(Coordinate C)
    {
        return C;
    }
    void ShowCo()
    {
        cout<<x<<" "<<y<<" "<<z;
    }
};
int main()
{
    Coordinate C1(1,2,3),C2(3,2,1),C3;
    C3=(C1,C2);
    C3.ShowCo();
    return 0;
}

