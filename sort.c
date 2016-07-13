//Emma Ladouceur 

//Homework

#include <stdio.h>

int main(){
	int i, j,a,n,array[30];


	printf("Enter a value for N \n");

	scanf("%d", &n);

	printf("Enter the numbers");

	for(i=0; i<n; i++){
		
		for(j=i+1; j<n; j++){
			if(array[i] > array[j]){
				a = array[i];
				array[i]=array[j];
				array[j]=a;


			}

		}

	}
	printf("The numbers are arranged in ascending order");
		for(i=0;i<n;++i){

		printf("%d", array[i]);
		}


}
