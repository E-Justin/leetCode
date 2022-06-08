class Solution:
    def longestCommonPrefix(self, str_list: List[str]) -> str:
        prefix = ''
        str_list.sort()
        j = 0
        if not str_list:
            return prefix
        while str_list[-1].isalpha() and str_list[0].isalpha() and str_list[0][j] == str_list[-1][j]:
            prefix += str_list[-1][j]
            j += 1
            if j == len(str_list[0]):
                break
        return prefix