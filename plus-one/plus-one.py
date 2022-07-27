class Solution:
    def plusOne(self, num_list: List[int]) -> List[int]:
        new = [str(i) for i in num_list]  # convert list of ints into list of strings

        new = ''.join(new)  # convert list of strings to single string

        new = int(new)  # convert string to int

        new += 1  # increment by 1

        new = str(new)  # convert int back to string

        new = list(new)  # convert string into list

        for i in range(len(new)):  # convert each individual item to an int
            new[i] = int(new[i])

        return new