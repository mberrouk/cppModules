/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 07:21:46 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/15 09:29:53 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
int err_msg() {
    std::cout << "Error: ";
    std::cout << "program input must be a positive integer sequence." << std::endl;
    return 1;
}

void print_array(std::vector<int> &array) {    
    std::vector<int>::iterator it = array.begin();
    for (;it != array.end(); ++it) {
         std::cout << *it << " ";
    }
    std::cout << std::endl;
}

bool is_integer(const char *arg, int *n) {
    
    if (!arg || !*arg || *arg == '-' || *arg == '0')
        return false;
    
    for (int i = 0; i < strlen(arg); ++i) {
        if (!std::isdigit(arg[i]))
            return false;
    }

    long value = std::atol(arg);

    if (value < 1 || value > INT_MAX)
        return false;
    
    *n = value;
    return true;
}

int init_data(std::vector<int> &seqInt, const char *argv[], int argc) {
    int n;

    for (int i = 1; i < argc; i++) {
        if (*argv[i] && !is_integer(argv[i], &n) || n < 1)
            return err_msg();
        if (*argv[i])
            seqInt.push_back(n);
    }
    return (0);
}

void mergeSort(std::vector<int> &arr, int start, int midl, int end) {
    int left_end = midl - start + 1;
    int right_end = end - midl;
    
    std::vector<int> left_part;
    copy(arr.begin() + start , arr.begin() + (midl+1), back_inserter(left_part));

   
    std::vector<int> right_part;
    copy(arr.begin() + (midl+1), arr.end() , back_inserter(right_part));

    int right_index = 0;
    int left_index = 0;
    
    for (int i = start; i < end ;i++) {
        if (left_index == left_end) {
            arr[i] = right_part[right_index++];
        } 
        else if (right_index == right_end) {
            arr[i] = left_part[left_index++];
        } 
        else if (right_part[right_index] > left_part[left_index]) {
            arr[i] = left_part[left_index++];
        } 
        else {
            arr[i] = right_part[right_index++];
        }
    }
}

void insertionSort(std::vector<int>& arr, int start, int end) {
    
    int small;
    int j;

    for (int i = start + 1; i <= end; i++) {
        small = arr[i];
        j = i - 1;

        while (j >= start && arr[j] > small) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = small;
    }
}


void DivideAndHybridSort(std::vector<int> &arr, int start, int end) {
    
    if(end - start > 10) {
        int midl = (start + end) / 2;
        DivideAndHybridSort(arr, start, midl);
        DivideAndHybridSort(arr, midl + 1, end);
        mergeSort(arr, start, midl, end);
    } else {
        insertionSort(arr, start, end);
    }
}

void  Ford_JohnsonSort(std::vector<int> &arr) {
    int n = arr.size();

    if (arr.size() < 2)
        return;
    
    int i = 1;
    for (; i < arr.size(); i++) {
        if (arr[i - 1] > arr[i])
            std::swap(arr[i - 1], arr[i]);
    }

    if (i == 2)
        return;

    DivideAndHybridSort(arr, 0, arr.size() - 1);
}

/************************************* deque **************************************************/


void print_deque(std::deque<int> &array) {    
    std::deque<int>::iterator it = array.begin();
    for (;it != array.end(); ++it) {
         std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int init_deque(std::deque<int> &seqInt, const char *argv[], int argc) {
    int n;

    for (int i = 1; i < argc; i++) {
        if (*argv[i] && !is_integer(argv[i], &n) || n < 1)
            return err_msg();
        if (*argv[i])
            seqInt.push_back(n);
    }
    return (0);
}

void mergeSortdeque(std::deque<int> &arr, int start, int midl, int end) {
    int left_end = midl - start + 1;
    int right_end = end - midl;
    
    std::deque<int> left_part;
    copy(arr.begin() + start , arr.begin() + (midl+1), back_inserter(left_part));

   
    std::deque<int> right_part;
    copy(arr.begin() + (midl+1), arr.end() , back_inserter(right_part));

    int right_index = 0;
    int left_index = 0;
    
    for (int i = start; i < end ;i++) {
        if (left_index == left_end) {
            arr[i] = right_part[right_index++];
        } 
        else if (right_index == right_end) {
            arr[i] = left_part[left_index++];
        } 
        else if (right_part[right_index] > left_part[left_index]) {
            arr[i] = left_part[left_index++];
        } 
        else {
            arr[i] = right_part[right_index++];
        }
    }
}

void insertionSortd(std::deque<int>& arr, int start, int end) {
    
    int small;
    int j;

    for (int i = start + 1; i <= end; i++) {
        small = arr[i];
        j = i - 1;

        while (j >= start && arr[j] > small) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = small;
    }
}


void DivideAndHybridSortd(std::deque<int> &arr, int start, int end) {
    
    if(end - start > 10) {
        int midl = (start + end) / 2;
        DivideAndHybridSortd(arr, start, midl);
        DivideAndHybridSortd(arr, midl + 1, end);
        mergeSortdeque(arr, start, midl, end);
    } else {
        insertionSortd(arr, start, end);
    }
}

void  Ford_JohnsonSortd(std::deque<int> &arr) {
    int n = arr.size();

    if (arr.size() < 2)
        return;
    
    int i = 1;
    for (; i < arr.size(); i++) {
        if (arr[i - 1] > arr[i])
            std::swap(arr[i - 1], arr[i]);
    }

    if (i == 2)
        return;

    DivideAndHybridSortd(arr, 0, arr.size() - 1);
}