#include "scene.h"

Scene::Scene(int width, int height, DrawHandler* dhandler, sf::RenderWindow* win)
{
    window = win; // TODO: IS THIS EVEN SANE?
    drawer = dhandler;
    hero = new Hero(width/2, height/2);
    drawer->addGO(hero, 19, 5);
    Bullet *bullet = new Bullet(10, 10);
    drawer->addGO(bullet, 12, 17);
}

void Scene::update()
{

    hero->readInput();
    //Testing
    drawer->doStuff(window);
}
