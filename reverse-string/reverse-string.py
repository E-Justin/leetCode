class Solution:
    def reverseString(self, input_string: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        j = -1
        for i in range(len(input_string) // 2):
            input_string[i], input_string[j] = input_string[j], input_string[i]
            j -= 1
        print(input_string)