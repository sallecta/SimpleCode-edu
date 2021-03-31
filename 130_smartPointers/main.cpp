#using Code::Blocks 20.03
#include <iostream>

template<typename T>
class SmartPointer
{
public:
    SmartPointer(T *argPtr)
    {
        std::cout<<"class SmartPointer.Constructor"<<std::endl;
        this->ptr= argPtr;
    }

    ~SmartPointer()
    {
        std::cout<<"class SmartPointer.Destructor"<<std::endl;
        delete this->ptr;
    }

    //operator * overload
    // return link to T
    T& operator*()
    {
      return *this->ptr;
    }
private:
    T *ptr;
};


int main()
{
    //std::cout << "Hello world!" << std::endl;
    int *ptr = new int(5);
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;

    SmartPointer<int> pointer = new int(51);
    //or
    *pointer = 1121214;

    std::cout<<*pointer<<std::endl;

    return 0;
}
