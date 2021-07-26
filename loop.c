                ///=======> Loop statement 
/*
#include <stdio.h>
int main()
{
   int i;
   for (i=1; i<=3; i++)
   {
       printf("%d\n", i);
   }
   return 0;
}
  */           
                

/*              
#include <stdio.h>
int main()
{
int i;
for(i=0; i<10; i++)
{
printf("%d ",i);
}
return 0;
}
*/

// Program to Print English Alphabets

/*
#include <stdio.h>
int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}
*/
/*
#include<stdio.h>
int print (int number);
int main()
{
    int num = 1;
    print(num);
    return 0;
}
int print (int number)
{
    if(number <= 100)
    {
       printf("%d\t", number);
       print(number + 1); // Calling Function recursively
    }
}

*/

/*C program to print table of numbers from 1 to 20*/
 


// #include <stdio.h>
 
// int main()
// {
//     int i,j;    /*Here, we will use i for outer loop counter
//                   and j for inner loop counter*/
//     int num;
  
//     for(i=1; i<=20; i++) /*to print table 1 to 20*/
//     {
//         /*each number has 10 multiples*/
//         num= i;     /*to initialize number with i ( 1 to 20)*/
//         for(j=1; j<=10; j++)
//         {
//              /*values will be padded with 3 spaces*/
//             printf("%3d\t",(num*j));
//         }
  
//         printf("\n"); /*after printing table of each number*/
//     }
//     return 0;
// }





/*
#include <stdio.h>
int main()
{
int a = 1;
for(;;)
{
printf("%d ", a++);
}
return 0;
}
*/

/*
#include <stdio.h>
int main()
{
int a;
for(a = 1;a <= 5;a++)
{
printf("%d ",a);
}
return 0;
}
*/


//   Example 1: for loop

// Print numbers from 1 to 10
/*
#include <stdio.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}
*/


// C program to illustrate for loop 
/*
#include <stdio.h> 
  
int main() 
{ 
    int i=0; 
      
    for (i = 1; i <= 10; i++) 
    { 
        printf( "Hello World\n");     
    } 
  
    return 0; 
} 
*/

/*C program - nested for loop
The following example program will clearly explain the concept of nested for loop
*/
/*
#include <stdio.h>
int main()
{
int a, b;
for(a = 1; a <= 5; a++)
{
for(b = 1; b <= 5; b++)
{
printf("%d ", b);
}
printf("\n");
}
return 0;
}
*/
/*Nested For Loop in C Programming
In the example we will show you, How to nest one for loop inside another for loop, also called as nested for loop in C  programming.
*/

/* Nested For Loop in C Programming example */
/*
#include <stdio.h>

int main()
{
 int i, j;

 for (i=9; i<=10; i++)
  {
   for (j=1; j<=10; j++)
    {
      printf("%d * %d = %d\n",i ,j, i*j);
    }
  }
 return 0;
}

*/


// Print ASCII Value of Alphabet from A to Z 
/*
#include<stdio.h>
int main()
{
  for(char ch='A'; ch<='Z';ch++)
  {
    printf("%c=%d \n",ch,ch);
  }
}
*/

// print ABC.....Z using ASCII

 /*
#include<stdio.h>
int main()
{
	for(int i=65;i<=90;i++)
	{
		printf("%c ",i);
    }
}
*/

// Print ABC...Z USING ASCII value
/*
#include<stdio.h>
int main()
{
	for(int i=97;i<=122;i++)
	{
		printf("%c ",i);
    }
}
*/

/*
#include<stdio.h>
int main()
{
printf("Even number b/w 1 and 20 is given below\n");
 for(int i=3;i<=30;i=i+3)
 {
 	printf("%d ",i);
 }
}
*/




 /* While Loop in C Programming example */
/*
#include <stdio.h >

int main()
{
  int number, total=0;

  printf("\n Please Enter any integer below 10 \n ");
  scanf("%d", &number);

  while (number <= 10)
   {
     total = total+number;
     number++;
   }

  printf("\n Value of Total From the While  Loop is: %d \n", total); 
  return 0;
}

*/
//  Infinite While Loop in C Programming  :-

/* Infinite While Loop in C Programming example */
 /*
#include<stdio.h> 

int main()
{
  int x = 1;

  while (x < 10)
   {
     printf("Value From the While  Loop is: %d\n", x);    

   }
 return 0;
}
*/

/* While Loop in C Programming example */

/*
#include<stdio.h> 

int main()
{
  int x = 1;

  while (x < 10)
   {
     printf(" Value From the While  Loop is: %d \n ", x); 
     x++;   
   }
  return 0;
}

*/


//Example of the while loop in C language
//Let's see the simple program of while loop that prints table of 1.
/*
#include<stdio.h>  
int main(){    
int i=1;      
while(i<=10){      
printf("%d \n",i);      
i++;      
}  
return 0;  
}    
*/

//Program to print table for the given number using while loop in C
/*
#include<stdio.h>  
int main()
{    
int i=1,number=0,b=9;    
printf("Enter a number: ");    
scanf("%d",&number);   

while(i<=10){    
printf("%d \n",(number*i));    
i++;    
}    
return 0;  
}   
*/

//   Do while loop 

/*
#include <stdio.h>
 
int main () {

//    /* local variable definition */
//    int a = 10;

//    /* do loop execution */
//    do {
//       printf("value of a: %d\n", a);
//       a = a + 1;
//    }while( a < 20 );
 
//    return 0;
// }
// */

//The following loop program in C illustrates the working of a do-while loop:

//Below is a do-while loop in C example to print a table of number 2:
/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=1;	//initializing the variable
	do	//do-while loop 
	{
		printf("%d\n",2*num);
		num++;		//incrementing operation
	}while(num<=10);
	return 0;
}
*/
// Nested For Loop in C Programming
// In the example we will show you, How to nest one for loop inside another for loop, also called as nested for loop in C  programming.


/* Nested For Loop in C Programming example */
/*
#include <stdio.h>

int main()
{
 int i, j;

 for (i=9; i<=10; i++)
  {
   for (j=1; j<=10; j++)
    {
      printf("%d * %d = %d\n",i ,j, i*j);
    }
  }
 return 0;
}
*/
