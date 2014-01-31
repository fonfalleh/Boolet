#include "scene.h"
typedef std::list<GameObject*>::iterator GOsIT;
Scene::Scene(int width, int height, DrawHandler* dhandler, sf::RenderWindow* win)
{
    window = win; // TODO: IS THIS EVEN SANE? // Eh. Probably; are pointers.
    drawer = dhandler;
    hero = new Hero(width/2, height/2);
    drawer->addGO(hero, 19, 5);
    Bullet *bullet = new Bullet(10, 10);
    drawer->addGO(bullet, 12, 17);

    objs.push_back(hero);
}

void Scene::update()
{

    //hero->readInput();
    //Testing
    for(GOsIT it = objs.begin(); it != objs.end(); ++it) //TODO Iterate instead of increment?
    { // Oh god why, this is terrible
        (*it)->update(this);
    }
    drawer->doStuff(window);
}
void Scene::fireBullet(int x, int y, int vx, int vy)
{
    Bullet *bullet = new Bullet(x, y, vx, vy);
    objs.push_back(bullet);
    drawer->addGO(bullet, 12, 17);
}
