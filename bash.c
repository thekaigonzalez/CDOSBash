#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  while (1)
  {
   char dir[256];
   getcwd(dir, 256);
   char sstr[5000];
   strcpy(sstr, "C:");
   strcat(sstr, dir);
   strcat(sstr, ">");
   char* command = readline(sstr);
   system(command);
  }
}
