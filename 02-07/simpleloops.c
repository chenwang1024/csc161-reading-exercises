// In simpleloops.c
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i--) {
        printf("%d\n", i);
    }
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}

/* 1. You should choose i = 0 and i < 10
   2. You should choose i = 0 and i <= 10
   3. You should chosse i = 10 and i >= 0  */
