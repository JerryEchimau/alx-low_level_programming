# 0x07. C - Even more pointers, arrays and strings

In this project, we continued to explore several operations of pointers, arrays, and strings.
Here are the projects that were completed:

## Tasks :clipboard:

### 0. memset

- Here, I initialized a loop from 0 to n, each time replacing s[i] with the buffer

### 1. memcpy

- This is simlar with the ``memset()`` but now the we copy from source instead of buffer

### 2. strchr

- Here, we traverse through the string and compare that the character is the same value, if not, we move forward

### 3. strspn

- Here, we traverse the source and check each character against the accept and if the character at source is equal to the character at accept, then we add the counter and break.

### 4. strpbrk

- Here, we got through each of the source string character and check whether it is similar to any of the characters in the accept string

### 5. strstr

- For this one, i traversed through each character in haystack from the pointer and for each, I would compare if it is equal to the character at the same position in needle.
- If this is true, I checked if the next character in the needle is NULL, if not, I go to the next character and this will hapen as long as the characters are equal in both.

### 6. Chess is mental torture

- Here, we use a nested loop to go through each row and print each collum on every row

### 7. The line of life is a ragged diagonal between duty and desire

- In this, since the 2D matrix is pased to our function as a 1D integer pointer, we have to calculate the offset
- The general formula for the offset of any square matrix is ``*(a + offset)`` and offset is calculated as ``i * size + i`` for the principle diagonal and ``i * size _ (size - 1 - i)`` for the secondary diagonal.

### 8. Double pointer, double fun

- This simply involves chaging the double pointed character pointer to point to the same values as the character pointer *to.
- It is more efficient to move around character pointers rather than copying the contents of the strings firts. That's the need for double pointer in this task