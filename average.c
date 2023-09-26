#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,i,num,sum=0;
    float avg;
    printf("Enter the values:\n ");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=1;i<=n;i++){

        scanf("%d",&num);
        sum=sum+num;
    }
    avg=sum/n;
    printf("sum : %d\n",sum);
    printf("avg : %f\n",avg);
    return 0;

}
