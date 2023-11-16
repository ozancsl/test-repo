#include <iostream>

struct foo
{
    int x;
};

int main()
{
    auto a = new foo {};

    a->x = rand();

    std::cout << a->x << std::endl;

    a = new foo {};

    return a->x;
}