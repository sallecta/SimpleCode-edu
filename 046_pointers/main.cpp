// https://www.youtube.com/watch?v=n0saIDd3H-M
// Указатели c++ что это. Для чего нужны. Указатели c++ разыменование. C++ для начинающих. Урок #46

#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int a = 5;
    cout << "a\t" << a << endl;
    int *px = &a;
    int *px2 = &a;

    cout << px << endl;
    cout << *px << endl;

    cout << "px\t" << px << endl;
    cout << "px2\t" << px2 << endl;
    cout << "&a\t" << &a << endl;
    cout << "*&a\t" << *&a << endl;

    *px2 = 22;
    cout << "a\t" << a << endl;
    cout << "*px\t" << *px << endl;
    cout << "*px2\t" << *px2 << endl;

    return 0;
}
