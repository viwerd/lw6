#include <iostream>
#include <string>

using namespace std;

void greeting(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

int main()
{
    greeting("Abdul");
    greeting("Azamat");
    greeting("Vlad");

    return 0;
}
