/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 07:21:49 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/15 09:29:22 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <ctime>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <deque>

typedef struct s_input{
    std::clock_t clockS;
    std::clock_t clockE;
    std::vector<int> seqInt;
} t_input;

void  Ford_JohnsonSort(std::vector<int> &arr);
void DivideAndHybridSort(std::vector<int> &arr, int start, int end);
void insertionSort(std::vector<int>& arr, int start, int end);
void mergeSort(std::vector<int> &arr, int start, int midl, int end);
int init_data(std::vector<int> &seqInt, const char *argv[], int argc);
bool is_integer(const char *arg, int *n);
void print_array(std::vector<int> &array);
int err_msg();


void  Ford_JohnsonSortd(std::deque<int> &arr);
void DivideAndHybridSortd(std::deque<int> &arr, int start, int end);
void insertionSortd(std::deque<int>& arr, int start, int end);
void mergeSortdeque(std::deque<int> &arr, int start, int midl, int end);
int init_deque(std::deque<int> &seqInt, const char *argv[], int argc);
bool is_integer(const char *arg, int *n);
void print_deque(std::deque<int> &array);


#endif