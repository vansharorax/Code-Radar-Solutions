#include <stdio.h>

int findUnsortedSubarray(int* nums, int numsSize) {
    int start = -1, end = -2; // default values in case array is already sorted
    int max = nums[0], min = nums[numsSize - 1];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < max)
            end = i;
        else
            max = nums[i];

        if (nums[numsSize - 1 - i] > min)
            start = numsSize - 1 - i;
        else
            min = nums[numsSize - 1 - i];
    }

    return end - start + 1;
}


