#include <stdio.h>
#include<ctype.h>
int main(void) {
  char x = 'a'; 
  printf("Hello World\n");
  printf("the value of x is %c\n", toupper(x));
  printf("%s\n", isalpha(x)?"True":"False");

  
  printf("%s", "Good!\n");
  return 0;
}
