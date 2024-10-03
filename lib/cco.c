#include <stdio.h>
#include <stdlib.h>

char file_name[30];
char compile_command[30];
char execute_command[30];
int system(const char *command);

int main(void) {

  printf("Enter file name to compile and run: \n");

  scanf("%s", file_name);

  sprintf(compile_command, "gcc %s.c -o %s", file_name, file_name);
  sprintf(execute_command, "./%s", execute_command);

  system(compile_command);
  system(execute_command);
  
  return 0;
}

