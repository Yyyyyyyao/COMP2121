#include <stdio.h>
#include <stdlib.h>

void multiply(char *c);
int main(int argc, char *argv[]){
	char letter = 'a';
	multiply(letter);
	return EXIT_SUCCESS;
}
void multiply(char *c){
	*c = *c + 1;
}
