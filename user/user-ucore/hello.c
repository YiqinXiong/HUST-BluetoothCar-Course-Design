#include <syscall.h>

#define printf(...)                     fprintf(1, __VA_ARGS__)

int main(int argc, char **argv)
{
	// printf("Hello World!\r\n");     //user
    syscall(142);                   //kernel
	return 0;
}
