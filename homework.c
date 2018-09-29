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
char *my_strncpy(char *out, const char *inp, int n) {
	int i;

	for(i = 0; i < n && inp[i] != "\0"; i++) {
		out[i] = inp[i];
	}
	out[my_strlen(out)] = '\0';
	return out;
}

// My strncat() takes a destination string, string to concatenate, and an integer
// that specifies how many characters of the string to concatenate into destination
char *my_strncat(char *out, const char *inp, int n) {
	int size = strlen(out);
	int i;

	for (i = 0; i < n && inp[i] != "\0"; i++) {
		out[size + i] = inp[i];
	} return out;
}

int main() {
	char s1[50] = "Hello hehee";
	char *s2 = "world";
	printf("len: %d\n", my_strlen(s1));
	printf("output: %s\n", my_strncpy(s1, s2, 4));
	printf("len: %d\n", my_strlen(s1));
	return 0;
}
