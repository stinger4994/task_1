#include <iostream>
using namespace std;

#ifndef OOP
#define OOP

class Base
{
public:
    Base() { cout << "+ ������� ������ Base\n"; }
    ~Base() { cout << "+ ��������� ������ Base\n"; }

    virtual void func() const { cout << "+ ������� func() ��� ������ Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "+ ������� ������ object\n"; }
    ~Child() { cout << "+ ��������� ������ object\n"; }

    void func() const { cout << "+ ������� func() ��� ������ Child\n"; }
};

void Function(const Base &obj);

#endif // OOP
