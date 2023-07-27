#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
    std::cout << "PmergeMe constructor\n";
}

PmergeMe::~PmergeMe() {
    std::cout << "PmergeMe destructor\n";
}

void    PmergeMe::printVector() 
{
    for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++) {
        std::cout << *it << " ";
    } 
    std::cout << std::endl;
}




void    PmergeMe::mergeVector(std::vector<int>& vec, int low, int mid, int high) 
{
    std::vector<int>    temp(high - low + 1);
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high) {
        if (vec[i] <= vec[j]) {
            temp[k] = vec[i];
            i++;
        } else {
            temp[k] = vec[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = vec[i];
        i++;
        k++;
    } 
    while (j <= high) {
        temp[k] = vec[j];
        j++;
        k++;
    }

    for (i = low; i <= high; i++) {
        vec[i] = temp[i - low];
    }
}

void    PmergeMe::sortVector(std::vector<int>& vec, int low, int high) 
{
    if (low < high) {
        if (high - low <= 16) {
            std::cout << "counting\n";
            //use insertion sort for small subarrays
            for (int i = low + 1; i <= high; i++) {
                int key = vec[i];
                int j = i - 1;

                while (j >= low && vec[j] > key) {
                    vec[j + 1] = vec[j];
                    j--;
                }
                vec[j + 1] = key;
            } 
        } else {
            int mid = (low + high) / 2;
            this->sortVector(vec, low, mid);
            this->sortVector(vec, mid + 1, high);
            mergeVector(vec, low, mid, high);
        }
    }
}

void    PmergeMe::sortWithVector(char **argv)
{
    argv++;
    while (*argv) {
        if (std::stoi(*argv) < 0) {
            throw std::runtime_error("only positive integers allowed");
        }
        this->_vec.push_back(std::stoi(*argv));
        argv++;
    }
    this->printVector();
    this->sortVector(this->_vec, 0, this->_vec.size() - 1);
}
