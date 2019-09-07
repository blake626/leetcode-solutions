class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        numList = []

        for i in nums:
            if i not in numList:
                numList.append(i)
            else:
                numList.remove(i)
                
                    
        return numList[0]