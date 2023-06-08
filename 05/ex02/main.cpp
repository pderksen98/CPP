#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include "AForm.hpp"

#include <iostream>
#include <fstream>

void printAsciiTree(const std::string& filename) {
    std::ofstream outFile(filename);

    if (!outFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    outFile << "          ║\n";
    outFile << "         ║║\n";
    outFile << "        ║║║\n";
    outFile << "       ║║║║\n";
    outFile << "      ║║║║║\n";
    outFile << "     ║║║║║║\n";
    outFile << "    ║║║║║║║\n";
    outFile << "   ║║║║║║║║\n";
    outFile << "  ║║║║║║║║║\n";
    outFile << " ║║║║║║║║║║\n";
    outFile << "║║║║║║║║║║║\n";
    outFile << "          ===\n";
    outFile << "          ===\n";
    outFile << "          ===\n";
    outFile << "          ===\n";

    outFile.close();
    std::cout << "ASCII tree printed to file: " << filename << std::endl;
}

int main() {
    printAsciiTree("ascii_tree.txt");
    return 0;
}