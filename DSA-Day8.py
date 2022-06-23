class Solution(object):
    def countBits(self, n):
        res=[0]
        if(n>=1):
            res.append(1)
            for i in range (2,n+1):
                r=[]
                while(i>=1):
                    r.append(i%2)
                    i=i//2
                c=r.count(1)
                res.append(c)
        return res