class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        divBy5 = 'Buzz'
        divBy3 = 'Fizz'
        divByBoth = 'FizzBuzz'
        i = 1
        toReturn = []
        while i <= n:
            if i % 3 == 0 and i % 5 == 0:
                toReturn.append(divByBoth)
            elif i % 3 == 0:
                toReturn.append(divBy3)
            elif i % 5 == 0:
                toReturn.append(divBy5)
            else:
                toReturn.append(str(i))
            i += 1

        return toReturn