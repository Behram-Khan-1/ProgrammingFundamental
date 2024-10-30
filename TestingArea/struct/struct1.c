#include<string.h> 

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  strcpy(s1.myString, "Some text"); //cant do myString = "hello", array's are treated as pointers in C, so we cant directly do this.
  s1.myNum = 2;

  // Trying to print the value
  printf("My string: %s", s1.myString);

  return 0;
}