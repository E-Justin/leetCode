class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        half = len(s) // 2
        for i in range(half):
            j = -i - 1
            s[i], s[j] = s[j], s[i]