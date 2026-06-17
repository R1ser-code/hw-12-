#include <iostream>
#include <string>

class Counter
{
private:
    int value;

public:
    Counter() : value(1) {}

    Counter(int initialValue) : value(initialValue) {}

    void increment()
    {
        ++value;
    }

    void decrement()
    {
        --value;
    }

    int getValue() const
    {
        return value;
    }
};

int main()
{
    std::string answer;
    Counter counter;

    std::cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
    std::cin >> answer;

    if (answer == "yes")
    {
        int initialValue;
        std::cout << "Enter the initial value of the counter: ";
        std::cin >> initialValue;

        counter = Counter(initialValue);
    }

    char command;

    do
    {
        std::cout << "Enter command ('+', '-', '=' or 'x'): ";
        std::cin >> command;

        switch (command)
        {
        case '+':
            counter.increment();
            break;

        case '-':
            counter.decrement();
            break;

        case '=':
            std::cout << counter.getValue() << std::endl;
            break;

        case 'x':
            break;

        default:
            std::cout << "Unknown command!" << std::endl;
        }

    } while (command != 'x');

    return 0;
}