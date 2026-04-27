/*! \file CParallelogram.h
    \brief Declaration of the class Parallelogram
    \author Paolo Gastaldo
*/

#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "CShape.h"



/// @class Parallelogram
/// @brief to manage an object with the shape of a parallelogram
class Parallelogram : public Shape
{
private:
    float offset;

public:

	/// @name CONSTRUCTORS / DESTRUCTOR
    /// @{
    Parallelogram();
    Parallelogram(float px, float py, float w, float h, float off);
    Parallelogram(const Parallelogram &p);
    ~Parallelogram();
	/// @}

	/// @name OPERATORS
    /// @{
    Parallelogram& operator=(const Parallelogram &p);
    bool operator==(const Parallelogram &p);
	/// @}
	
	/// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Parallelogram &p);
    void Reset();
	/// @}

	/// @name SETTERS / GETTERS
    /// @{
    void SetOffset(float off);
    float GetOffset();
	
	float GetVSize();
	float GetHSide();
	float GetLSide();

    float GetArea();
    float GetPerimeter();
	/// @}

    void Dump();
};

#endif 
