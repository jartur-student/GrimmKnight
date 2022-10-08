#ifndef _TIKTIK_H_
#define _TIKTIK_H_

#include "Animation.h"
#include "Cooldown.h"
#include "Entity.h"
#include "Util.h"

enum TiktikState
{
    TIKTIK_WALKING = 1,
    TIKTIK_HURTING = 2,
    TIKTIK_DEAD = 8,
};

class Tiktik : public Entity
{
  private:
    Animation *animation;
    TiktikState state = TIKTIK_WALKING;
    Direction direction = RIGHT;

    int hp = 8;

    Cooldown hurtCd{0.3f};
    Cooldown dieCd{1.0f};

    float walkSpeed = 64.0f;
    float gravity = 768.0f;
    float xSpeed = 0.0f;
    float ySpeed = 0.0f;

  public:
    Tiktik(TileSet *tileSet, int x, int y);
    ~Tiktik();

    void TakeDamage(uint damage, AttackDirection dir);

    void Update();
    void Draw();
    void OnCollision(Object *other);
};

#endif
