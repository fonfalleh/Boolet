#include "drawhandler.h"

DrawHandler::DrawHandler()
{
    objects.clear();
    scale = 23;
    if (!texture.loadFromFile("spritesheet.png"))
        std::cout<<"NO SPRITESHEET!"<<std::endl;
    else
        std::cout<<"SPRITESHEET!"<<std::endl;
}
//SPRITES ARE 21x21 w 1px border. 23x+1, 23y+1 to get sprite.
void DrawHandler::doStuff(sf::RenderWindow *w)
{
    w->clear();
    for(std::list<GOS>::iterator it = objects.begin();it != objects.end();it++)
    { //it-> ==> (*it).
        GOS* tGos = &(*it);
        tGos->s->setPosition(tGos->g->getX(), tGos->g->getY());
        w->draw(*(tGos->s));
    }    // w->draw(stuff);
    //TODO Draw all the things in different layers/lists.
    w->display();
}

void DrawHandler::addGO(GameObject* go, int x, int y)
{
    GOS gos;

    sf::Sprite *s = new sf::Sprite();
    s->setTexture(texture);
    int xs = x*DrawHandler::scale+2;
    int ys = y*DrawHandler::scale+2;
    s->setTextureRect(sf::IntRect(xs, ys, 21, 21));
    s->setOrigin(10,10);
    s->setPosition(go->getX(), go->getY());

    gos.g = go;
    gos.s = s;

    objects.push_back(gos);
}
