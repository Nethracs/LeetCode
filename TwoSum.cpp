
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> val;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            val[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(val[target-nums[i]]!=0&&(v.size()<2))
            {
                if(nums[i]!=target-nums[i])
                {
                v.push_back(i);
                val[target-nums[i]]--;
                }
                else if(nums[i]==target-nums[i]&& val[target-nums[i]]>1)
                {
                v.push_back(i);
                
                }
            }
            if(v.size()==2)
                return v;
            
        }
        return v;
        
    }
};