#include <iostream>
#include "oop.h"

using namespace std;

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

    return 0;
}
