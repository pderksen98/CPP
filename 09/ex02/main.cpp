#include <iostream>
#include "PmergeMe.hpp"

// int main(int argc, char* argv[]) {
//     if (argc <= 2) {
//         std::cout << "Wrong input" << std::endl;
//         return (1);
//     }

//     std::chrono::steady_clock::time_point   start, end;
//     std::chrono::microseconds               time;

//     start = std::chrono::steady_clock::now();
//     for (int i = 0; i < 100000000; i++) {
//         int* a = new int(44);
//         (*a)++;
//         if (i == 73002) {
//             std::cout << "a = " << *a << std::endl;
//         }
//         if (i == 83953948) {
//             std::cout << "hier zijn we dannnnn\n";
//         }
//         delete a;
//     }
//     end = std::chrono::steady_clock::now();
//     time = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
//     (void)argv;

//     // std::cout << "start = " << start << std::endl;
//     // std::cout << "end = " << end << std::endl;
//     std::cout << "time = " << time.count() << "[ms]" << std::endl;

//     std::cout << "Hello World!" << std::endl;
//     return (0);
// }


// *************** INSERT SORT *******************

// void    insertionSort(std::vector<int>& nums) {
//     for (int i = 1; i < static_cast<int>(nums.size()); i++) {
//         int key = nums[i];
//         int j = i - 1;

//         while (j >= 0 && nums[j] > key) {
//             nums[j + 1] = nums[j];
//             j--;
//         }
//         nums[j + 1] = key;
//     }
// }


// int main() 
// {
//     std::vector<int>    nums = {12, 11, 13, 5, 6};
//     insertionSort(nums);

//     for (int num : nums) {
//         std::cout << num << " ";
//     }

//     return (0);
// }


// ****************** INSERT SORT *********************

// ****************** MERGE SORT ***********************

void    merge(std::vector<int>& nums, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // create temp arrays
    std::vector<int>    L(n1), R(n2);

    // copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = nums[l + i];
    for (j = 0; j < n2; j++)
        R[j] = nums[m + 1 + j];

    // merge the temp arrays L[] and R[]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            nums[k] = L[i];
            i++;
        } else {
            nums[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of L[], if there are any
    while (i < n1) {
        nums[k] = L[i];
        i++;
        k++;
    }
    //copy the remaining elements of R[], if there are any
    while (j < n2) {
        nums[k] = R[j];
        j++;
        k++;
    }
}


void    mergeSort(std::vector<int>& nums, int l, int r) {
    if (l < r) {
        // int m = l + ( (r - l) / 2 );
        int m = (l + r) / 2;

        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);

        merge(nums, l, m, r);
    }
}


int main() {
    std::vector<int> nums = {12, 11, 13, 5, 6};
    mergeSort(nums, 0, nums.size() - 1);

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


// ****************** MERGE SORT ***********************