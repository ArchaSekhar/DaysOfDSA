class Solution(object):
  def shuffle(self, nums, n):
    res=[]
    x=nums[0:n];
    y=nums[n:];
    for i in range(0,n,1):
      res.append(x[i]);
      res.append(y[i]);
      return res;