#include <iostream>
#include <SFML/Window.hpp>

using namespace sf;

int main() {
    Window window(VideoMode(800, 600), "My window");
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == Event::Closed)
                window.close();
        }
    }

    return 0;
}
