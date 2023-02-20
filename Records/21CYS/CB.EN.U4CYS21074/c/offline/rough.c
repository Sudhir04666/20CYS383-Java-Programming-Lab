/* To illustrate the use of fseek and ftell */
#include <stdio.h>
#include <stdlib.h>
int main() 
{
FILE *ifp;   /* Input file pointer. */
long pos;    /* To obtain positions using ftell. */
int  c;      /* To read characters from input file. */

/* Open the input file. */
ifp = fopen("details.txt", "r");
pos = ftell(ifp);
printf("%ld\n", pos); /* Print the file offset. */
c = fgetc(ifp);
printf("%c\n", c);  /* Print the first character (offset = 0) in file. */
pos = ftell(ifp);
printf("%ld\n", pos); /* Print the file offset. */
//fseek(ifp, 5L, SEEK_SET);
fseek(ifp, 5L, 0);
c = fgetc(ifp);
printf("%c\n", c);  /* Print the character with offset = 5 from the beginning. */
pos = ftell(ifp);
printf("%ld\n", pos); /* Print the file offset. */
//fseek(ifp, 3L, SEEK_CUR); /* Go to the character whose offset is 3 plus   */
fseek(ifp, 3L, 1);
c = fgetc(ifp);           /* the current offset, read that character and  */
printf("%c\n", c);        /* print it.                                    */
pos = ftell(ifp); 
printf("%ld\n", pos);  /* Also print offset. */
//fseek(ifp, -4L, SEEK_CUR); /* Go to the character whose offset is 4 less */
fseek(ifp, -4L, 1);
c = fgetc(ifp);            /* than the current position, read that       */
printf("%c\n", c);         /* character and print it.                    */
pos = ftell(ifp); 
printf("%ld\n", pos);
//fseek(ifp, -2L, SEEK_END); /* Go to the character whose offset is 2 less */
fseek(ifp, -2L, 2);
c = fgetc(ifp);            /* than the end of file, read that            */
printf("%c\n", c);         /* character and print it.                    */
pos = ftell(ifp); printf("%ld\n", pos);
//fseek(ifp, -5L, SEEK_END); /* Go to the character whose offset is 5 less */
fseek(ifp, -5L, 2);
c = fgetc(ifp);            /* than the end of file, read that            */
printf("%c\n", c);         /* character and print it.                    */
pos = ftell(ifp); printf("%ld\n", pos);
/* Get to the beginning of the file. */
rewind(ifp);
c = fgetc(ifp);            /* Read the character at offset = 0  */
printf("%c\n", c);         /* and print it.             */
pos = ftell(ifp);
printf("%ld\n", pos);
fclose(ifp);
return 0;
} /* End of main. */

/*
Output

0
a
1
f
6
j
10
g
7
o
15
l
12
a
1
*/
