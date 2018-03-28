#include<stdio.h>
int main(int argc, char const *argv[]) {
	int i, j, end;
	int flag;

	end = 100;
	for(i=1;i<=end;i++){
		flag = 0;
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(i==0){
			continue;
		}
		if(flag==0){
			printf("%d\n", i);
		}
	}
	return 0;
}
