#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,i,num,sum=0;
    printf("Enter the values:\n ");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=1;i<=n;i++){

        scanf("%d",&num);
        sum=sum+num;
    }
    printf("sum : %d",sum);
    return 0;

}

