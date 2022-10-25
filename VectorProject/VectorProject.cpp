#include <iostream>
#include "Vector.h"

int main()
{
    srand(time(nullptr));

    /*Vector vector(5);
    for (int i = 0; i < vector.Size(); i++)
        vector[i] = rand() % 100;
    for (int i = 0; i < vector.Size(); i++)
        std::cout << vector[i] << " ";
    std::cout << "\n";

    for (int i = 0; i < 100; i++)
        vector.PushBack(rand() % 100);

    for (int i = 0; i < vector.Size(); i++)
        std::cout << vector[i] << " ";
    std::cout << "\n";*/


    Vector<int> v0;
    v0.PushBack(rand() % 100);

    /*for (int i = 0; i < 15; i++)
    {
        std::cout << "capacity = " << v0.Capacity()
            << " size = " << v0.Size() << "\n";

        for (int i = 0; i < v0.Size(); i++)
            std::cout << v0[i] << " ";

        v0.PushBack(rand() % 100);

        std::cout << "\n";
    }

    for (int i = 0; i < v0.Size(); i++)
        std::cout << v0[i] << " ";
    std::cout << "\n\n";

    for (int i = 0; i < 15; i++)
    {
        std::cout << "capacity = " << v0.Capacity()
            << " size = " << v0.Size() << "\n";
        std::cout << "pop from back = " << v0.PopBack() << "\n";
        for (int i = 0; i < v0.Size(); i++)
            std::cout << v0[i] << " ";

        std::cout << "\n";
    }*/

    for (int i = 0; i < 15; i++)
    {
        std::cout << "capacity = " << v0.Capacity()
            << " size = " << v0.Size() << "\n";

        for (int i = 0; i < v0.Size(); i++)
            std::cout << v0[i] << " ";

        v0.Insert(rand() % 100, 1);

        std::cout << "\n";
    }

    for (int i = 0; i < v0.Size(); i++)
        std::cout << v0[i] << " ";
    std::cout << "\n\n";

    for (int i = 0; i < 15; i++)
    {
        std::cout << "capacity = " << v0.Capacity()
            << " size = " << v0.Size() << "\n";
        std::cout << "pop from back = " << v0.Remove(1) << "\n";
        for (int i = 0; i < v0.Size(); i++)
            std::cout << v0[i] << " ";

        std::cout << "\n";
    }
    

    return 0;
}

