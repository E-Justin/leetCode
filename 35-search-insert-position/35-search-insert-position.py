class Solution:
    def searchInsert(self, num_list: List[int], target: int) -> int:
        try:
            return num_list.index(target)
        except:
            num_list.append(target)
            num_list.sort()
            return num_list.index(target)