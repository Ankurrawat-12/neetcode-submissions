class Solution:

    def countArea(self, bar: Tuple[int, int], index: int) -> int:
        return bar[1] * (index - bar[0])

    def largestRectangleArea(self, heights: List[int]) -> int:

        stack = []
        maxArea = 0
        for index, height in enumerate(heights):
            top = ()
            while stack and stack[-1][1] > height:

                top = stack.pop()
                maxArea = max(
                    maxArea,
                    self.countArea(top, index)
                )
                
            if stack:
                if top:
                    stack.append((top[0], height))
                else:
                    stack.append((index, height))
                    
            else:
                stack.append((0, height))

        while stack:
            top = stack.pop()
            maxArea = max(
                    maxArea,
                    self.countArea(top, len(heights))
            ) 

        return maxArea