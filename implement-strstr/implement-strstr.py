class Solution:
    def strStr(self, big_string: str, to_find: str) -> int:
        if to_find in big_string:
            return(big_string.find(to_find))
        else:
            return -1