#include<iostream>

float multiply(float a, float b)
{
    return a * b;
}
float add(float a, float b)
{
    return a / b;
}

int main()
{
    std::cout << add(5,3) << std::endl;
    std::cout << multiply(2,4) << std::endl;
    return 0;
}
