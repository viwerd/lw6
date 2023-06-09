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
    cout << "Ââåäèòå 3 ÷èñëà: " << endl;
    cin >> a >> b >> c;

    cout << a << " Оно положительное? " << isPositive(a) << endl;
    cout << b << " Оно положительное? " << isPositive(b) << endl;
    cout << c << " Оно положительное? " << isPositive(c) << endl;

    return 0;
}
