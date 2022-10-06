#ifndef _SCREEN_TRANSITION_H_
#define _SCREEN_TRANSITION_H_

#include "Object.h"
#include "Scene.h"

enum Orientation
{
    VERTICAL,
    HORIZONTAL,
};

class ScreenTransition : public Object
{
  private:
    Scene *scene;
    Orientation orientation;
    bool positive;
    float timer;
    bool transitioning = false;

    static const float DURATION;
    static const float DISTANCE;

  public:
    ScreenTransition(Orientation orientation, Scene *scene);

    bool Transitioning();

    void Update();
    void Draw(){};
    void OnCollision(Object *other);
};

#endif