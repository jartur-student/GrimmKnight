#include "Mace.h"
#include "Util.h"

Mace::Mace()
{
    type = ENEMY;

    BBox(new Rect(-36, -36, 36, 36));
}

Mace::~Mace()
{
}

void Mace::Update()
{
}