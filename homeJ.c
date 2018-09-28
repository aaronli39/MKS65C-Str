#include <stdio.h>

//PUT THE NAME OF YOUR partner in Li.Aaron.txt

int my_strlen(char * str){
  int length = 0;
  while (*str++){
    length++;
  }
  return length;
}

char * my_strncpy(char *dest, char *source, int n){
  int i;
  for (i=0; i<n && *source; i++){
    *(dest+i) = *(source+i);
  }

  return dest;
}

int main() {
  char *testString = "";
  printf("%d\n",my_strlen(testString));
  return 0;
}
