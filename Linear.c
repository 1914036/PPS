#include<stdio.h>
 main()
 {
   int array[100], search, c, number;
   printf("Enter the number of elements in array\$   scanf("%d",&number);
   printf("Enter %d numbers\n", number);
   for ( c = 0 ; c < number ; c++ )
     scanf("%d",&array[c]);
   printf("Enter the number to search\n");
   scanf("%d",&search);
   for ( c = 0 ; c < number ; c++ )
   {                                                   if ( array[c] == search )   /* if required e$
     {
       printf("%d is present at location %d.\n", $
       break;                                          }
   }
   if ( c == number )
     printf("%d is not present in array.\n", sear$
   return 0;
 }
