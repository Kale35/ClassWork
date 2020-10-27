int main()
{
    Teemo teemo;
    Annie annie;

    Avatar *ava_t = &teemo;
    Avatar *ava_a = &annie;

    ava_t->setAttackPower(20), setHealing(20);
    ava_a->setAttackPower(80), setHealing(40);

    teemo.attack();
    teemo.heal();
    annie.heal();
    annie.attack();
}