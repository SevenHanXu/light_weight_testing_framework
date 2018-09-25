/*************************************************************************
	> File Name: binary_search.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/25 15:19:35 2018
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
    return 0;
}

TEST(binary_search, expect_pass_test){
    int num[10] = {0};
    for(int i = 0; i < 10; i++){
        num[i] = i + 1;
    }
    for(int j = 0; j < 10; j++){
         EXPECT_EQ(binary_search(num, j, 10), j - 1);
    }

}
 
TEST(binary_search, assert_pass_test){
    int num[10] = {0};
    for(int i = 0; i < 10; i++){
        num[i] = i + 1;
    }
    for(int j = 0; j < 10; j++){
        ASSERT_EQ(binary_search(num, j, 10), j - 1);
    }
}

TEST(binary_search, expect_fail_test){
    int num[10] = {0};
    for(int i = 0; i < 10; i++){
        num[i] = i + 1;
    }
    for(int j = 0; j < 10; j++){
        EXPECT_EQ(binary_search(num, j, 10), j);
    }
}

TEST(binary_search, assert_fail_test){
    int num[10] = {0};
    for(int i = 0; i < 10; i++){
        num[i] = i + 1;
    }
    for(int j = 0; j < 10; j++){
        ASSERT_EQ(binary_search(num, j, 10), j - 1);
    }
}

