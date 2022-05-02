#include <stdio.h>
#include <unistd.h>

int main() {
	int pid = getpid();
	printf("Program pid: %i\n", getpid());
	while(1) {}
}
