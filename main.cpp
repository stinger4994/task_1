#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ ������� ������ Base\n"; }
    ~Base() { cout << "+ ��������� ������ Base\n"; }

    void func() const { cout << "+ ������� func() ������ Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "+ ������� ������ Child\n"; }
    ~Child() { cout << "+ ��������� ������ Child\n"; }

    void func() const { cout << "+ ������� func() ������ Child\n"; }
};

void Function(const Base &obj)
{
    cout << "+ ����� ������ func() ��� ������� obj" << endl;
    obj.func();
}

int main(int argc, char *argv[])
{
    cout << "+ ������� ������ Base" << endl;
    Base base;

    cout << "+ ������� ������ Child" << endl;
    Child child;

    cout << "+ ����� ������ func() ��� ������� Base" << endl;
    Function(base);

    cout << "+ ����� ������ func() ��� ������� Child" << endl;
    Function(child);

    cout << "* ���������� ��������� � ����������� ������� ��� ������ �������" << endl;

    return 0;
}
