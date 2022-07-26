class Solution:
    def intersect(self, num_list1: List[int], num_list2: List[int]) -> List[int]:
        intersection = []
        c = Counter(num_list1)
        for num in num_list2:
            if c[num] > 0:
                intersection.append(num)
                c[num] -= 1
        return intersection