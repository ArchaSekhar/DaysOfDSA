class Solution(object):
    def twoSum(self, nums, target):
        ans=[];
        for i in range(0,len(nums),1):
            for j in range(i+1,len(nums),1):
                if(nums[i]+nums[j]==target):
                    ans.append(i); 
                    ans.append(j); 
                    return ans;