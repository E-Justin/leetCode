class Solution:
    def removeDuplicates(self, num_list: List[int]) -> int:
        c = Counter(num_list)
        for num in c:
            while c[num] > 1:
                num_list.remove(num)
                c[num] -= 1
        return len(num_list)