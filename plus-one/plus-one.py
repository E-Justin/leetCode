class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for i in range(len(digits)):
            digits[i] = str(digits[i])

        digits = ''.join(digits)
        digits = int(digits)
        digits += 1

        digits = str(digits)
        digits = list(digits)

        for i in range(len(digits)):
            digits[i] = int(digits[i])
        return digits