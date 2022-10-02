#include <SFML/Graphics.hpp>

using namespace sf;
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), " HangMan");
    Image mapimage;
    mapimage.loadFromFile("image/map.jpg");

    Texture maptexture;
    maptexture.loadFromImage(mapimage);

    Sprite mapsprite;
    mapsprite.setTexture(maptexture);
    mapsprite.setPosition(0,0);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(mapsprite);
        window.display();
    }

    return 0;
}