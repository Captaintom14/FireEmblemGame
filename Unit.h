//
// Created by Thomas Mejia on 2023-04-25.
//

#ifndef FIREEMBLEMGAME_UNIT_H
#define FIREEMBLEMGAME_UNIT_H
#include <iostream>
#include <string>
#include <random>

using namespace std;

class Unit {
private :
    int health;
    int attackMelee;
    int attackMagic;
    int defense;
public:

    random_device rd; // for health
    random_device rd1; // for the rest
    string unitClass;

    void randomGenerator();


    int getHealth();
    void setHealth(int newHealth);

    int getAttackMelee();
    void setAttackMelee(int newAttackMelee);

    int getAttackMagic();
    void setAttackMagic(int newAttackMagic);

    int getDefense();
    void setDefense(int newDefense);




};


#endif //FIREEMBLEMGAME_UNIT_H
