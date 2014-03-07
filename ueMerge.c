/* 
 * File:   ueMerge.c
 * Author: nina
 *
 * Created on 7. März 2014, 22:46
 */

#include <stdio.h>
#include <stdlib.h>

void mergesort(int * a, int lo, int hi) //int pointer (array), n: anzahl der elemente
{
    if (hi - lo < 1) {
        return; // an array of size <= 2 is already sorted
    }
    
    int mid = (lo+hi)/2;
    mergesort(a, lo, mid);
    mergesort(a, mid+1, hi);
    
    // todo: merge them
}
void mergesort(int * a, int n)
{
    mergesort(a, 0, n-1)
}

void printArray(int * a, int n)
{
    // todo
}

int main(int argc, char** argv) {
    
    int a[] = { 15, 42, 26, 37, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    // at this point sizeof(a) is really the number of bytes the array uses
    
    printArray(a, n);
    mergesort(a, n);
    printArray(a, n);
    

    return (EXIT_SUCCESS);
}

