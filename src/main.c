#include <stdio.h>
#include <stdlib.h>

int main(void) {
    setbuf(stdout, NULL);

    printf("$ ");
    fflush(stdout);

    getchar();  // Wait for you to press Enter
    return 0;
}
