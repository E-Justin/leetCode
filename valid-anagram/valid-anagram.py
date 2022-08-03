class Solution:
    def isAnagram(self, word1: str, word2: str) -> bool:
        if len(word1) != len(word2):
            return False
        word_1_letters = Counter(word1)
        word_2_letters = Counter(word2)
        anagram = True
        for letter in word_1_letters:
            if word_1_letters[letter] != word_2_letters[letter]:
                anagram = False
                break
        return anagram
        