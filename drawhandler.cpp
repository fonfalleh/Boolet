#include "drawhandler.h"

DrawHandler::DrawHandler()
{
}

void DrawHandler::doStuff(sf::RenderWindow *w)
{
    w->clear();
    //w->draw(stuff);
    w->display();
}
