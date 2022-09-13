class Solution:
    def merge(self, list_a: List[int], a: int, list_b: List[int], b: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # get lengths
        length_a = len(list_a)
        length_b = len(list_b)

        # if we need to remove anything
        if a != length_a:
            for _ in range(length_a - a):
                list_a.pop()

        # if we need to remove anything
        if b != length_b:
            for _ in range(length_b - b):
                list_b.pop()

        # merge lists
        for num in list_b:
            list_a.append(num)

        # sort lists
        list_a.sort()

        