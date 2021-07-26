//      Some coding examples of escape characters


//  1 .C program to illustrate 
//  \a escape sequence 


#include <stdio.h> 
int main(void) 
{ 
    printf("My mobile number "
          "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a"); 
    return (0); 
} 


/*2. C program to illustrate 
\b escape sequence */
#include <stdio.h> 
int main(void) 
{ 
    //    \b - backspace character transfers 
    // the cursor one character back with  
    // or without deleting on different  
    // compilers. 
    printf("Hello Geeks\b\b\b\friend"); 
    return (0); 
} 


// 3.C program to illustrate 
//     \n escape sequence 
#include <stdio.h> 
int main(void) 
{ 
    // Here we are using \n, which 
    // is a new line character. 
    printf("Hello\n"); 
    printf("GeeksforGeeks"); 
    return (0); 
} 



// 4.  C program to illustrate 
//     \t escape sequence 
#include <stdio.h> 
int
main(void) 
{ 
    // Here we are using \t, which is 
    // a horizontal tab character. 
    // It will provide a tab space  
    // between two words. 
    printf("Hello \t GFG"); 
    return (0); 
} 


// 5 .C program to illustrate \' escape 
// sequence/ and \" escape sequence to 
// print single quote and double quote. 
#include <stdio.h> 
int main(void) 
{ 
    printf("\' Hello Geeks\n"); 
    printf("\" Hello Geeks"); 
    return 0; 
} 

//  6  program 

#include<stdio.h>    
int main(){    
     int number=50;  
    printf("You\nare\nlearning\n\'c\' language\n\"Do you know C language\"");     
return 0;  
}     


 
