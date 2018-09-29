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
  for (; i<n; i++){
    *(dest+i) = 0;
  }
  return dest;
}

char * my_strncat(char *dest, char *source, int n){
  int i;
  int destLength = my_strlen(dest);
  for (i=0; i<n && *source; i++){
    *(dest+destLength+i) = *(source+i);
  }
  *(dest+destLength+i) = 0;
  return dest;
}

int my_strcmp(char *s1, char *s2 ){
  int i;
  for (i=0; *(s1+i) || *(s2+i);i++){
    return *(s1+i) - *(s2+i);
  }
  return 0;
}

char * my_strchr(char *s, char c ){
  while(*s!=c&&*s++);
  return c==0||*(s-1)!=0?s:NULL;
}

char * my_strstr(char *s1, char * s2 ){
  int combo = 0;
  int s2Length = my_strlen(s2);
  int i;
  for(i=0;*(s1+i)&&combo!=s2Length;i++){
    if (*(s1+i)==*(s2+combo)){
      combo++;
    }
    else {
      combo = 0;
    }
  }
  return combo==s2Length?s1+i-combo:NULL;
}

int main() {
  char *s1 = "warped";
  char s2[50] = "hello";
  char s3[] = "helped";
  char s4[] = "noo";
  char s5[10] = "pe";

  char *my_s1 = "warped";
  char my_s2[50] = "hello";
  char my_s3[] = "helped";
  char my_s4[] = "noo";
  char my_s5[10] = "pe";

  printf("Testing strlen(s1):\n");
  printf("[standard]: %d\n",(int)strlen(s1));
  printf("[mine]: %d\n",my_strlen(s1));
  printf("\n");

  printf("Testing strncpy(s2,s1,4):\n");
  printf("[standard]: [%s]\n",strncpy(s2,s1,4));
  printf("[mine]: [%s]\n",my_strncpy(my_s2,my_s1,4));
  printf("\n");

  printf("Testing strncat(s2,s3,4):\n");
  printf("[standard]:[%s]\n",strncat(s2,s3,4));
  printf("[mine]: [%s]\n",my_strncat(my_s2,my_s3,4));
  printf("\n");

  printf("Testing strcmp(s3,s4):\n");
  printf("[standard]: %d\n",strcmp(s1,s4));
  printf("[mine]: %d\n",my_strcmp(my_s1,my_s4));
  printf("\n");

  printf("Testing strchr(s3,'e'):\n");
  printf("[standard]: [%p]\n",strchr(s3,'e'));
  printf("[mine]: [%p]\n",my_strchr(s3,'e'));
  printf("\n");

  printf("Testing strchr(s1,0):\n");
  printf("[standard]: [%p]\n",strchr(s1,0));
  printf("[mine]: [%p]\n",my_strchr(s1,0));
  printf("\n");

  printf("Testing strchr(s4,'w'):\n");
  printf("[standard]: [%p]\n",strchr(s4,'w'));
  printf("[mine]: [%p]\n",my_strchr(s4,'w'));
  printf("\n");

  printf("Testing strstr(s1,s5):\n");
  printf("[standard]: [%p]\n",strstr(s1,s5));
  printf("[mine]: [%p]\n",my_strstr(s1,s5));
  printf("\n");

  printf("Testing strstr(s1,\"weep\"):\n");
  printf("[standard]: [%p]\n",strstr(s1,"weep"));
  printf("[mine]: [%p]\n",my_strstr(s1,"weep"));
  printf("\n");

  return 0;
}
