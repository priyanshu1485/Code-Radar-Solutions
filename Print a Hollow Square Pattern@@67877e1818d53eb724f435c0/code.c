
#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=1;j<=n;j++){
			if (i==0||i==n-1||j==1||j==n){
				printf("*");
			}
			else{
				printf(" ");
			}
		
		}
		printf("\n");
	}
}
