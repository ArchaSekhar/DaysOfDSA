class Solution(object):
    def letterCombinations(self, digits):
        dic = dict({'2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'});
        d1=[' ']
        if(digits==''):
            return []
        for i in range(0,len(digits)):
            ans=[]
            d2=dic[digits[i]]
            for i in d1:
                for j in d2:
                    if(i==' '):
                        ans.append(j)
                    else:
                        ans.append(i+j)
            d1=ans
        return ans
            