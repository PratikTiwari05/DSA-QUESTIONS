// Problem: Sort Colors (Leetcode 75)
// Approach: Dutch National Flag Algorithm
// Time Complexity: O(n), Space Complexity: O(1)
// Description: 
// This function sorts an array containing only 0s, 1s, and 2s in a single pass 
// using three pointers – left, right, and index. The 'left' tracks the next position 
// to place 0, and 'right' tracks the next position to place 2.

void sortColors(vector<int>& nums) {
    int size = nums.size();
    int index = 0;         // Pointer to traverse the array
    int left = 0;          // Pointer to place next 0
    int right = size - 1;  // Pointer to place next 2

    while (index <= right) {
        if (nums[index] == 0) {
            swap(nums[index], nums[left]);
            left++;
            index++;
        } 
        else if (nums[index] == 2) {
            swap(nums[index], nums[right]);
            right--;
            // Do not increment index because the element swapped from the right 
            // could be 0, 1, or 2, and needs to be processed.
        } 
        else {
            // If the element is 1, move on
            index++;
        }
    }
}
