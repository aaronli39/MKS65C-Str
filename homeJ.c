#include <stdio.h>
#include <string.h>

int my_strlen(char * str){
  int length = 0;
  while (*str++){
    length++;
  }
  return length;
}

char * my_strncpy(char *dest, const char *source, int n){
  int i;
  for (i=0; i<n && *(source+i); i++){
    *(dest+i) = *(source+i);
  }
  for (;i<n;i++){
    *(dest+i) = 0;
  }
  return dest;
}

char * my_strncat(char *dest, char *source, int n){
  int i;
  int destLength = my_strlen(dest);
  for (i=0; i<n && *source; i++){

  }
}

int main() {
  char *s1 = "warped";
  char s2[50] = "hello";
  char s3[] = "help";

  char *my_s1 = "warped";
  char my_s2[50] = "hello";
  char my_s3[] = "help";

  printf("Testing strlen(s1):\n");
  printf("[standard]: %d\n",(int)strlen(s1));
  printf("[mine]: %d\n",my_strlen(my_s1));
  printf("\n");

  printf("Testing strncpy(s2,s1,4):\n");
  printf("[standard]: %s\n",strncpy(s2,s1,4));
  printf("[mine]: %s\n",my_strncpy(my_s2,my_s1,4));

  return 0;
}
