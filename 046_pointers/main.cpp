// https://www.youtube.com/watch?v=n0saIDd3H-M
// Указатели c++ что это. Для чего нужны. Указатели c++ разыменование. C++ для начинающих. Урок #46

#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int a = 5;
    int *px = &a;

    cout << *px << endl;
    cout << px << endl;

    return 0;
}
