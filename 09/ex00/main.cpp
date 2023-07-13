# define RED "\033[1;31m"
# define PLAIN "\033[0m" 
# define GREEN "\033[1;92m"

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
// #include <chrono>

//NO CLUE HOW THIS WORKS YET - CHATGPT
bool    isDateValid(const std::string& date) 
{
    std::istringstream ss(date);
    std::tm            tm = {};
    ss >> std::get_time(&tm, "%Y-%m-%d");
    return ss.eof() && !ss.fail();
}

bool    isValueValid(float value) 
{
    return (value >= 0 && value <= 1000);
}

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
            std::cout << "Failed to parse line: '" << line << "' in data.csv file" << std::endl;
            // throw std::runtime_error("Failed to parse line in data.csv file");
        }
    }
    data.close();
    return (bitcoinData);
}

std::map<std::string,float> parseInputMap(char* inputFile) {
    std::map<std::string,float> inputMap;
    std::ifstream   input(inputFile);
    
    if (!input.is_open()) {
        throw std::runtime_error("Could not open input.txt file");
    }
    
    std::string line;
    std::string date;
    float       value;

    std::getline(input, line); //Don't need the first line
    while (std::getline(input, line)) {
        std::stringstream    ss(line);

        if (std::getline(ss, date, '|') && ss >> value) {
            if (isDateValid(date) && isValueValid(value)) {
                inputMap[date] = value;
            } else {
                std::cout << "Invalid data on line: '" << line << "' in input.txt file\n";
            }
        } else {
            std::cout << "Faile to parse line: '" << line << "' in input.txt file\n";
        }
    }
    input.close();
    return (inputMap);
}


int main(int argc, char* argv[]) 
{
    //Checking argument count
    if (argc != 2) {
        std::cerr << RED << "Error: " << PLAIN << "1 argument expected [input.txt]\n";
        return (1);
    }
    //Parsing input.txt and data.csv file's
    try {
        std::map<std::string,float> inputMap = parseInputMap(argv[1]);
        std::map<std::string,float> bitcoinData = parseBitcoinData();



        std::cout << bitcoinData["2011-12-30"] << std::endl;
    } catch (std::runtime_error &e) {
        std::cerr << RED << "Error: " << PLAIN << e.what() << std::endl;
        return (1);
    }

   


    return (0);
}