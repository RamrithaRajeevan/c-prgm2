#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n,i,count=0;
    printf("Enter the value:\n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
    {
        count++;
    }
    }
    if(count==2){
        printf("its a prime no");
    }
    else{
        printf("its not a prime no");
    }

    return 0;
}
