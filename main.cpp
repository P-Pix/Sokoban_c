#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace std;
using namespace sf;

Texture open_image(const char NAME_IMAGE)
{
    Texture IMAGE_LOAD;
    if(!IMAGE_LOAD.loadFromFile(NAME_IMAGE))
    {
        cout << "error" << endl;
    }
    return IMAGE_LOAD;
}

Sprite load_sprite(Texture IMAGE)
{
    Sprite SPRITE;
    SPRITE.setTexture(IMAGE);
    return SPRITE;
}

int main()
{
    RenderWindow window(VideoMode(1080, 720), "My window");
    window.setFramerateLimit(60);
    while(window.isOpen())
    {
        Event event;
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
    }
}