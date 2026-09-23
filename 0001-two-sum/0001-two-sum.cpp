class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int a=0;
        // for(int i=1;i<=n;i++)
        // {
        //     if(nums[a]+nums[i]==target)
        //     {
        //         return {a,i};
                
        //     }
        //    a++;
        // }

        int i=0,j=nums.size()-1;
        while (i<j) 
        {
            if(nums[i]+ nums[j]==target) 
            {
                return {i,j};
            } 
            else 
            {
                j--;
                if(i==j) 
                {
                    i++;
                    j=nums.size()-1;
                }
            }
        }
        return {};
    }
};
