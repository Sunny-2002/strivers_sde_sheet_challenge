#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
        int x = -1, y = -1;
        for(int i = 0; i < n-1; i++) 
            if(nums[i] < nums[i+1]) 
                x = i;
        
        // x will remain -1 only if the array is sorted in descending order
        if(x == -1)
        {
            // sort in ascending order
            sort(nums.begin(), nums.end());
            return nums;
        }
        
        for(int i = x+1; i < n; i++) 
            if(nums[x] < nums[i]) 
                y = i;
        
        swap(nums[x], nums[y]);
        
        reverse(nums.begin()+x+1, nums.end());
    	return nums;
}