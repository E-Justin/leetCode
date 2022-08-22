class Solution:
    def twoSum(self, num_list: List[int], equals: int) -> List[int]:
        length = len(num_list)
        for i in range(length - 1):
            for j in range(i + 1, length):
                if num_list[i] + num_list[j] == equals:
                    return [i, j]