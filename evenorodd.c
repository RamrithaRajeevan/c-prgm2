#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    printf("Enter the number:\n ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even no",n);
    }
    else{
        printf("%d is odd no",n);
    }

    return 0;
}
