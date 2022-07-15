from collections import Counter

class Solution:
    def containsDuplicate(self, num_list: List[int]) -> bool:
        c = Counter(num_list).values() # creates a list of dictionary values (how many of each number is in the list)
        duplicate = False
        for num in c: # iterate through the values
            if num > 1: # if one of the values is greater than 1 (if there are duplicates)
                duplicate = True 
                break  # exit loop
        return duplicate
        
