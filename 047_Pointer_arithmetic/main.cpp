// https://www.youtube.com/watch?v=Weh6UoLkNUQ
// Арифметика указателей. Указатели и массивы. Массив это указатель. C++ для начинающих. Урок #47

#include <iostream>
#define defSeparator cout << "===========" << endl
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    const int SIZE = 5;
    int arr[SIZE]{4, 55, 79, 1, 4};
    for (int i=0; i<SIZE; i++){
        //arr - actually, is a pointer to the first element
        cout << arr[i] << endl;
    }

    cout << "===========" << endl;

    int *pArr = arr; //arr is pointer
    for (int i=0; i<SIZE; i++){
        //arr - actually, is a pointer to the first element
        cout << pArr[i] << endl;
    }

    cout << "===========" << endl;

    cout << "arr\t" << arr << endl;
    cout << "pArr\t" << pArr << endl;

    defSeparator;
    cout << "Pointer arithmetic:" << endl;
    for (int i=0; i<SIZE; i++){
        cout << *(pArr+i) << endl;//change address by (sizeOf i)*i and dereference it. Same as cout << pArr[i] << endl;
    }
    defSeparator;
    for (int i=0; i<SIZE; i++){
        cout << "i(sizeof): " << i <<"("<< sizeof(i) << "); pArr: " << pArr <<
        "; pArr+i: " << (pArr+i) << "; *(pArr+i): "<< *(pArr+i) << endl;
    }

    defSeparator;
    cout << "alien data: " << *(arr+6) << endl;

    return 0;
}
