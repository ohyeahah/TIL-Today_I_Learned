import numpy as np

array  = np.array([[['A','B','C'], ['D', 'E', 'F'], ['G', 'H', 'I']],
                   [['J','K','L'], ['M', 'N', 'O'], ['P', 'Q', 'R']],
                   [['S','T','U'], ['V', 'M', 'X'], ['Y', 'Z', '']]])

word = array[0, 0, 0] + array[2, 0, 0] + array [2, 0, 0]

print(word)
print(array.ndim)
print(np.__version__)