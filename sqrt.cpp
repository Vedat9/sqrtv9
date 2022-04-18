#include <iostream>
#include <iomanip>
#include <cmath>

/*

size_t power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}
*/

long double sqrtv9()
{
    long double num{};
    long double guess{0};
    long double compare{};
    int i{1};

    std::cout << "Number? " << std::endl;
    std::cin >> num;
    std::cout << std::setprecision(14);

    if (num < 0)
    {
        return 0.0 / 0.0;
    }
    else if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        guess = num / 2;
        while ((guess * guess) != num)
        {
            if ((guess * guess) > num)
            {
                guess = guess / 2;
            }
            else if ((guess * guess) < num)
            {
                guess = guess + guess / 2;
                while ((guess * guess) != num)
                {
                    if ((guess * guess) > num)
                    {
                        i++;
                        guess = guess - guess / pow(2, i);
                    }
                    else if ((guess * guess) < num)
                    {
                        i++;
                        guess = guess + guess / pow(2, i);
                    }
                    if (compare == guess)
                    {
                        num = guess * guess;
                    }
                    compare = guess;
                }
            }
        }
    }
    std::cout << "Answer: ";
    return guess;
}

int main()
{
    std::cout << sqrtv9() << std::endl;
    return 0;
}