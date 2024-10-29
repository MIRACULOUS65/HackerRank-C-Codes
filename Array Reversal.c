#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,i;
    
    scanf("%d",&r);
    
    int arr[r];
    
    for (i=0; i<r; i++) 
    {
        scanf("%d",&arr[i]);
    }
    
    for (i=r-1; i>=0; i--) 
    {
        printf("%d ",arr[i]);
    }
    
}
