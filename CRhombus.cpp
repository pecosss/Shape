#include "CRhombus.h"
#include <iostream>

using namespace std;

// costruttore di default
Rhombus::Rhombus() : Shape(){
    // la shape è già inizializzata da Shape::Init() chiamata dal padre
}

Rhombus::Rhombus(float px, float py, float d_magg, float d_min) : Shape(px, py, d_magg, d_min){   
}

// costruttore di copia (ereditato dal padre)
Rhombus::Rhombus(const Rhombus &r) : Shape(r){
}

// distruttore
Rhombus::~Rhombus(){
}

// operatore di assegnazione
Rhombus & Rhombus::operator = (const Rhombus &r){
    Shape::operator = (r);
    return *this;
}

float Rhombus::GetArea(){
    return (width*height) /2.0;
}
