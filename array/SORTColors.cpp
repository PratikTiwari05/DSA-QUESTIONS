// Problem: Sort Colors (Leetcode 75)
// Approach: Dutch National Flag Algorithm
// Time Complexity: O(n), Space Complexity: O(1)
// Description: 
// This function sorts an array containing only 0s, 1s, and 2s in a single pass 
// using three pointers – left, right, and index. The 'left' tracks the next position 
// to place 0, and 'right' tracks the next position to place 2.

void sortColors(vector<int>& nums) {
    int size = nums.size();
    int index = 0;       // Pointer to traverse the array
    int left = 0;        // Pointer to place next 0
    int right = size - 1; // Pointer to place next 2

    while(index <= right) {
        if(nums[index] == 0) {
            // Swap current element with left pointer and move both
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index] == 2) {
            // Swap current element with right pointer and move only right
            swap(nums[index], nums[right]);
            right--;
            // Don't increment index because the swapped element needs to
