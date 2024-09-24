#include<stdio.h>
#include<math.h>
int main ()
{
    float C ;
    printf("donné la temperature en celsius :");
    scanf("%f",&C);
    if (C<0){
        printf(" type de la temperature  solide",C);


    }
       else if (0<=C && C<100){
        printf(" type de la temperature  solide",C);

    }
    else 
    {
        printf("Gaz",C);
        
    }
     
     
    
    
    
}