class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=nums.size();
        // for(int i=0;i<s;i++)
        // {
        //     if(((nums[i]+nums[i+1])==target) || (((nums[i]+nums[i+1])>target))
        //     {

        //     }
        // } 
        int n=nums.size();
        int ans=INT_MAX,cur=0,j=0;
        for(int i=0;i<n;i++)
        {
            cur+=nums[i];
            if(cur>=target)
            {
                while(cur>=target&&j<=i)
                {
                   if(cur-nums[j]>=target)
                   {
                       cur-=nums[j];
                       j++;
                    }
                   else
                   {
                       break;
                   }
                }
                ans=min(ans,i-j+1);
                
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};