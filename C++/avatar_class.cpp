class Avatar
{
protected:
    int attackPower;
    int healing;

public:
    void setAttackPower(int atk)
    {
        attackPower = atk;
    }

    void setHealing(int heal)
    {
        healing = heal;
    }
};

//Derived Classes

class Teemo : public Avatar
{
public:
    void attack()
    {
        std::cout << "TOXIC SHOT!" << attackPower << std::endl;
    }
    void heal()
    {
        std::cout << "MUSHROOM!" << healing << std::endl;
    }
};

class Annie : public Avatar
{
public:
    void attack()
    {
        std::cout << "DISINTEGRATE!" << attackPower << std::endl;
    }
    void heal()
    {
        std::cout << "TEDDY!" << healing << std::endl;
    }
};