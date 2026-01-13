#include <stdio.h>
int main(){
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int A[m][n];
	for (i = 0;i<m;i++){
		for(j = 0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for (i = 0;i<m;i++){
		for(j = 0;j<n;j++){
			printf("%d ",A[i][j]+1);
		}
		printf("\n");
	}
	return 0;
}
