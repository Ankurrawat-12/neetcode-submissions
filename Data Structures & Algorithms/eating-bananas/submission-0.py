from math import ceil

class Solution:

    def noOfHours(self, piles: List[int], eatingRate: int) -> int:
        totalHours = 0
        for pile in piles:
            totalHours += ceil(pile / eatingRate)
        return totalHours

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        upperBound = 0;
        minRate = float('inf')
        for i in piles:
            if i > upperBound:
                upperBound = i
            
        if len(piles) == h:
            return upperBound
        
        left = 1
        right = upperBound
        mid  = 0
        while left <= right:
            mid  =  (left + right)//2
            hours = self.noOfHours(piles, mid)
            if hours > h:
                left = mid + 1
            
            else :
                right = mid - 1                
                minRate = min(minRate, mid)

        return minRate