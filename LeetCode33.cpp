int search(int* nums, int numsSize, int target){
    int l = 0, r = numsSize - 1;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (nums[0] > target ^ nums[0] > nums[mid] ^ target > nums[mid]) {
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }
    return l == r && nums[l] == target ? l : -1;
}
