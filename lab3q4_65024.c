#include <stdio.h>
int main() {
	int sum=0;
	int a;
	int count=0;
	for(;;){
		printf("enter a number :");
		scanf("%d",&a);
		if (a<=0){
		printf("sum = %d  avg = %d\n",sum,sum/count);
		return 0;
		}
	count++;
	sum+=a;
	}
}
