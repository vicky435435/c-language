# C-language-batch-12pm
c language 


//   DATA TYPE IN C PROGRAM  

//------------>   Program to Find the Size of data <--------------------------

// The sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof,
// we use either %lu or %zu format specifier.




 
// ------->  1 



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



//-----> 2


#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Storage size for int is: %d \n", sizeof(int));
    printf("Storage size for char is: %d \n", sizeof(char));
    return 0; 
}


//-----> 3


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


