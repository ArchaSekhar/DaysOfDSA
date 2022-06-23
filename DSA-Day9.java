class Solution 
{
    public int maxProfit(int[] prices) 
    {
        int min=prices[0];
        int max=prices[0];
        int res=0,pos=0;
        for (int i=1;i<prices.length;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
                pos=i;
            }
            max=min;
            if(prices[i]>max && i>pos)
                max=prices[i];
            if((max-min)>res)
                res=max-min;
        }
        return (res);
    }
}