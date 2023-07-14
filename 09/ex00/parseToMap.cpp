#include "BitcoinExchange.hpp"

//HIER WORDEN DE LAATSE GETALLEN OP EEN DECIMAAL ACHTER DE . AFGEROND
std::map<std::string,float> parseBitcoinData(void) 
{
    std::map<std::string,float> bitcoinData;
    std::ifstream               data("data.csv");

    if (!data.is_open()) {
        throw std::runtime_error("Could not open data.csv file");
    }

    std::string line;
    std::string date;
    float       value;

    std::getline(data, line); //Don't need the first line
    while (std::getline(data, line)) {
        std::stringstream   ss(line);

        if (std::getline(ss, date, ',') && ss >> value) {
            bitcoinData[date] = value;
        } else {
            throw std::runtime_error("Failed to parse line in data.csv file");
        }
    }
    data.close();
    return (bitcoinData);
}

void parseInput(char* inputFile, const std::map<std::string,float>& bitcoinData) {
    std::ifstream   input(inputFile);
    if (!input.is_open()) {
        throw std::runtime_error("Could not open file.");
    }
    
    std::string line;
    std::string date;
    float       value;

    std::getline(input, line); //Don't need the first line
    while (std::getline(input, line)) {
        try {
            std::stringstream    ss(line);
            if (std::getline(ss, date, '|') && ss >> value) {
                date.pop_back(); 
                if (isDateValid(date) && isValueValid(value)) {
                    std::cout << date << " => " << std::setprecision(0) << value << " = ";
                    std::map<std::string,float>::const_iterator it = bitcoinData.upper_bound(date);
                    if (it != bitcoinData.begin())
                        --it;
                    float   exchangeRate = it->second;
                    float   result = exchangeRate * value;
                    std::cout << std::fixed << std::setprecision(2) << result << std::endl;
                } 
            } else {
                std::string error_message = "failed to parse line : ";
                error_message.append(line);
                throw std::runtime_error(error_message);
            }
        } catch (std::runtime_error &e) {
            std::cerr << RED << "Error: " << PLAIN << e.what() << std::endl;
        }
    }
    input.close();
}
