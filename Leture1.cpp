#include <iostream>
using namespace std;

int main()
{
    int a;
    std::cout << "nuber of a ==>" << a << endl;
    std::cout << "enter the a :";
    std::cin >> a;
    std::cout << "number for the a ==>" << a << endl;
    std::cout << "Hello world" << endl;
    char b = 'a';
    std::cout << b << endl;

    bool c = true;
    std::cout << c << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    double d = 3.4;
    float g = 2.3f;
    char f = 97;
    char h = 1024;
    cout << g << endl;
    cout << f << endl;
}