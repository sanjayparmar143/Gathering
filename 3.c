#include<stdio.h>
 

int Findlength(char str[]){
   
   int len = 0;
   
   while (str[len] != '\0')
   
      len++;
   
   return (len);
}
 
main(){
	
   char str[100];
   int length;
 
   printf("Enter the String :- ");
   gets(str);
 
   length = Findlength(str);
 
   printf("Length of the String is :- %i", length);

}
 

