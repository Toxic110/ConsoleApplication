#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::endl;
using std::string;

class PersModel
{
    int height;
    int width;

public:
    PersModel(int h, int w)
    {
        height = h;
        width = w;
    }
};

class Person
{
private:
    int id;
    int hitpoints;
    string name;

public:
    int getHitpoints()
    {
        return hitpoints;
    }

    string getName()
    {
        return name;
    }

    void move()
    {
        cout << name << " move";
    }

    Person(int i, int h, string n)
    {
        id = i;
        hitpoints = h;
        name = n;
    }
};

class Player : public Person
{
private:
    int armor;
public:
    Player(int i, int h, string n, int a) : Person(i,h,n)
    {
        armor = a;
    }

    int getArmor()
    {
        return armor;
    }

    void chop(Person &enemy)
    {
        cout << getName() << " chop " << enemy.getName() << endl;
    }

};

class Creeper : public Person
{
private:
  bool agresor;
public:
    Creeper(int i, int h, bool agr,string n) : Person(i,h,n)
    {
      agresor = agr;
    }

    void bite(Player &player)
    {
        if(agresor) 
        {
          cout << getName() << " bite " << player.getName() << endl;
        }
        else 
        {
          cout << getName() << " walks next to " << player.getName() << endl;
        }
    }
};

int main()
{
    Player argon = Player(1, 100, "Argon", 10);
    Creeper dragon = Creeper(2, 150, true, "Dragon");
    Creeper pony = Creeper(2, 150, false, "Pony");

    dragon.bite(argon);
    pony.bite(argon);
}