#include<stdio.h>


int sum_of_elements(int *arr , int n){
   
   int i=0;
   int sum=0;
   
   for(i=0; i<n ; i++){
   	
       sum = sum + arr[i];
   }
   
   return sum;
}

main(){
	
    int total = 0;
    int array[10] = {10,20,30,40,50,60,70,80,90};
    
    total = sum_of_elements(array,9);
	
    printf("\nThe sum of all array elements is : %i",total);
	
}
