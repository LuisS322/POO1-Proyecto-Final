#include <iostream>
#include <SFML/Graphics.hpp>
#include "Menu.h"

int main() {
    Tierra barranco(400,400);
    barranco.adicionarObjeto(new Objeto("Utec",'B',30,30));
    barranco.dibujarTierra();
    return 0;
}


//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}