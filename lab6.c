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
	int min = A[0][0];
	for (i = 0;i<m;i++){
		for(j = 0;j<n;j++){
			if (min > A[i][j]){
				min = A[i][j];
			}
		}
	}
	printf("%d",min);
	return 0;
}
