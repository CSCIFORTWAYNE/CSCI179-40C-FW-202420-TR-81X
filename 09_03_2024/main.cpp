#include <iostream>
#include <string>
#include <fstream>
#include <limits>

int main()
{
    int magicNum = 52;
    int userNum;
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> userNum;
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> userNum;
    }

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

    std::ifstream inFile;
    inFile.open("data.txt");
    if (!inFile.is_open())
    {
        std::cout << "The input file could not be opened." << std::endl;
        return 0;
    }
    // std::cout << "Enter a new magic num"
    while (!inFile.eof())
    {
        inFile >> magicNum;
        std::cout << "Pick a new number between 1 and 100: ";
        std::cin >> userNum;
        while (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter a number between 1 and 100: ";
            std::cin >> userNum;
        }
        if (magicNum >= userNum)
        {
            std::cout << "You lose. My number is bigger so I win!!!!!!" << std::endl;
        }
        else
        {
            std::cout << "That was fun!" << std::endl;
        }
    }

    return 0;
}