# 0x08. C - Recursion

- In this project, we understoof the concept of recursion and compared recursive functions and iterative functions.
- Here are the tasks done in the project:

## Tasks :clipboard:

### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

- Here, we use a base case ``'\0'``  to stop recursion when there is no more characters left in the string.

### 1. Why is it so important to dream? Because, in my dreams we are together

- Here, we used recursion to call s to the last digit and then print as it recursively solved itself backwords

### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

- Here, we set the  base case as `'\0'`, which means that recusrion will stop if null is encountered.
- we then call the function recursively, each time moving one more step towards ``'\0'`` and adding 1.

### 3. You mustn't be afraid to dream a little bigger, darling

- Here, we set the base case ``n == 0`` where it should return 1.
- Thereafter, the factorial should be ``n * factorial(n - 1)``

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate

- Here, we use recursion with the multiplication logic of powers
- To find the power, we recursively recall the function with y reducing and x retaining its value and each time multiplying with x

### 5. Your subconscious is looking for the dreamer

- Here, I used a helper function that schecks the midpoint and scans  from both ends until they meet or cross
- I set the base case as ``num * num == n`` and checked on both ends, reducing mid and adding mid by 1 respectively

### 6. Inception. Is it possible?

- For this one, I had to create a helper to test for prime by first creating the base case of 0 and 1 when 2, or 3 is encountered.
- Then we recalled the function recursivley while increaing the start point by one uuntil the half of end (i.e ``n / 2``[could also be sqrt of n])