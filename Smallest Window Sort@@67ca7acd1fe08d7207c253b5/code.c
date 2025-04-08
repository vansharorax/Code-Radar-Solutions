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

int main() {
    int nums[] = {2, 6, 4, 8, 10, 9, 15};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findUnsortedSubarray(nums, size);
    printf("Length of unsorted subarray: %d\n", result);

    return 0;
}
