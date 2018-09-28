#include <stdio.h>

//PUT THE NAME OF YOUR partner in Li.Aaron.txt

int my_strlen(char * str){
  int length = 0;
  while (*str++){
    length++;
  }
  return length;
}

int my_strncpy(char * str){
  return 0;
}

int main() {
  char *testString = "";
  printf("%d\n",my_strlen(testString));
  return 0;
}
