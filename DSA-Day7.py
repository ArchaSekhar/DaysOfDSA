class Solution:
   def countWords(self, words1, words2):
        ans=0
        for a in words1:
            w1 = words1.count(a)
            w2 = words2.count(a)
            if(w1==1 and w2==1):
                ans=ans+1
        return ans