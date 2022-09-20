class Solution:
    def reverse(self, num: int) -> int:
        # if num is negative
        if num < 0:
            negative = True
            # get absolute value (remove negative)
            num = abs(num)
        else:
            negative = False
        
        # int to string
        num = str(num)
        # string to list
        num = list(num)
        
        # get middle index
        mid = len(num) // 2
        j = - 1
        
        # reverse items in list
        for i in range(mid):
            num[i], num[j] = num[j], num[i]
            j -= 1
        
        # list to string
        num = ''.join(num)
        # string to int
        num = int(num)
        
        # if negative, insert negative sign at front
        if negative is True:
            num = 0 - num
            
        if -2**31 - 1 >= num or num >= 2**31 - 1:
            return 0

        return num