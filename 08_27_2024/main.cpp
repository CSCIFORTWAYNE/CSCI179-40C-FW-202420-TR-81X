#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string candidate1;
    std::string candidate2;
    std::string candidate3;
    std::string candidate4;

    int votes1;
    int votes2;
    int votes3;
    int votes4;
    int totalvotes;

    double votepercent1;
    double votepercent2;
    double votepercent3;
    double votepercent4;

    std::cout << "Enter the first candidate name: ";
    std::cin >> candidate1;
    std::cout << "How many votes did they earn? ";
    std::cin >> votes1;

    std::cout << "Enter the second candidate name: ";
    std::cin >> candidate2;
    std::cout << "How many votes did they earn? ";
    std::cin >> votes2;

    std::cout << "Enter the third candidate name: ";
    std::cin >> candidate3;
    std::cout << "How many votes did they earn? ";
    std::cin >> votes3;

    std::cout << "Enter the fourth candidate name: ";
    std::cin >> candidate4;
    std::cout << "How many votes did they earn? ";
    std::cin >> votes4;

    totalvotes = votes1 + votes2 + votes3 + votes4;
    votepercent1 = static_cast<double>(votes1) / totalvotes;
    votepercent2 = static_cast<double>(votes2) / totalvotes;
    votepercent3 = static_cast<double>(votes3) / totalvotes;
    votepercent4 = static_cast<double>(votes4) / totalvotes;

    std::cout << std::setprecision(3) << std::fixed << std::showpoint;
    std::cout << "+" << std::setw(16) << std::setfill('-') << "+" << std::setw(16) << "+" << std::setw(16) << "+" << std::endl;
    std::cout << std::setfill(' ') << "|" << std::setw(14) << "Candidate Name" << " |" << std::setw(14) << "Total Votes" << " |" << std::setw(14) << "Percent" << " |" << std::endl;
    std::cout << "+" << std::setw(16) << std::setfill('-') << "+" << std::setw(16) << "+" << std::setw(16) << "+" << std::endl;
    std::cout << std::setfill(' ') << "|" << std::setw(14) << candidate1 << " |" << std::setw(14) << votes1 << " |" << std::setw(13) << votepercent1 * 100 << "% |" << std::endl;
    std::cout << "+" << std::setw(16) << std::setfill('-') << "+" << std::setw(16) << "+" << std::setw(16) << "+" << std::endl;
    std::cout << std::setfill(' ') << "|" << std::setw(14) << candidate2 << " |" << std::setw(14) << votes2 << " |" << std::setw(13) << votepercent2 * 100 << "% |" << std::endl;
    std::cout << "+" << std::setw(16) << std::setfill('-') << "+" << std::setw(16) << "+" << std::setw(16) << "+" << std::endl;
    std::cout << std::setfill(' ') << "|" << std::setw(14) << candidate3 << " |" << std::setw(14) << votes3 << " |" << std::setw(13) << votepercent3 * 100 << "% |" << std::endl;
    std::cout << "+" << std::setw(16) << std::setfill('-') << "+" << std::setw(16) << "+" << std::setw(16) << "+" << std::endl;
    std::cout << std::setfill(' ') << "|" << std::setw(14) << candidate4 << " |" << std::setw(14) << votes4 << " |" << std::setw(13) << votepercent4 * 100 << "% |" << std::endl;
    std::cout << "+" << std::setw(16) << std::setfill('-') << "+" << std::setw(16) << "+" << std::setw(16) << "+" << std::endl;

    return 0;
}