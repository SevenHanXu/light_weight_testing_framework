/*************************************************************************
	> File Name: test.h
	> Author: 
	> Mail: 
	> Created Time: 二  9/25 10:54:50 2018
 ************************************************************************/

#ifndef _TEST_H
#define _TEST_H

#define ASSERT_EQ(a, b){\
    __typeof(a) __a = (a);\
    __typeof(b) __b = (b);\
    printf("%s == %s : %s\n", #a, #b, (__a) == (__b) ? "OK" : "FAIL");\
    if(__a != __b){\
        abort();\
    }\
}



#endif
