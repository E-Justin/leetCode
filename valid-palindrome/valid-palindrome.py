class Solution:
    def isPalindrome(self, words: str) -> bool:

        words = words.lower()
        palindrome = False
        backwards = ''

        for char in words:
            if not char.isalnum():
                words = words.replace(char, '')

        backwards = words[::-1]

        if words == backwards:
            palindrome = True
            
        return palindrome