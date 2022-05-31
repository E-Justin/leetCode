class Solution:
    def intersect(self, list1: List[int], list2: List[int]) -> List[int]:
        intersection = []
        c = Counter(list1)
        for num in list2:
            if c[num] > 0:
                intersection.append(num)
                c[num] -= 1
        return intersection