
#include <stdlib.h>
#include <string.h>

int main () {
   char command[50];
//internal and relative command is not working 
//Sunday, October 22, 2023 12:43:24 PM
   strcpy( command, "pwd" );
   system(command);

   return(0);
} 