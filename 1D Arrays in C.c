#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int r,i,sum=0;
    scanf("%d",&r);
    int arr[r];
    
    for (i=0; i<r; i++) 
    {
        scanf("%d",&arr[i]);
    }
    
    for (i=0; i<r; i++) 
    {
        sum=sum+arr[i];
    }
    
    printf("%d",sum);
      
    return 0;
}
