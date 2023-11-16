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

    return a->x;
}