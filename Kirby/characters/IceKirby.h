//
// Created by quokka on 29/10/16.
//

#ifndef KIRBY_ICEKIRBY_H
#define KIRBY_ICEKIRBY_H

#include "Player.h"
#include "../objects/BigObject.h"


class IceKirby : public Player {
public:
    IceKirby();
    ~IceKirby() {}

    void init(ShaderProgram &shaderProgram, Scene* scene);
    void update(int deltaTime);
    void render();

    BigObject* getIce() { return mIce; }

protected:
    //void computeAttack();
    //void computeMovement();
    //void computeJump();
    int getAttackSound();

private:
    BigObject* mIce;
};
#endif //KIRBY_ICEKIRBY_H