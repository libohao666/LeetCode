int findDuplicate(int* nums, int numsSize){
    if (numsSize <= 1) return -1;
    int slow = nums[0];
    int fast = nums[nums[0]];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    slow = 0;
    while (fast != slow) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}

