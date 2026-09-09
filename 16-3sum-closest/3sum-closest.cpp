class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0;
        int i=0;
        int result=nums[0]+nums[1]+nums[2];
        if(nums.empty())
            return -1;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-2;i++)
        {
            int j=nums.size()-1;
            int k=i+1;
            while(k<j)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-result))
                {
                    result=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                else if(sum<target)
                {
                    k++;
                }
                else
                {
                    j--;
                }
            }
            
        }
        return result;
    }
};