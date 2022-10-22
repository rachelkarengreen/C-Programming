/*

Write a program to print mirrored half diamond star pattern

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    for(i=1;i<=(2*n)-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }else if(i>n)
        {
            for(j=1;j<=i-n;j++)
            {
                printf(" ");
            }
            for(j=1;j<=2*n-i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}