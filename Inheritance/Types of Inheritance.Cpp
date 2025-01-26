using namespace std;
#include<iostream>
#include<conio.h>

class M
{
    public :
        int N1, N2;

        M()
        {
                cout << "\n M Const\n";
        }

        ~M()
        {
                cout << "\n M Des\n";
        }

};

class A : public M
{
    public :
        int i,j;

        A()
        {
                cout << "\n A Const\n";
        }

        ~A()
        {
                cout << "\n A Des\n";
        }

};

class B : public M
{
    public :

        int l,m;

        B()
        {
                cout << "\n B Const\n";
        }

        ~B()
        {
                cout << "\n B Des\n";
        }
};

class C
{
    public :

        int x, y;

        C()
        {
                cout << "\n C Const\n";
        }

        ~C()
        {
                cout << "\n C Des\n";
        }

};

class D : public B, public A, public C
{
    public :

        int p, q;

        D()
        {
                cout << "\n D Const\n";
        }

        ~D()
        {
                cout << "\n D Des\n";
        }
};

int main()
{
        D obj;

        cout<< "\n Size of Object = "<< sizeof(obj);  /// 40

        _getch();
        return 0;
}
