//
// Created by quokka on 31/10/16.
//


#include "AquaEnemy.h"
#include "../base/Scene.h"


AquaEnemy::AquaEnemy() {
    Character::setPathToSpriteSheet("images/aqua_enemy_spritesheet.png");

    //Sprite rows
    mNumStand = 2;
    mNumAttack = 2;

    START_ROW_STAND_RIGHT = START_ROW_ATTACK_RIGHT = 0;
    START_ROW_STAND_LEFT = START_ROW_ATTACK_LEFT = 1;
    START_ROW_MOVE_RIGHT = 2;
    START_ROW_MOVE_LEFT = 3;
}


void AquaEnemy::init(ShaderProgram &shaderProgram, Scene *scene){

    AttackEnemy::init(shaderProgram, scene);
    
    mAttack = new BigObject();
    mAttack->setPathToSpriteSheet(BIG_OBJECTS_FIRE_PATH); //OBJECT SPRITESHEET
    mAttack->init(shaderProgram, scene);

}

bool AquaEnemy::computeAttack() {
    //Maybe stop attacking
    int ran = rand() % 3000;
    if (ran > 1000 && ran < 1050) {// stop
        if (dir.x > 0) sprite->changeAnimation(STAND_RIGHT);
        else sprite->changeAnimation(STAND_LEFT);
        isAttacking = false;
        mAttack->setPosition(glm::ivec2(-100, -100));//Set object to invalid position in order to not collide
        return false;
    }
    else { //continue attacking
        return true;
    }
}