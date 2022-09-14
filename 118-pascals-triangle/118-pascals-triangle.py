class Solution:
    def generate(self, num_rows: int) -> List[List[int]]:
        output = []
        for i in range(1, num_rows + 1):
            if i == 1:
                output.append([1])
            elif i == 2:
                output.append([1, 1])
            else:
                new_row = [1, 1]
                for j in range(i - 2):
                    k = j + 1
                    new_item = (output[i - 2][j] + output[i - 2][k])
                    new_row.insert(j + 1, new_item)
                    k += 1

                output.append(new_row)
        return output