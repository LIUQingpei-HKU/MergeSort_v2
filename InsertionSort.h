//
// Created by liuyubobobo on 7/16/16.
//


#ifndef INC_02_MERGE_SORT_INSERTIONSORT_H
#define INC_02_MERGE_SORT_INSERTIONSORT_H

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void insertionSort(T arr[], int n){

    for( int i = 1 ; i < n ; i ++ ) {

        T e = arr[i];
        int j;
        for (j = i; j > 0 && arr[j-1] > e; j--)
            arr[j] = arr[j-1];
        arr[j] = e;
    }

    return;
}

//sort arr[l,...,r]
template<typename T>
void insertationSort(T arr[], int l, int r){
    for(int i=l+1;i<=r;i++){
        T e = arr[i];
        int j;
        for(j=i;j>l&&arr[j-1]>e;j--)
            arr[j] = arr[j-1];
        arr[j] = e;
    }
}
#endif //INC_02_MERGE_SORT_INSERTIONSORT_H
