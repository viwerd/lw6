#include <iostream>
#include <cmath>

using namespace std;

int square(int x)
{
    return pow(x,2);
}

int main()
{
    setlocale(LC_ALL , "ru");
    int a = 2 , b = 12 , c = 22;

    cout << "|" << "������� ����� - " << a << " ����� " << square(a) << "|" << endl;
    cout << "|" << "������� ����� - " << b << " ����� " << square(b) << "|" << endl;
    cout << "|" << "������� ����� - " << c << " ����� " << square(c) << "|" << endl;

    return 0;
}
