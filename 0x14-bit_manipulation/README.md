# 0x14-bit_manipulation project

This project introduced the concept of bit manipulation to help us manipulate bits directly <br>
Here are the tasks in this project:<br>

## Tasks

### 0. 0

- [0-binary_to_uint.c](0-binary_to_uint.c): C function that converts a binary number to an unsigned int.

### 1. 1
- [1-print_binary.c](1-print_binary.c): C function that prints the binary representation of a number.

### 2. 10
- The right shift operator (>>) moves the bits of n to the right by the number of positions specified by index.

<br>

- [2-get_bit.c](2-get_bit.c): C function that returns the value of a bit at a given index.

### 3. 11
- The OR operation sets a bit to 1 if either the corresponding bit in the first operand or the second operand is 1.
- By 'ORing' the original value of *n with our carefully constructed mask (1 << index), we guarantee that the bit at the position index will be set to 1, while leaving all other bits unchanged.

<br>

- [3-set_bit.c](3-set_bit.c): C function that sets the value of a bit at a given index to 1.

### 4. 100
- We create a mask with 1 (move 1 to the index position)
- The bitwise NOT operator (~) inverts all the bits of the mask we just created. Now we have a mask with a 0 at the index position and 1s everywhere else.
- By 'ANDing' the original value of *n with our inverted mask (~(1UL << index)), we force the bit at the index position to become 0 (because the mask has a 0 there), while leaving all other bits in *n unchanged (since the mask has 1s everywhere else).

<br>

- [4-clear_bit.c](4-clear_bit.c): C function that sets the value of a bit at a given index to 0.

### 5. 101
- XOR produces a 1 only when the corresponding bits are different. Therefore, xor_result will have 1s in the positions where the bits in n and m need to be flipped to make them the same.
- We iterate through the LSB (Least significant bit [basically the last bit on the right]) and If this bit is 1 (meaning the corresponding bits in n and m were different), we increment the count.
- After checking the least significant bit, we shift xor_result one position to the right using >>=. This brings the next bit into the LSB position for examination in the next iteration.

<br>

- [5-flip_bits.c](5-flip_bits.c): C function that returns the number of bits needed to be flipped to get from one number to another.

### 6. Endianness
- This code leverages pointers and type casting to examine the byte order of the test value (num) in memory, allowing us to determine the endianness of the system

<br>

- [100-get_endianness.c](100-get_endianness.c): C function that checks endianness.

### Task 7:
- [101-password](101-password): File containing the password for the crackme3 executable.
	- checked for alx tools on github
	- followed the instrutions in https://github.com/osala-eng/alx_tools/blob/master/crackme3.sh to create the file 101-password
