//
// Created by Thomas Mejia on 2023-04-25.
//

#include "Unit.h"

void Unit ::randomGenerator() {

mt19937 gen(rd());

uniform_int_distribution<> dis(25,35);

health = dis(gen);

setHealth(health);

}



int Unit :: getHealth(){
    return health;
}

void Unit :: setHealth(int newHealth){
    health = newHealth;
}

int Unit :: getAttackMelee(){
    return attackMelee;
}
void Unit ::  setAttackMelee(int newAttackMelee) {
    attackMelee = newAttackMelee;
}

int Unit :: getAttackMagic(){
    return attackMagic;
}
void Unit :: setAttackMagic(int newAttackMagic){
    attackMagic = newAttackMagic;
}

int Unit :: getDefense(){
    return defense;
}
void Unit :: setDefense(int newDefense){
    defense = newDefense;
}


