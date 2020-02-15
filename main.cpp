#include <iostream>
class Base
{
    void method(){
        std::cout << "from Base" << std::endl;
    }
public:
    virtual ~Base(){
        method();
    }
    void baseMethod(){
        method();
    }
};
class A: public Base
{
    void method(){
        std::cout << "from A" << std::endl;
    }
public:
    ~A() override{
        method();
    }
};

int main() {
    Base* base = new A();
    base->baseMethod();
    delete base;
    return 0;
}
