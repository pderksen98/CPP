#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include <string>
#include <iomanip>

class PmergeMe {
    private:
        std::vector<int>    _vec;
        std::list<int>      _list;

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe&    operator=(const PmergeMe& other);

        void    sortWithVector(char** argv);
        void    sortWithList(char** argv);
        void    mergeList(std::list<int>& list1, std::list<int>& list2);
        void    sortList(std::list<int>& inputList);
        void    printList();
        void    printVector();
        void    sortVector(std::vector<int>& vec, int low, int high);
        void    mergeVector(std::vector<int>& vec, int low, int mid, int high);
        
        std::list<int>      getList() const;
        std::vector<int>    getVec() const;
};

#endif
