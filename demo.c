#include <stdio.h>
#include <string.h>

//demo for strcpy, strncpy
int main() {

  printf("Demo of strcpy\n");
  char s[] = "Hello World";
  char s1[20];
  strcpy(s1, s);
  printf("Value of s1 is %s\n", s1);

  printf("Demo of strncpy\n");
  char string[] = "Hello World";
  char string1[20];
  char string2[20];
  strncpy(string1, string, 50);
  strncpy(string2, string, 5);
  string2[5] = 0;
  printf("Value of string1 (first 50 chars of string) is %s\n", string1);
  printf("Value of string2 (first 5 chars of string) is %s\n", string2);
  return 0;
}
