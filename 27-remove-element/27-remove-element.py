class Solution:
    def removeElement(self, num_list: List[int], val: int) -> int:
        while num_list.count(val) != 0:
            num_list.remove(val)
        return len(num_list)