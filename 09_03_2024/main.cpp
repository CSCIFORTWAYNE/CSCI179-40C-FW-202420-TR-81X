#include <iostream>
#include <string>
#include <fstream>

int main()
{
    int magicNum = 52;
    int userNum;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> userNum;

    if (magicNum >= userNum)
    {
        std::cout << "You lose. My number is bigger so I win!!!!!!" << std::endl;
    }
    else
    {
        std::cout << "That was fun!" << std::endl;
    }
    std::cout << "Thanks for playing!" << std::endl;

    switch (userNum)
    {
    case 10:
        std::cout << "you guessed 10!" << std::endl;
        break;
    case 20:
        std::cout << "You guessed 20!" << std::endl;
    case 30:
        std::cout << "you guessed 30!" << std::endl;
    }

    return 0;
}