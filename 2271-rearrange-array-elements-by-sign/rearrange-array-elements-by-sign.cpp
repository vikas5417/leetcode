class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) {
                v1.push_back(nums[i]);
            }
        }
        int i=1,j=0;
        while(j<nums.size()) {
            if(nums[j]<0)
            {
                v1.insert(v1.begin()+i,nums[j]);
                i+=2;
            }
            j++;
        }
        return v1;
    }
};