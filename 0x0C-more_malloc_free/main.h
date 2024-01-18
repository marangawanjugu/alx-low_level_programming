#ifndef MORE_MALLOC_FREE
#define MORE_MALLOC_FREE

int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);
char *_memset(char *s, char b, unsigned int n);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
