#include <stdio.h>

int main() {
	int number=100;
	int sum =0;

	for(int i=0;i<number;i++){
		sum += i+1;
	}

	printf("sum - %d\n",sum);
	return 0;
}
