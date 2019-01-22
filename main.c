#include <stdio.h>
#include <string.h>

const char A = 65;
const char Z = 90;
const int _ = 2 * (Z - A + 1);

int main(int argc, char ** argv) {
	char msg[_];
	printf("There may be Dragons.\n");
	for (int i = 0; i < _; i += 2) {
		msg[i] = (char) A + i / 2;
		msg[i+1] = ',';
	}
	msg[strlen(msg) - 1] = 0;
	printf("%s\n", msg);
	// reverse
	const char _l = strlen(msg);
	for (int i = 0; i < _l; i += 2)
	{
		const char __ = msg[i];
		const char _m = _l - 1 - i;
		msg[i] = msg[_m];
		msg[_m] = __;
	}
	printf("%s\n", msg);
	printf("\nWhy isn't the second string reversed ?\n");
	return 0;
}