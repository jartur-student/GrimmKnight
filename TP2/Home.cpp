#include "Home.h"
#include "Level0.h"
#include "TestLevel.h"
#include "TP2.h"

void Home::Init()
{
    background = new Sprite("Resources/Home.png");
}

void Home::Update()
{
    if (window->KeyDown(VK_SPACE))
        TP2::NextLevel<Level0>();

    if (window->KeyDown('T'))
        TP2::NextLevel<TestLevel>();
}

void Home::Draw()
{
    background->Draw(window->CenterX(), window->CenterY());
}

void Home::Finalize()
{
    delete background;
}
