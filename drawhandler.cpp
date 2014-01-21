#include "drawhandler.h"

DrawHandler::DrawHandler()
{
}

void DrawHandler::doStuff(sf::RenderWindow *w)
{
    w->clear();
    //w->draw(stuff);
    // Draw all the things in different layers/lists.
    w->display();
}
