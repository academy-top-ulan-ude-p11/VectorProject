#include <iostream>
#include "Vector.h"

using namespace std;

class User
{
    string name;
public:
    User() : name{ "" } {}
    User(string name) : name{ name } {}
    string GetName() { return name; }
};

int main()
{
    srand(time(nullptr));

    Vector<int> v1;
    v1.PushBack(100);
    v1.PushBack(200);
    v1.PushBack(300);
    v1.Insert(500, 1);

    for (int i = 0; i < v1.Size(); i++)
        std::cout << v1[i] << " ";
    std::cout << "\n";

    Vector<User> users;
    users.PushBack(User("Bob"));
    users.PushBack(User("Joe"));
    users.PushBack(User("Tim"));

    for (int i = 0; i < users.Size(); i++)
        std::cout << users[i].GetName() << " ";
    std::cout << "\n";

    return 0;
}

