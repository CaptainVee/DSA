def twoNumberSum(array, targetSum):
    for i in range(len(array) - 1):
        first_number = array[i]
        for j in range(i + 1, len(array)):
            second_number = array[j]
            if first_number + second_number == targetSum:
                return [first_number, second_number]

    return []