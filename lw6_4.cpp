#include <iostream>

using namespace std;

bool isPositive(int num)
{
    return num > 0;
}

int main()
{
    setlocale(LC_ALL , "ru");
    int a , b , c;
    cout << "������� 3 �����: " << endl;
    cin >> a >> b >> c;

    cout << a << " ��� �������������? " << isPositive(a) << endl;
    cout << b << " ��� �������������? " << isPositive(b) << endl;
    cout << c << " ��� �������������? " << isPositive(c) << endl;

    return 0;
}
