#include <iostream>

struct foo
{
    int x;
};

int main()
{
    auto a = new foo {};

    a->x = rand();

    a = new foo {};

    std::cout << a->x << std::endl;

    return a->x;
}