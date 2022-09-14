class Solution:
    def generate(self, num_rows: int) -> List[List[int]]:
        output = []
        # build the number of rows specified
        for i in range(1, num_rows + 1):
            if i == 1:  # first row
                output.append([1])  # append row
            elif i == 2:  # second row
                output.append([1, 1])  # append row
            else:  # rows 3 +
                new_row = [1, 1] 
                for j in range(i - 2):
                    k = j + 1
                    # add first two elements, then continue moving over until we're done
                    new_item = (output[i - 2][j] + output[i - 2][k])  
                    # insert new element to new_row
                    new_row.insert(j + 1, new_item)
                    k += 1
                # append completed row to final result
                output.append(new_row)
        return output
