#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=1;j<=n;j++){
			printf("* ");
		}
		
		printf("\n");
	}
}