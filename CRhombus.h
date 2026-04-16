#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "CShape.h"

/// @class Rhombus
/// @brief Implementazione della classe Shape per un rettangolo
class Rhombus : public Shape
{
public:
    /// @name CONSTRUCTORS / DESTRUCTORS
    /// @{
    Rhombus();
    Rhombus(float px, float py, float d_magg, float d_min);
    Rhombus(const Rhombus &r);

    ~Rhombus();
    /// @}

    /// @name OPERATORS
    /// @{
    Rhombus & operator = (const Rhombus &r);
    /// @}ù

    /// @name SPECIFIC METHODS
    /// @{
    float GetArea();
    /// @}
};

#endif