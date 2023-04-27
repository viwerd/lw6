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
    cout << "Введите 3 числа: " << endl;
    cin >> a >> b >> c;

    cout << a << " оно положительное? " << isPositive(a) << endl;
    cout << b << " оно положительное? " << isPositive(b) << endl;
    cout << c << " оно положительное? " << isPositive(c) << endl;

    return 0;
}
