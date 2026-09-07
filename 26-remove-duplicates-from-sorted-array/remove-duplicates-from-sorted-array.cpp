class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int i=0;
        int j=i+1;
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
                j++;
            else
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};