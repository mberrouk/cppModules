/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 07:21:37 by mberrouk          #+#    #+#             */
/*   Updated: 2024/01/15 09:58:21 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, const char *argv[]) {
    
    t_input input;
    int n;

    if (argc < 2)
        return 1;

    input.clockS = std::clock();
    if (init_data(input.seqInt, argv, argc))
        return 2;  
    Ford_JohnsonSort(input.seqInt);
    input.clockE = std::clock();


    std::deque<int> seq;
    std::clock_t deque_start = std::clock();
       
    if (init_deque(seq, argv, argc))
        return 2;  
    Ford_JohnsonSortd(seq);
    std::clock_t deque_endtime = std::clock();
    
    std::cout << "Before: ";
    print_array(input.seqInt);
    std::cout << "After: ";
    print_array(input.seqInt);
    
    long double time = static_cast<long double>((input.clockE - input.clockS)* 1000.0) / CLOCKS_PER_SEC ;
    std::cout << "Time to process a range of "<< input.seqInt.size() 
        << " elements with std::vector : " << time << std::endl;
    
    time = static_cast<long double>((deque_endtime - deque_start)* 1000.0) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of "<< seq.size() << " elements with std::deque : " << \
        time << std::endl;

    return (0);

}