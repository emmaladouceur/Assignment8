//Emma Ladouceur 
//Hmmm... still working on this, but i'm a little confused. I have a text book that I'm going to go through and try and work on this... but below is my sort. 
//Homework

#include <stdio.h>

int main(){
	int i, j,a,n,array[30];


	printf("Enter a value for N \n");

	scanf("%d", &n);



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

		printf("%d\n", array[i]);
		}


}
