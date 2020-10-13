#include <syscall.h>

#define printf(...)                     fprintf(1, __VA_ARGS__)

int main(int argc, char **argv)
{
    syscall(143);                   //kernel
	return 0;
}
