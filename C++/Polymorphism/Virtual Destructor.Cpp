#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            Category()
                            {
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            virtual ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

};

class  Product : public  Category
{
                public :

                             Product()
                            {
                                            cout<<"\n Inside Product Constructor"<<endl;
                            }

                            ~Product()
                            {
                                            cout<<"\n Inside Product Destructor"<<endl;
                            }
};

int main()
{
                cout<<"\t Size Of Base = "<< sizeof(Category) << "\n\t Size of Derived = "<< sizeof(Product)<<endl;

                Category *cPtr = new Product();

                delete cPtr;

                getch();
                return 0;
}
