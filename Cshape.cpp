#include "CShape.h"
#include <iostream>
#include <string.h>

void Shape::Init(){    // costruttore di default
    x = y = width = height = 0.0;
    text = new char[TEXTSIZE]; // allocazione dinamica della memoria
    if (text != NULL){
        cout << "Error" << endl;
        return;
    }
    text[0] = '\0';
}

void Shape::Init(const Shape &r){
    x = r.x;
    y = r.y;
    width = r.width;
    height = r.height;
    text = new char[TEXTSIZE]; 
    if (text == NULL){
        cout << "Error" << endl;
        return;
    } 
    strcpy(text, r.text);
}

void Shape::Reset() {
    if (text != NULL){
        delete[] text;
        text = NULL;
    }
}

Shape::Shape(){ // costruttore di default (creazione di un oggetto vuoto)
    cout << "Shape - default constructor" << endl;
    Init();
}

Shape::Shape(float px, float py, float w, float h){
    cout << "Shape - NONdefault constructor" << endl;
    Init(); // creazione dell'oggetto con parametri (non di default)

    SetPosition(px, py);
    SetWidth(w);
    SetHeight(h);
}

Shape::Shape(const Shape &r){   // costruttore di copia
    Init(r);
}

Shape::~Shape(){    // distruttore
    cout << "Shape - destructor" << endl;
    Reset();
}

Shape & Shape::operator = (const Shape &r){  // operatore di assegnazione
    if(this != &r){ // controllo per copiare oggetti diversi
        Reset();
        Init(r);
    }
    return *this;
}

bool Shape::operator == (const Shape &r){

    // confronto sui parametri
    if(x != r.x || y != r.y || width != r.width || height != r.height)
        return false;

    // confronto sul testo (il contenuto)
    if(strcmp(text, r.text) != 0)
        return false;

    // se i due oggetti sono uguali, tutto ok
    return true;
}

void Shape::SetPosition(float px, float py){
    x = px;
    y = py;
}

void Shape::SetHeight(float h){
    if(h >= 0) height = h;
}

void Shape::SetWidth(float w){
    if(w >= 0) width = w;
}

void Shape::SetDim(float w, float h){
    SetWidth(w);
    SetHeight(h);
}

void Shape::SetText(const char* string){
    if(string != NULL){
        strncmp(text, string, TEXTSIZE - 1);
        text[TEXTSIZE - 1] = '\0';
    }
}

void Shape::GetPosition(float &px, float &py){
    px = x;
    py = y;
}

void Shape::GetDim(float &w, float &h){
    w = width;
    h = height;
}

float Shape::GetX(){
    return x;
}

float Shape::GetY(){
    return y;
}

float Shape::GetHeight(){
    return height;
}

float Shape::GetWidth(){
    return width;
}

float Shape::GetArea(){
    return width*height;
}

void Shape::GetText(char* string){
    if(string != NULL && text != NULL){
        strcpy(string, text);
    }
}

void Shape::ErrorMessage(const char *string){
    cout << endl << "[--ERROR--]: " << string << " [--END ERROR--]" << endl;
}

void Shape::WarningMessage(const char *string){
    cout << endl << "[--WARNING--]: " << string << " [--END WARNING--]" << endl;
}

void Shape::Dump(){
    cout << "-- SHAPE DUMP --" << endl;
    cout << "Position: " << x << "," << y << endl;
    cout << "Dims: " << width << "*" << height << endl;
    cout << "Area = " << GetArea() << endl;

    if (text != NULL){
        cout << "Text: " << text << endl;
    } else {
        cout << "Memory not allocated!" << endl;
    }

    cout << "--------END DUMP-----------" << endl;
}
