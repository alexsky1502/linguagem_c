#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr; //you need to declare a pointer of type file

   // "directory", "mode"
   fptr = fopen("program.txt","w"); 

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr); //closing a file

   return 0;
}