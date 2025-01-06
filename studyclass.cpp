#include <iostream>
using namespace std;
class Box
{
    public:
    double length;
    double breadth;
    double height;
    double get(void);
    void set(double len,double bre,double hei);
};
double Box::get(void)
{
    return length*breadth*height;
}
void Box::set(double len,double bre,double hei)
{
    length =len;
    breadth =bre;
    height =hei;
}
int main()
{
    Box box1;
    Box box2;
    Box box3;
    double volume =0.0;
    box1.height =5.0;
    box1.length =6.0;
    box1.breadth =7.0;

    box2.height =10.0;
    box2.length =12.0;
    box2.breadth =13.0;

    box3.height =10.0;
    box3.length =12.0;
    box3.breadth =13.0;

    volume =box1.height*box1.length*box1.breadth;
    cout <<"box1的体积"<< volume <<endl;

    volume =box2.height*box2.length*box2.breadth;
    cout <<"box2的体积"<< volume <<endl;

    volume =box3.height*box3.length*box3.breadth;
    cout <<"box3的体积"<< volume <<endl;
    return 0;

}