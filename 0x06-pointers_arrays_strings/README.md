# 0x06. C - More pointers, arrays and strings

In this project, we learnt more about pointers, arrays, and strings<br>
Here are the tasks in this project:

## Tasks :clipboard:

### 0. strcat

- Here, we use two ``for()`` loops to go through the destination and then the source strings separately.
- Thereafter, connect the two by copying the rest of source to the rest of dest

### 1. strncat

- Here, we use the same concept as ``strcat()`` but now we use delimeter n to stop concatenating when it is encountered in the source
- We can implement this by subtracting one from each iteration until there is no need for further concatenation or n gets to 0.

### 2. strncpy

- Go through ``src`` while copying each character to ``dest`` and stop when either ``src`` is null terminated or n is reached
- Then create another loop to add null if i is still less than n (i.e n is more than ``src``)

### 3. strcmp

- Here, we compare each character from both strins and if they are not equal, then the character in s2 is subtracted from s1
- If s1 is greater, then this will return positive and vice versa

### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

- Here, we create a temp integer holder and switch ``a[back]`` with ``a[fron]`` until the halfway point i.e front < back
- This will effectively reverse the array

### 5. Always look up

- Here, we used the same string input and iterated through each character and converted to uppercase using ASCII values i.e ``'a' - 'A'`` which can be written as 32

### 6. Expect the best. Prepare for the worst. Capitalize on what comes

- Here, go through every character of the string. Check if it's the first character of a word (i.e separated by a separator). If it's the first letter, capitalize it

### 7. Mozart composed his music not for the elite, but for everybody

- Here, create an array with all the characters to be replaced and go through each character of input string and replace with corresponding digit
- The trick is to create an array and place the characters to be replaced in order of the number to be replaced with
