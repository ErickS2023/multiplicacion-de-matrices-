// multiplicacion de matrices
#include<stdio.h>
#include<stlib.h>
#include<time.h>
int main(){
	
	int n,i,j,k;
	srand(time(NULL));
	printf("Ingrese la longitud de la matriz:\n");
	scanf("%d", &n);
	int A[n][n], B[n][n],C[n][n];
	
	printf("Matriz A:\n");
	for (i=0; i<n; i++){
		for(j=0; j<n; j+0+){
			A[i][j]=rand() % (9 + 1 - 1) + 1;
			printf("%d",A[i][j]);
		}
		printd("\n");
	}
	printf("Matriz B:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
		B[i][j]=rand()%(9 +1 - 1) + 1;
		printf("%d",B[i][j]);	
		}
		printf("\n");
	}
	printf("Matriz C:\n");
	int temporal; 
	for (i=0; i<n; i++){
		for(j=0; j<n; j++){
			temporal=0;
			for(k=0; k<n; k++){
				temporal += A[i][k]*B[k][j];
			}
			C[i][j]=temporal;
			printf("%d",C[i][j]);
		}
		printf("\n");
	}

  return 0;	
}