#include <string.h>
#include <stdio.h>

// My strlen() takes string input and returns int output of string length
int my_strlen(char *s) {
	int i = 0;
	while(s[i] != '\0') {
		i++;
	} return i;
}

// My strncpy() takes a destination string, string to copy, and an integer
// that specifies how many characters of the string to copy into destination
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

// My strncat() takes a destination string, string to concatenate, and an integer
// that specifies how many characters of the string to concatenate into destination
char *my_strncat(char *out, const char *inp, int n) {
	int size = strlen(out);
	int i;

	for (i = 0; i < n && inp[i] != '\0'; i++) {
		out[size + i] = inp[i];
	} return out;
}

// my_strcmp takes in two char pointers and compares the strings that they point o
// if s1 > s2, it returns a positive number
// if s1 < s2, it returns a negative number
// if s1 == s2 it returns 0
int my_strcmp(char *s1, char *s2 ){
  int i;
  for (i=0; *(s1+i) || *(s2+i);i++){
    return *(s1+i) - *(s2+i);
  }
  return 0;
}

// my_strchr takes in a char pointer and a char
// it returns a pointer to the first occurance of the char in the string that
// the char pointer points to
char * my_strchr(char *s, char c ){
  while(*s!=c&&*s++);
  return c==0||*(s-1)!=0?s:NULL;
}

// my_strchr takes in two char pointers
// it returns a pointer to the first occurance of the string that s2 points to
// in the string that s1 points to
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

  printf("s1: [%s]\ns2: [%s]\ns3: [%s]\ns4: [%s]\ns5: [%s]\n\n",s1,s2,s3,s4,s5);

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
