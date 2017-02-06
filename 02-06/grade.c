// In grade.c
#include <stdio.h>

int main(void) {
    int grade = 60;
    char letter = 'f';    /* by default... */

    if (grade >= 90) {
        letter = 'a';
    }
    if (grade >= 80) {
        letter = 'b';
    }
    if (grade >= 70) {
        letter = 'c';
    }
    if (grade >= 60) {
        letter = 'd';
    }
    printf("%c\n", letter);
    return 0;
}

/* Error is that for each condition, the grade should be larger or equal instaed of just being larger. If we do not fix it, a lot of people who get 60 may be counted as failed even though they pass. */

/* The above version is the function which has already been revised.*/
