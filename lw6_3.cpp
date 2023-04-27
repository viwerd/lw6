#include <iostream>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    cout << max(1, 23) << endl;
    cout << max(45, 67) << endl;
    cout << max(89, 901) << endl;

    return 0;
}
