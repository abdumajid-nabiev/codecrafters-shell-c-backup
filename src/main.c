#include <stdio.h>
#include <string.h>

int main(void) {
    setbuf(stdout, NULL);

    char input[1024];

    while (1) {
        printf("$ ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            break;
        }

        printf("%s: command not found\n", input);
    }

    return 0;
}
