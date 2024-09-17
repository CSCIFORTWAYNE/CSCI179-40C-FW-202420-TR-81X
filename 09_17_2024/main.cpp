#include <iostream>
#include <cstdlib>

const int NUM = 10;

int larger(int &num1, int y);
void largest3(int num1, int num2, int num3, int num4, int num5, int &largest1, int &largest2, int &large3);

int main()
{
    int x = 90;
    int y = 40;
    int z = larger(x, y);
    std::cout << x << std::endl;

    x = rand() % 100 + 1;
    y = rand() % 100 + 1;
    z = rand() % 100 + 1;
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    int largest1, largest2, large3;
    largest3(x, y, z, a, b, largest1, largest2, large3);

    return 0;
}

int larger(int &num1, int y)
{
    num1 = 45;
    if (num1 >= y)
        return num1;
    else
        return y;
}

void largest3(int num1, int num2, int num3, int num4, int num5, int &largest1, int &largest2, int &large3)
{
    largest1 = num1;
    if (num2 > largest1)
    {
        largest2 = largest1;
        largest1 = num2;
    }
    else
    {
        largest2 = num2;
    }
    if (num3 > largest1)
    {
        large3 = largest2;
        largest2 = largest1;
        largest1 = num3;
    }
    else if (num3 > largest2)
    {
        large3 = largest2;
        largest2 = num3;
    }
    else
    {
        large3 = num3;
    }
    if (num4 > largest1)
    {
        large3 = largest2;
        largest2 = largest1;
        largest1 = num4;
    }
    else if (num4 > largest2)
    {
        large3 = largest2;
        largest2 = num4;
    }
    else if (num4 > large3)
    {
        large3 = num4;
    }
    if (num5 > largest1)
    {
        large3 = largest2;
        largest2 = largest1;
        largest1 = num5;
    }
    else if (num5 > largest2)
    {
        large3 = largest2;
        largest2 = num5;
    }
    else if (num5 > large3)
    {
        large3 = num5;
    }
}