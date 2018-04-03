#include<stdio.h>
int main(int argc, char const *argv[]) {
	int i;
	unsigned char *ptr;

	int num_1 = 2147483647;

	printf("num_1 = %d\n", num_1);
	ptr = (unsigned char *) &num_1;
	printf("%x\n", *ptr);
	printf("%X\n", num_1);
	for (i=0; i<(int) sizeof(num_1); i++){
		printf("0x%x ", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
