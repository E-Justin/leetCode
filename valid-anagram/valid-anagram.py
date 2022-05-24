class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        anagram = True
        i = 0
        if len(s) != len(t):
            anagram = False
        while i < len(s) and anagram is True:
            if s.count(s[i]) != t.count(s[i]):
                anagram = False
                break
            i += 1
        return anagram
        