#include <stdio.h>
#include<conio.h>
int main()
{
   int n, i;
 
    printf("Enter a Number: ");
    scanf("%d",&n);
    i=1;
    while(i<=10){
                
        printf("%d * %d = %d \n", n, i, n*i);
		
		i++;
    }
     
    return 0;s
    
}
