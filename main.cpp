#include "oop.cpp"
#include "oop.h"

using namespace std;

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
