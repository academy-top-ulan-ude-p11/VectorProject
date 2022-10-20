#include <iostream>
#include "Vector.h"

int main()
{
    srand(time(nullptr));

    Vector vector(5);
    for (int i = 0; i < vector.Size(); i++)
        vector.At(i) = rand() % 100;
    for (int i = 0; i < vector.Size(); i++)
        std::cout << vector.At(i) << " ";
    std::cout << "\n";

    Vector vector2(vector);
    Vector vector3;
    //
    //

    vector3 = vector;

    

    

    return 0;
}

