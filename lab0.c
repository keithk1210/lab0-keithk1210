#include <stdio.h>
int main(int argc, char *argv[]) {  /* or **argv */
  /* Some notes:
   * Refer to the latest slide deck to help you with this assignment.
   * In printf, you can use %p to print out a Pointer (i.e., an address) in hex format.
   * Recall, to access the Address of a variable, use the ampersand (e.g., int x = 5; int *xp = &x // xp points to x).
   * Recall, to access the Data stored in a pointer variable, use the asterisk (e.g., int y = *xp + 3 // y will equal 8).
   * Recall, a string in C is simply an array of char data types that is null-terminated (\0);
   */
	printf("argc is stored at %p and is storing the value %d\n", &argc,argc);
	printf("argv is stored at %p and is storing the address %p\n", &argv, argv);
	for (int i = 0; i < argc; i++) {
	printf("argv[%d] is stored at the address %p and is storing the addrss %p; it is pointing to the start of the string: %s\n",i,&argv[i],argv[i],argv[i]);
	}

return 0;
}

/* Answer the following questions.
 *
 * Q0: How many bytes apart is argc and argv?
 * A0: 12 bytes 
 *
 * Q1: How many bytes apart are the addresses in the argv array? Why are there no gaps in memory between them?
 * A1: They are 8 bytes apart. There are no gaps in memory because array elements are stored right next to each other in memory.
 *
 * Q2: How could we access the 3rd character in the argv[0] string? (Hint: argv is like an array of arrays.)
 * A2: argv[0][2]
 */
