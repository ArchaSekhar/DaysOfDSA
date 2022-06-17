class Solution 
{
  public int findNumbers(int[] nums) 
  {
    int c=0,i=0;
    for(i=0;i<nums.length;i++)
    {
      int n=0;
      while(nums[i]>0)
      {
        n=n+1;
        nums[i]=nums[i]/10;
      }
      if(n%2==0)
      {
        c=c+1;
      }
    }
    return c;
  }
}