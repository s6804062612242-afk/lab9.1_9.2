#include <stdio.h>

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 

int size=2;
int A[] = {2,3},B[]={8,9};
int main() {
	int a = 1, b = 2, c = 3;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
 	swapValue(&a,&b,&c);

	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
//	swapArray()
//before swap array
		printf("before swap array %d %d\n",A[0],A[1]);
		printf("before swap array %d %d\n",B[0],B[1]);
		swapArray(A,B,size);
//after swap
		printf("after swap array %d %d\n",A[0],A[1]);
		printf("after swap array %d %d\n",B[0],B[1]);

}
void swapValue(int *a, int *b, int *c){
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void swapArray(int *A, int *B, int size){
	int temp = 0;
	for(int i =0 ;i<size;i++){
	temp = *A;
	*A =*B;
	*B =temp;
	
	A++;
	B++;
	}
}
	
	
