#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ ������� ������ Base\n"; }
    ~Base() { cout << "+ ��������� ������ Base\n"; }
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

    cout << "�������� � �������� ���� ��������. ���������� ������������" << endl;

    return 0;
}
