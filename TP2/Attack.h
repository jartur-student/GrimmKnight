#ifndef _ATTACK_H_
#define _ATTACK_H_

#include "Animation.h"
#include "Object.h"
#include "Player.h"
#include "TileSet.h"
#include "Types.h"
#include "Util.h"
#include <vector>

class Attack : public Object
{
  private:
    Animation *anim;
    Player *player;
    AttackDirection direction;
    std::vector<Object *> enemiesHit;

  public:
    Attack(TileSet *tileSet, Player *player, Direction dir, AttackDirection atkDir);
    ~Attack();

    AttackDirection Dir();

    void Update();
    void Draw();
    void OnCollision(Object *other);
};

inline void Attack::Draw()
{
    anim->Draw(round(x), round(y), Layer::UPPER);
}

inline AttackDirection Attack::Dir()
{
    return direction;
}

#endif
