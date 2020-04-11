// C program to demonstrate the difference 
// between %i and %d specifier 
#include <stdio.h> 

int main(){ 
	  int a, b, c; 
    
    //Using %i in scanf:
	  printf("Enter value of a in decimal format:"); 
	  scanf("%i", &a); 

	  printf("Enter value of b in octal format: "); 
	  scanf("%i", &b); 

	  printf("Enter value of c in hexadecimal format: "); 
	  scanf("%i", &c); 

	  printf("a = %i, b = %i, c = %i\n", a, b, c); 
    printf("a = %d, b = %o, c = %x\n", a, b, c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    
    
    //Using %d in scanf:
    printf("Enter value of a in decimal format:"); 
	  scanf("%d", &a); 

	  printf("Enter value of b in octal format: "); 
	  scanf("%d", &b); 

	  printf("Enter value of c in hexadecimal format: "); 
	  scanf("%d", &c); 

	  printf("a = %i, b = %i, c = %i\n", a, b, c); 
    printf("a = %d, b = %o, c = %x\n", a, b, c);
    printf("a = %d, b = %d, c = %d", a, b, c);
	  return 0; 
} 
