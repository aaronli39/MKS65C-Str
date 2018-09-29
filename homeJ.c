#include <stdio.h>
#include <string.h>

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
  char *s1 = "superman";
  char s2[] = "man";
  char s3[30] = "people";
  char *s4 = "earth";
  char s5[] = "manofearth";
  printf("%d\n",my_strlen(s5));
  return 0;
}
