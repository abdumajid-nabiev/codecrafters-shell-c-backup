#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  setbuf(stdout, NULL);

  char input[1024];

  while (1) {
    printf("$ ");    // print shell prompt
    
    // 2. Read a line from the user
    if (fgets(input, sizeof(input), stdin) == NULL) {
      break;
    }

    input[strcspn(input,"\n")] = '\0';
  
    printf("%s: command not found\n", input);
  }
  return 0;
}