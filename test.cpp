#include <stdio.h>
#include <stdlib.h>


int cmp(const void *a, const void *b) {
    return (*(int*)a-*(int*)b);
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes){
    if (numsSize == 0) {
        *returnSize = 0;
        return 0;
    }
    qsort(nums, numsSize, sizeof(int), cmp);
    int cnt = 0;
    #define max_n 100
    int **ret = (int **)malloc(sizeof(int *) * max_n);
    int fuck[max_n];
    for (int a = 0; a < numsSize - 4; a++) {
        for (int b = 0; b < numsSize - 3; b++) {
            int c = b + 1, d = numsSize -1;
            while (c < d) {
                int sum = nums[a] + nums[b] + nums[c] + nums[d];
                if (sum < target) d -= 1;
                else if (sum > target) c += 1;
                else if (sum == target) {
                    int *tmp = (int *)malloc(sizeof(int) * 5);
                    tmp[0] = a;
                    tmp[1] = b;
                    tmp[2] = c;
                    tmp[3] = d;
                    fuck[cnt] = 4;
                    ret[cnt] = tmp;
                    cnt += 1;
                    break;
                }
            }
        }
    }
    *returnSize = cnt;
    **returnColumnSizes = *fuck;
    return NULL;
}


int main() {
	int nums[] = {1, 0, -1, 0, -2, 2};
	int target = 0, numsSize = 6;
	int *a = 0, **b = 0;
	fourSum(nums, numsSize, target, a, b);
}
