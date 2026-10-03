class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),l=0,r=0,ans=0,zero=0;
        while(r<n)
        {
            if(nums[r]==0)
            {
                zero++;
            }
            if(zero>k)
            {
                while(zero>k)
                {
                    if(nums[l]==0)
                    {
                        zero-=1;
                    }
                    l+=1;
                }
            }
            if(zero<=k)
            {
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;

        // int ans=0,zero=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     zero=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         if(nums[j]==0)
        //         {
        //             zero+=1;
        //         }
        //         if(zero<=k)
        //         {
        //             ans=max(ans,j-i+1);
        //         }
        //         else
        //         {
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};