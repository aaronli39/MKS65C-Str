#include <string.h>
#include <stdio.h>

int my_strlen(char *s) {
	int i;
	while(*s++){
		i++
	}
	return i;
}
char *my_strncat (char *out, const char *inp, int n) {
     int size = strlen(out);
     int i;

     for (i = 0; i < n && inp[i] != "\0"; i++) {
         out[size + i] = inp[i];
     } return out;
}



int main() {
    char s1[50] = "Hello ";
    char *s2 = "world";
    puts(cat(s1, s2, 2));
    return 0;
}
