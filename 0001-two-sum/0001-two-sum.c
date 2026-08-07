#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;  // Always returning two indices

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;  // store indices, not values
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;  // no solution found
    return NULL;
}