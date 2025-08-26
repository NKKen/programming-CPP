#include <iostream>
#include <memory>

class BaseClass
{
public:
    
    virtual void dowork() const = 0;

    
    virtual ~BaseClass() = default;
};

class DerivedClass : public BaseClass
{
public:
    void dowork() const override
    {
        std::cout << "Do work from a DerivedClass." << '\n';
    }
};

int main()
{
    std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
    p->dowork(); 

    return 0;
} 