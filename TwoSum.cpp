
/// TwoSum.cpp Leetcode Problem No #1 ///
/// Given an array of integers, return indices of the two numbers such that they add up to a specific target. ///
/// Author Nethra c Sashikar ///
/// Source https://leetcode.com/problems/two-sum/# ///
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> val; // Using Hashmap to hold count each number occurence
        vector<int> v; // Vector to hold the result indices 
        for(int i=0;i<nums.size();i++)
        {
            val[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            // check if the difference between given number and target exist in the hashmap  
            // and the solution has not been found yet
            if(val[target-nums[i]]!=0&&(v.size()<2)) 
            {
                // Case:1 if the difference is not equal the given number 

                if(nums[i]!=target-nums[i])
                {
                v.push_back(i);
                val[target-nums[i]]--;
                }
                // Case:2 if the difference is equal to the given number
                else if(nums[i]==target-nums[i]&& val[target-nums[i]]>1)
                {
                v.push_back(i);
                
                }
            }
            // Solution is already found
            if(v.size()==2)
                return v;
            
        }
        return v;
        
    }
};