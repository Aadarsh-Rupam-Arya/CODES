#include <stdio.h>
int main()
{
   int counter; 		//number of grade to be entered next
   int grade, total, average;
   total = 0; 		// initialize total
   counter = 1;		// initialize loop counter
   while ( counter <= 5) {	 // loop 10 times
      printf( "%s", "Enter grade: "); 
      scanf( "%d", &grade ); 
      total = total + grade; 
      counter = counter + 1; 	// increment counter
      } // end while
average = total / 5;
printf( "Class average is %d\n", average );
}


