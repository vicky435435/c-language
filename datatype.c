//   DATA TYPE IN C PROGRAM  

//------------>   Program to Find the Size of data <--------------------------

// The sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof,
// we use either %lu or %zu format specifier.




 
// ------->  1 

/*

#include <stdio.h>
#include <limits.h>
int main()
{
   int a;
   char b;
   float c;
   double d;
   printf("Storage size for int data type:%d \n",sizeof(a));
   printf("Storage size for char data type:%d \n",sizeof(b));
   printf("Storage size for float data type:%d \n",sizeof(c));
   printf("Storage size for double data type:%d\n",sizeof(d));
   return 0;
}

*/


//-----> 2

/*
#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Storage size for int is: %d \n", sizeof(int));
    printf("Storage size for char is: %d \n", sizeof(char));
    return 0; 
}
*/

//-----> 3

/*
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}



//----> 4


#include<stdio.h>
int main()
{
    printf("Size of char: %ld byte\n",sizeof(char));
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes", sizeof(double));
    return 0;
}


//----> 5 



#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}


//-------> 6


#include <stdio.h>
int main() {
   // datatypes
   int a = 10;
   char b = 'S';
   float c = 2.88;
   double d = 28.888;
   printf("Integer datatype : %d\n",a);
   printf("Character datatype : %c\n",b);
   printf("Float datatype : %f\n",c);
   printf("Double Float datatype : %lf\n",d);
   return 0;
}

*/

//=============================================         Integer DATA Type Program         ================================================================


/*


//   1 Program 

#include <stdio.h>
void main() {
    //int age;   
    //age = 200;

    int age = 20;
    printf("%d \n",age);
 }


// 2 simple one line program 

#include <stdio.h>
int main()
{
    int testInteger = 5;
    printf("Number = %d", testInteger);
    return 0;
}




//   3. scanf function program 


#include <stdio.h>
int main()
{
int test1;
printf("Enter an integer: ");
scanf("%d", &test1);
printf("Number = %d",test1);
 return 0;
}


//  4 .   scanf function usting stroring data program 

#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return 0;
}

//  5 program

#include <stdio.h>
int main()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    return 0;
}
*/

// /*====================================================================================================================== */


/*

//      6       using scanf function addtion program -->



#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, sum);
    return 0;
}


//  7 program                                  ========================================================================================================

#include<stdio.h>    
int main(){    
int x=0,y=0,result=0;  
  
printf("enter first number:");  
scanf("%d",&x);  
printf("enter second number:");  
scanf("%d",&y);  
  
result=x+y;  
printf("sum of 2 numbers:%d ",result);  
  
return 0;  
}


// //========================================================================================================


//  8     int Variable Declaration and Variable Initialization in addition program :-

#include <stdio.h>
  void main() {
    int number1 = 22;
    int number2 = 23;
    int c;
    c = number1 + number2 ;
    printf("Sum of above two Number : %d \n",c);
 }  



//   9   Program to cube root  integer numbers using scanf function program

#include<stdio.h>    
int main(){    
int number;    
printf("enter a number:");    
scanf("%d",&number);    
printf("cube of number is:-  ''   %d ",number*number*number);    
return 0;  
}


//  10    ----  suqre root program 

#include<stdio.h>    
int main(){    
int number;    
printf("enter a number:");    
scanf("%d",&number);    
printf("cube of number is:-  ''   %d ",number*number);    
return 0;  
}


//=============================================================================================================================================



//  11    C program for the above approach


#include <math.h>
#include <stdio.h>
 
// Function to find the square-root of N
double findSQRT(double N) { return sqrt(N); }  
 
// Driver Code
int main()
{
 
    // Given number
    int N = 12;
 
    // Function call
    printf("%f ", findSQRT(N));
    return 0;
}


// 
//  * C program to find square root of a number   
//  * Example: C sqrt() Function
//   12   



#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

    /* Input a number from user */
  //  printf("Enter any number to find square root: ");
  //  scanf("%lf", &num);

    /* Calculate square root of num */
   // root = sqrt(num);

    /* Print the resultant value */
  //  printf("Square root of %.2lf = %.2lf", num, root);

  //  return 0;
