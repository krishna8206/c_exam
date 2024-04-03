#include <stdio.h>  

void main()  
{  
      
    int i,j,k,rows;  
    
    
    printf (" Enter a number of rows: \n ");  
    scanf("%d", &rows);   
    
    
    printf("\n");  
    
    
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); 
        }  
        printf ("\n");   
    }  
}  
