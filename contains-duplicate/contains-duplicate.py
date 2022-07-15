from collections import Counter

class Solution:
    def containsDuplicate(self, num_list: List[int]) -> bool:
        c = Counter(num_list).values()
        duplicate = False
        for num in c:
            if num > 1:
                duplicate = True
                break
        return duplicate
        