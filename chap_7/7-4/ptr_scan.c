#include<stdio.h>
int main(int argc, char const *argv[]) {
	/* code */
	int i;
	unsigned char *ptr;

	char buf[1024] = "This is text message.";
	ptr = (unsigned char *) buf;

	for (i = 0; i < 0x100; i++) {
		printf("0x%02X\n", *ptr);
		if (((i + 1) % 15) == 0){
			printf("\n");
		}
		ptr++;
		/* code */
	}
	printf("\n");
	return 0;
}
