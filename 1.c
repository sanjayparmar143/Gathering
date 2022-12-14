#include<stdio.h>
 
int fact(int n){
   
    if(n==0)
     
	return(1);
    
	return(n*fact(n-1));
}


main(){
	
    int x,n;
    printf(" Enter the Number to Find Factorial :");
    scanf("%i",&n);
 
    x = fact(n);
    printf(" Factorial of %i is %i",n,x);

}

