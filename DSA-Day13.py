import numpy

class Solution(object):
    def containsDuplicate(self, nums):
        x=numpy.array(nums);
        a=numpy.unique(x);
        if(len(nums)>len(a)):
                return True;
        return False;