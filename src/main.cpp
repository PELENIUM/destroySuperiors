#include <SFML/Graphics.hpp>

using namespace sf;

#define WIDTH 800
#define HEIGHT 800

RenderWindow window(VideoMode(WIDTH, HEIGHT), "SFML");

void game() {
    window.setFramerateLimit(60);
    Clock clock;
    while (window.isOpen()) {
        float time = (float)clock.getElapsedTime().asMicroseconds() / 800;
        clock.restart();
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
            if (event.type == Event::KeyPressed) {
                if (event.key.code == Keyboard::Escape) {
                    window.close();
                }
            }
        }
        window.clear({ 0, 0, 0 });
        window.display();
    }
}

int main() {
    game();
    return 0;
}