//}



/*
// 13   Program to find square root of any number


#include <math.h>
#include <stdio.h>

int main() {
   double number, squareRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);

   return 0;
}



// /* User defined function sum that has two int
//  * parameters. The function adds these numbers and
//  * return the result of addition.
//  *  14     


#include <stdio.h>                                                       
int sum(int a, int b){
   return a+b;
}
int main()
{
   int num1, num2, num3;
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   //Calling the function
   num3 = sum(num1, num2);
   printf("Sum of the entered numbers: %d", num3);
   return 0;
}
*/



//---------------------------  THE Floting point data type program  ---------------------------------------------------------


// 1. The floting point two line program

/*
#include<stdio.h>
  
void main() {
    float pi;
    pi = 3.14;
    printf("%f\n",pi);
 } 
*/


// 2. The floting point one line program

/*
 #include<stdio.h> 
 void main() {
    float pi = 3.14;
    printf("%f\n",pi);
 } 

 */



/*  3. The floting point program 

#include<stdio.h>
  
void main(){
// this is declaration and initialization of variable a
	  // datatype is float
	  float a = 234.5 ;
	  // this is declaration and initialization of variable b
	  // datatype is float
      float b = 234.565 ;
      printf("%f \n",a); // it will print a variable
      printf("%f \n",b); // it will print b variable
 } 


*/

//   4 .   C Program to Multiply Two Floating-Point Numbers


/*
#include <stdio.h>
int main() {
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
 
    // Calculating product
    product = a * b;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.3lf", product);
    
    return 0;
}

*/


//Example 5: Program to display the product of two float numbers
//Program to multiply two floating point numbers and display the product as output.
/*

#include <stdio.h>
int main(){
   float num1, num2, product;
   printf("Enter first Number: ");
   scanf("%f", &num1);
   printf("Enter second Number: ");
   scanf("%f", &num2);

   //Multiply num1 and num2
   product = num1 * num2;

   // Displaying result up to 3 decimal places. 
   printf("Product of entered numbers is:%.3f", product);
   return 0;
}
*/



//Example 6: Program to multiply two numbers using function
//In this program we are creating a user defined function product() that multiplies the numbers that we are passing to it during function call. This function returns the product of these numbers. To understand this program you should have the knowledge of following C Programming concepts:


//#include <stdio.h>
/* Creating a user defined function product that
 * multiplies the numbers that are passed as an argument
 * to this function. It returns the product of these numbers
 */

/*
float product(float a, float b){
    return a*b;
}
int main()
{
    float num1, num2, prod;
    printf("Enter first Number: ");
    scanf("%f", &num1);
    printf("Enter second Number: ");
    scanf("%f", &num2);

    // Calling product function
    prod  = product(num1, num2);

    // Displaying result up to 3 decimal places.
    printf("Product of entered numbers is:%.3f", prod);

    return 0;
}

*/


//---------------------------->  Char Data type  -----------------------------------


// 1. char Variable Declaration and Variable Initialization  Program :

/*
#include <stdio.h>
void main() {

   char flag; 
   flag = 'a' ;
   printf("%c \n",flag); 
 }


// 2. char Variable Declaration and Initialization in single step Program:

#include <stdio.h>  
void main() {
	
    char flag = 'a' ; 
    printf("  %c \n",flag); 
 }


// 3. A program that demonstrates char variable Program:-

#include  <stdio.h>
void main() {
    char character1, character2;
 	character1 = 82; // code for R
    character2 = 'S';
    printf("character1 and character2: \n"); 
    printf("%c \n",character1);
	printf("%c \n",character2); 
 } 

*/