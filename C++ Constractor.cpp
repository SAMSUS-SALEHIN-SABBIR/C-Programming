#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

class myclass {
    int a;
    string name;

public:
    myclass(string s); // constructor
    ~myclass(); // destructor
    void show();
};

myclass::myclass(string s)
{
    string name = s;
    cout << "In constructor " << name << endl;
    a = 10;
}
myclass::~myclass()
{
    //string this->name = name;
    //cout << "Destructing... "<< name << endl;
    cout << "Destructing... " << endl;
}

void myclass::show()
{
    //cout << typeid(*this).name() <<endl;
    cout << a << endl;
}

int main()
{
    myclass ob("ob");
    myclass ob1("ob1");

    ob.show();
    ob1.show();

    return 0;
}
