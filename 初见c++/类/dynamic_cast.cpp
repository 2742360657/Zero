#include"ipch.h"

class Entity
{
public:
    virtual ~Entity() {} // 虚析构函数，确保派生类的析构函数被正确调用
};

class Player : public Entity
{
public:
    Player()
    {
        std::cout << "Player created." << std::endl;
    }
};

class Enemy : public Entity
{
public:
    Enemy()
    {
        std::cout << "Enemy created." << std::endl;
    }
};

int main()
{
    Player* player = new Player();
    Enemy* enemy = new Enemy();

    Entity* actuallyPlayer = player;
    Entity* actuallyEnemy = enemy;

    Player* p0 = dynamic_cast<Player*>(actuallyEnemy); // 这里会返回 nullptr，因为 actuallyEnemyPtr 实际上是一个 Enemy 类型
    if (p0)
    {
        std::cout << "p0转换成功了喵\n";
    }
    Player* p1 = dynamic_cast<Player*>(actuallyPlayer); // 这里会成功转换，返回 player 指针
    if (p1)
    {
        std::cout << "p1转换成功了喵\n";
    }

    delete player;
    delete actuallyEnemy;

    return 0;
}