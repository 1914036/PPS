#include <stdio.h>
    
int main() {
   float percentage;
   int total_marks = 1200;
   int scored = 1122;
    
   percentage = (float)scored / total_marks * 100.0;

   printf("Percentage = %.2f%%", percentage);
    
   return 0;
}   

