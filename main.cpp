#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ ������� ������ Base\n"; }
    ~Base() { cout << "+ ��������� ������ Base\n"; }
};


int main(int argc, char *argv[])
{
    cout << "+ ������� ������ Base" << endl;
        Base base;

        cout << "�������� � �������� �������" << endl;

        return 0;
}
