/*************************************************************************
	> File Name: binary_search.c
	> Author: 
	> Mail: 
	> Created Time: 二  9/25 10:19:55 2018
 ************************************************************************/

#include <stdio.h>
#include <assert.h>
#include "test.h"

int binary_search(int *num, int x, int len){
    int head = 0, tail = len - 1, mid;
    while(head <= tail){
        mid = (head + tail) >> 1;
        if(num[mid] == x) return mid;
        else if(num[mid] > x) tail = mid - 1;
        else head = mid + 1;
    }
    return -1;
}



int main(){
    int num[10] = {0};
    for(int i = 0; i < 10; i++){
        num[i] = i + 1;
    }
    ASSERT_EQ(binary_search(num, -1, 10), -1);
    ASSERT_EQ(binary_search(num, 11, 10), -1);
    ASSERT_EQ(binary_search(num, 2, 10), 1);
    ASSERT_EQ(binary_search(num, 1, 10), 0);
    ASSERT_EQ(binary_search(num, 10, 10), 9);
    return 0;
}
