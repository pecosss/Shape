#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "CShape.h" // inclusione del padre

/// @class Rectangle
/// @brief Implementazione della classe Shape per un rettangolo
class Rectangle : public Shape
{
public:
    /// @name CONSTRUCTORS / DESTRUCTORS
    /// @{
    Rectangle();
    Rectangle(float px, float py, float w, float h);
    Rectangle(const Rectangle &r);

    ~Rectangle();
    /// @}

    /// @name OPERATORS
    /// @{
    Rectangle & operator = (const Rectangle &r);
    /// @}
};

#endif