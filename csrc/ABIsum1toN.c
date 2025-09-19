#include <stdio.h>

extern int load(intx,inty);

int main() {
	int sum = 0;
	int count = 9;
	sum = load(0x0,count+1);
	printf("sum 0 to %d = %d\n",count,sum);
}
