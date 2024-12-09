def isValidSubsequence(array, sequence):
    # Write your code here.
    counter = 0
    
    for i in sequence:
        if i in array:
            array = array[array.index(i)+1 ::]
            counter+=1
            
    if counter == len(sequence):
        return True
    return False