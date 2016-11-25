#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ ������� ������ Base\n"; }
    ~Base() { cout << "+ ��������� ������ Base\n"; }

    void func() { cout << "+ ������� func() ������ Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "+ ������� ������ Child\n"; }
    ~Child() { cout << "+ ��������� ������ Child\n"; }
};

int main(int argc, char *argv[])
{
    cout << "+ ������� ������ Base" << endl;
    Base base;
    cout << "+ ������� ������ Child" << endl;
    Child child;

    cout << "+ ����� ������ func() ��� ������� Base" << endl;
    base.func();

    cout << "+ ����� ������ func() ��� ������� Child" << endl;
    child.func();

    cout << "* ���������� ������ ������ Base" << endl;

    return 0;
}
