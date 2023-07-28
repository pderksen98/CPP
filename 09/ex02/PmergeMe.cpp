#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	// std::cout << "PmergeMe constructor\n";
}

PmergeMe::~PmergeMe() {
	// std::cout << "PmergeMe destructor\n";
}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other) {
	this->_vec = other._vec;
	this->_list = other._list;
	return (*this);
}


// *******************************************************************
// *************************   VECTOR     ****************************
// *******************************************************************

std::vector<int>	PmergeMe::getVec() const {
	return this->_vec;
}

void PmergeMe::printVector()
{
    std::cout << "After Vector :\t";
    for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
        std::cout << *it << " ";
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
	// this->printVector();
	this->sortVector(this->_vec, 0, this->_vec.size() - 1);
}

// *******************************************************************
// *************************    LIST      ****************************
// *******************************************************************

std::list<int>	PmergeMe::getList() const {
	return this->_list;
}

void PmergeMe::printList() {
    std::cout << "After List :\t";
    for (std::list<int>::iterator it = this->_list.begin(); it != this->_list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void    PmergeMe::mergeList(std::list<int>& list1, std::list<int>& list2)
{
	std::list<int>	temp;

	std::list<int>::iterator it1 = list1.begin();
	std::list<int>::iterator it2 = list2.begin();

	while (it1 != list1.end() && it2 != list2.end()) 
	{
		if (*it1 <= *it2) {
			temp.push_back(*it1);
			it1++;
		} else {
			temp.push_back(*it2);
			it2++;
		}
	}

	while (it1 != list1.end()) {
		temp.push_back(*it1);
		it1++;
	}
	while (it2 != list2.end()) {
		temp.push_back(*it2);
		it2++;
	}
	list1 = temp;
}

void    PmergeMe::sortList(std::list<int>& inputList) 
{
	if (inputList.size() <= 1) {
		return ;
	} else if (inputList.size() <= 16) {
		//Insertion sort;
		for (std::list<int>::iterator it = inputList.begin(); it != inputList.end(); /* nothing */) 
		{
			std::list<int>::iterator insert = inputList.begin();
			while (insert != it && *insert <= *it) {
				insert++;
			}
			if (insert != it) {
				int key = *it;
				it = inputList.erase(it); //returns iterator to next element
				inputList.insert(insert, key); //inserts new element before element specified by iterator
			} else {
				it++;
			}
		}
		return ;
	}

	std::list<int>  list1, list2;
	int half = inputList.size() / 2;

	std::list<int>::iterator it = inputList.begin();
	for (int i = 0; i < half; i++) {
		list1.push_back(*it);
		it++;
	}
	while (it != inputList.end()) {
		list2.push_back(*it);
		it++;
	}
	this->sortList(list1);
	this->sortList(list2);
	this->mergeList(list1, list2);
	inputList = list1;
}

void    PmergeMe::sortWithList(char **argv) 
{
	argv++;
	while (*argv) {
		if (std::stoi(*argv) < 0) {
			throw std::runtime_error("only positive integers allowed");
		}
		this->_list.push_back(std::stoi(*argv));
		argv++;
	}
	this->sortList(this->_list);
}
