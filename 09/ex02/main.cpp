#include "PmergeMe.hpp"

# define RED "\033[1;31m"
# define PLAIN "\033[0m" 
# define GREEN "\033[1;92m"


int main(int argc, char **argv) 
{
    if (argc <= 2) {
        std::cout << RED << "Error: " << PLAIN << "at least 2 arguments needed" << std::endl;
        return (1);
    }
    try {
        std::chrono::steady_clock::time_point   start_v, end_v, start_l, end_l;
        std::chrono::microseconds               total_v, total_l;

        PmergeMe    p;

        start_v = std::chrono::steady_clock::now();
        p.sortWithVector(argv);
        end_v = std::chrono::steady_clock::now();
        total_v = std::chrono::duration_cast<std::chrono::microseconds>(end_v - start_v);

        start_l = std::chrono::steady_clock::now();
        p.sortWithList(argv);
        end_l = std::chrono::steady_clock::now();
        total_l = std::chrono::duration_cast<std::chrono::microseconds>(end_l - start_l);

        std::cout << "Before : ";
        for (int i = 1; i < argc; i++) {
            std::cout << argv[i] << " ";
        }
        std::cout << std::endl;

        p.printVector();
        p.printList();
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << total_v.count() << " [us]" << std::endl;
        std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << total_l.count() << " [us]" << std::endl;

    } catch (std::invalid_argument& e) {
        std::cerr << RED << "Error: " << PLAIN << e.what() << std::endl;
        return (1);
    } catch (std::runtime_error& e) {
        std::cerr << RED << "Error: " << PLAIN << e.what() << std::endl;
        return (1);
    }
    return (0);
}
