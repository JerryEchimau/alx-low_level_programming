#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int isNumeric(const char *str);
long multiply(long num1, long num2);
void printNumbers(long num);
int validateInput(int argc, char *argv[]);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
