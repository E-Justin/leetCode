class Solution:
    def longestCommonPrefix(self, str_list: List[str]) -> str:
        prefix = ''
        smallest = min(str_list)  # get smallest word
        longest = max(str_list)  # get longest word
        for i in range(len(smallest)):  # iterate through each char in smallest word
            if smallest[i] == longest[i]:  # if the chars, in the same place are the same
                prefix += smallest[i]  # concatenate prefix
            else:  # if chars are different
                break  # exit loop
        return prefix