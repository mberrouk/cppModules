#include "PmergeMe.hpp"
#include <vector>
#include <algorithm>
#include <iterator> 
#include <iostream>

void insertionSort(std::vector<int> &A, int p, int q) {
    for (int i = p; i < q - 1; i++) {
        int tempVal = A[i + 1];
        int j = i + 1;
        while (j > p && A[j - 1] > tempVal) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = tempVal;
    }
    // int[] temp = Arrays.copyOfRange(A, p, q +1);
    // std::vector<int> temp;
    // copy(a.begin() + p , arr.begin() + (q+1), back_inserter(temp));
    // Arrays.stream(temp).forEach(i -> System.out.print(i + " "));
    // System.out.println();
}

void merge_sort(std::vector<int> &arr, int start, int e, int end) {
    std::cout << e << " " << start << " " << end << std::endl;
    int n1 = e - start + 1;
    int n2 = end - e;
    std::vector<int> LA;
    copy(arr.begin() + start , arr.begin() + (e+1), back_inserter(LA));
    
    std::vector<int> RA;
    copy(arr.begin() + (e+1), arr.begin() + end, back_inserter(RA));
    
    int RIDX = 0;
    int LIDX = 0;
    for (int i = start; i < end - start ;i++) {
        if (RIDX == n2) {
            std::cout << "(RIDX == n2): i " << i <<  " RiDX " << RIDX << " Lidx " << LIDX<< std::endl;
            std::cout << "(RIDX == n2): i " << arr[i] <<  " RiDX " << RIDX  << std::endl;
            arr[i] = LA[LIDX];
            LIDX++;
        } else if (LIDX == n1) {
            std::cout << "(LIDX == n1): i " << i <<  " RiDX " << RIDX << " Lidx " << LIDX << std::endl;
            arr[i] = RA[RIDX];
            RIDX++;
        } else if (RA[RIDX] > LA[LIDX]) {
            std::cout << "-->>(RA[RIDX] > LA[LIDX]): i " << i <<  " RiDX " << RIDX << " Lidx " << LIDX << std::endl;
            arr[i] = LA[LIDX];
            LIDX++;
        } else {
            std::cout << "-->>III: i " << i <<  " RiDX " << RIDX << " Lidx " << LIDX<< std::endl;
            arr[i] = RA[RIDX];
            RIDX++;
        }
    }

}

void sort(std::vector<int> &arr, int start, int end) {
    if(end - start > 5) {
        int e = (start + end) / 2;
        sort(arr, start, e);
        sort(arr, e + 1, end);
        std::cout << "---------> " << std::endl;
        merge_sort(arr, start, e, end);
    } else {
        std::cout << "--*****> " << start << " " << end << std::endl;
        insertionSort(arr, start, end);
    }
}

int main() {
    int t[] = {2, 5, 1, 6, 7, 8, 4, 9};
    std::vector<int> arr;

    for (int i = 0; i < 8 ; i++) {
        arr.push_back(t[i]);
    }
       for (int i = 0; i < 8 ; i++) {
        std::cout << arr[i] << std::endl;
    }
    sort(arr, 0, 8);
       for (int i = 0; i < 8 ; i++) {
        std::cout << arr[i] << std::endl;
    }
}