class Solution:
    def singleNumber(self, num_list: List[int]) -> int:
        c = Counter(num_list)
        for num in c:
            if c[num] == 1:
                return num