#include <iostream>

class A
{
private:
    int m_x;

public:
    A(int x)
        : m_x(x)
    {
        if (x <= 0)
        {
            throw 1;
        }
    }
};

class B : public A
{
public:
    /*B(int x)
        : A(x)
    {}*/

    B(int x) 
        try : A(x)
    {
        // do initialization
    }
    catch (...)
    {
        std::cout << "Catch in B constructor\n";
        //throw; // 없어도 자동으로 main까지 던진다
    }
};

void doSomething()
{
    try
    {
        throw -1;
    }
    catch(...)
    {
        std::cout << "Catch in doSomething()" << '\n';
    }
}

// void doSomething()
// try
// {
//     throw -1;
// }
// catch(...)
// {
//     std::cout << "Catch in doSomething()" << '\n';
// }

int main()
{
    try
    {
        //doSomething();
        B b(0);
    }
    catch(...)
    {
        std::cout << "Catch in main()" << '\n';
    }
    
    return 0;
}