#include<iostream>

class Entity
{
public:
    int x;
public:
    void Print() const
    {
        std::cout << "苏茜" << std::endl;
    }
    friend class ScopedPtr;
};

class ScopedPtr
{
public:
    const Entity* m_Obj;
public:
    ScopedPtr(Entity * entity)
        : m_Obj(entity)
    {
    }
    ~ScopedPtr()
    {
        delete m_Obj;
    }
    const Entity* operator->() const
    {
        return m_Obj;
    }
};

int main()
{
    const ScopedPtr entity = new Entity();
    entity->Print();
    std::cin.get(); 
}

