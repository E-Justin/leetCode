class Solution:
    def isPalindrome(self, s: str) -> bool:
            # convert to lowercase
        s = s.lower()
        # remove all spaces
        s = s.replace(' ', '')
        # remove all non alpha characters
        for char in s:
            if not char.isalnum():
                s = s.replace(char, '')

        if s == s[::-1]:
            return True
        else:
            return False