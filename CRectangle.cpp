#include "CRectangle.h"
#include <iostream>

using namespace std;

// costruttore di default
Rectangle::Rectangle() : Shape(){
    // la shape è già inizializzata da Shape::Init() chiamata dal padre
}

Rectangle::Rectangle(float px, float py, float w, float h) : Shape(px, py, w, h){   
}

// costruttore di copia (ereditato dal padre)
Rectangle::Rectangle(const Rectangle &r) : Shape(r){
}

// distruttore
Rectangle::~Rectangle(){
}

// operatore di assegnazione
Rectangle & Rectangle::operator = (const Rectangle &r){
    Shape::operator = (r);
    return *this;
}
