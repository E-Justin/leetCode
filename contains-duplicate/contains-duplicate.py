class Solution:
    def containsDuplicate(self, num_list: List[int]) -> bool:
        c = Counter(num_list)
        for num in num_list:
            if c[num] > 1:
                return True
        return False