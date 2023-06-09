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

    cout << "|" << "Квадрат числа - " << a << " равен " << square(a) << "|" << endl;
    cout << "|" << "Квадрат числа - " << b << " равен " << square(b) << "|" << endl;
    cout << "|" << "Квадрат числа - " << c << " равен " << square(c) << "|" << endl;

    return 0;
}
