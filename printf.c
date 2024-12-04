#include <stdio.h>

int main(void) {
    char buffer[1024];
    fgets(buffer, 1024, stdin);
    printf(buffer);  // %s
    return 0;
}
// printf("%d %d %d %d %d %d %d %d %d %d %d %d ", x )
// rdi rsi rcx rdx ? ?
// f(a1, a2, a3, a4, a5, a6, a7, a8)
// push a8
// push a7
