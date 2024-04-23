class Solution:
    def isPalindrome(self, x):
        if x < 0: 
            return False

        p1 = x
        counter = 0 

        if x%10==0 and x//10!=0:
            return False
        while x>counter:
            counter = (counter * 10) + (x % 10)
            if x!=counter:
                x = x // 10
        return x == counter
        