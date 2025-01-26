using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
    public :

            int  Add(int No1, int No2)
            {
                    int Sum = 0;
                    Sum = No1 + No2;
                    return Sum;
            }
};

class Derived : public Base
{
    public :
            int  dNum;

            int  MyAdd(int N1, int N2, int N3)
            {
                    int Res = 0;
                    Res = Add(Add(N1,N2),N3);
                    return Res;
            }
};

int main()
{
    Base bObj;

    cout<< "\n Size OF Base = " << sizeof(bObj);        /// 4

    cout << endl << " Addition of 15 & 25 = " << bObj.Add(15, 25) << endl ;

    Derived dObj;

    cout<< "\n Size OF Derived = " <<  sizeof(dObj);   /// 8

    cout << endl << " Addition of 11, 22, 33 = " << dObj.MyAdd(11, 22, 33) << endl ;

    getch();
    return 0;
}
