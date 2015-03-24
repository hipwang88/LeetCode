//
//  main.cpp
//  26 Remove Duplicates from Sorted Array
//
//  Created by Noamanwang on 15/3/24.
//  Copyright (c) 2015年 Noamanwang. All rights reserved.
//

/*
 Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 For example,
 Given input array A = [1,1,2],
 
 Your function should return length = 2, and A is now [1,2].
*/

#include <iostream>

class Solution
{
public:
    int removeDumplicates(int A[], int n)
    {
        if (n > 0)
        {
            int nLength = 1;
            int *p = A;
            int *q = A;
            
            while (n)
            {
                if (*q == *p)
                {
                    ++q;
                }
                else
                {
                    ++p;
                    *p = *q;
                    ++q;
                    ++nLength;
                }
                n--;
            }
            
            return nLength;
        }
        else
            return 0;
    }
    
    void outPutArray(int A[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << A[i] << ' ' << std::endl;
        }
    }
};

int main(int argc, const char * argv[])
{
    // insert code here...
    int sortedArray[] = {1,1,2,2,3,3,3,4,4,4,5,5,5,6,7,8,9,10,11,12,12,12,12,12,14,15,15,16};
    //int sortedArray[] = {0,0,0,0,0};
    Solution s;
    int newLength = s.removeDumplicates(sortedArray, sizeof(sortedArray)/sizeof(int));
    s.outPutArray(sortedArray, newLength);

    return 0;
}
