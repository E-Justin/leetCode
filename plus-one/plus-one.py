class Solution:
    def plusOne(self, num_list: List[int]) -> List[int]:
        
        for i in range(len(num_list)): num_list[i] = str(num_list[i])
        num_list = ''.join(num_list)
        num_list = int(num_list)
        num_list += 1

        num_list = str(num_list)
        num_list = list(num_list)
        for i in range(len(num_list)): num_list[i] = int(num_list[i])
        
        return num_list