#include<stdio.h>

int main(int argc, char const *argv[]) {
	int i, j, end;
	int flag;

	end = 100;
	j = 1;
	while(j<=end){
		flag = 0;
		i = 2;
		while(i<j){
			if(j % i == 0){
				flag = 1;
				break;
			}
			i += 1;

			if(j == 1){
				j += 1;
				continue;
			}
		}
		if(flag==0){
			printf("%d\n", j);
		}
		j += 1;
	}
	return 0;
}
