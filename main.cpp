#include <iostream>

void input(std::string &op,  double numbers[2])
{
    std::cout << "opetation:";
    std::cin >> op;
    std::cout << "x:";
    std::cin >> numbers[0];
    std::cout << "y:";
    std::cin >> numbers[1];
}

void calculate(const std::string &op, double numbers[2])
{
    if (op == "+")
    {
        std::cout << numbers[0] + numbers[1] << "\n";
    }
    else if (op == "-")
    {
        std::cout << numbers[0] - numbers[1]<< "\n";
    }
    else
    {
        std::cout << "unknown operation.\n";
    }
}

int main()
{
    while (true)
    {
        double numbers[2];
        std::string op;

        input(op, numbers);
        calculate(op, numbers);
    }
    return 0;
}
