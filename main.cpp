#include <iostream>

#include<math.h>

using namespace std;

class Side
{
private:
    int a;
    int b;
    int c;//���������ε�����
public:
    void SetSide(int ,int ,int );//�����ݳ�Ա��ʼ���Ĺ��г�Ա����
    void Display();//ִ����ʾ���ܵĹ��г�Ա����
    int JudgeTriangle( );//�ж������οɲ����Գ���
    int Perimeter( );//�������ε��ܳ�
    int Proportion( );//�������ε����
    int TriangleForm( );//�ж���������ʲô������
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
        cout<<"�����߲����Թ���������."<<endl;
    }
    else
    {
        cout<<"�����߿��Թ���������"<<endl;
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
        cout<<"��������Ϊ���������"<<endl;
    if(a*a+b*b==c*c)
        cout<<"��������Ϊֱ��������"<<endl;
    if((a*a+b*b)<(c*c))
        cout<<"��������Ϊ�۽�������"<<endl;
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
    cout<<"�����ε����߳�Ϊ��";
    threesides.Display();
    threesides.JudgeTriangle();
    cout<<"��������ε��ܳ�Ϊ��";
    threesides.Perimeter();
    cout<<"��������ε����Ϊ��";
    threesides.Proportion();
    cout<<"��������ε������ǣ�";
    threesides.TriangleForm();
    return 0;
}









