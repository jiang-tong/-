#include <iostream>

#include<math.h>

using namespace std;

class Side
{
private:
    int a;
    int b;
    int c;//这是三角形的三边
public:
    void SetSide(int ,int ,int );//对数据成员初始化的公有成员函数
    void Display();//执行显示功能的公有成员函数
    int JudgeTriangle( );//判断三角形可不可以成立
    int Perimeter( );//求三角形的周长
    int Proportion( );//求三角形的面积
    int TriangleForm( );//判断三角形是什么三角形
};
void Side::SetSide(int d,int e,int f)
{
    a=d;
    b=e;
    c=f;
}
int Side::JudgeTriangle( )
{
    int m,n;
    m=a+b;
    n=a-b;
    if(a+b<c||a+c<b||b+c<a)
    {
        cout<<"这三边不可以构成三角形."<<endl;
    }
    else
    {
        cout<<"这三边可以构成三角形"<<endl;
    }
    return 1;
}
int Side::Perimeter( )
{
    int x;
    x=a+b+c;
    cout<<x<<endl;
    return x;
}
int Side::Proportion( )
{
    float r,j,y;
    r=(a+b+c)/2;
    j=r*(r-a)*(r-b)*(r-c);
    y=sqrt(j);
    cout<<y<<endl;
    return y;
}
int Side::TriangleForm( )
{
    if((a*a+b*b)>(c*c))
        cout<<"该三角形为锐角三角形"<<endl;
    if(a*a+b*b==c*c)
        cout<<"该三角形为直角三角形"<<endl;
    if((a*a+b*b)<(c*c))
        cout<<"该三角形为钝角三角形"<<endl;
    return true;
}
void Side::Display( )
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    Side threesides,*t;
    threesides.SetSide(3,4,5);
    cout<<"三角形的三边长为：";
    threesides.Display();
    threesides.JudgeTriangle();
    cout<<"这个三角形的周长为：";
    threesides.Perimeter();
    cout<<"这个三角形的面积为：";
    threesides.Proportion();
    cout<<"这个三角形的类型是：";
    threesides.TriangleForm();
    return 0;
}









