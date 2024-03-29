#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) 
{
    //Checking argument count
    if (argc > 2) {
        std::cerr << RED << "Error: " << PLAIN << "too many argumets : 1 input file expected.\n";
        return (1);
    }
    //Parsing input.txt and data.csv file's
    try {
        std::map<std::string,float> bitcoinData = parseBitcoinData();
        parseInput(argv[1], bitcoinData);
    } catch (std::runtime_error &e) {
        std::cerr << RED << "Error: " << PLAIN << e.what() << std::endl;
        return (1);
    }
    return (0);
}
