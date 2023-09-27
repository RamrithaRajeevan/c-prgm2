#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[2][3]={{20,4,6},{2,4,5}},sum=0;
float avg;
int total=2*3;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
    {
        sum+=a[i][j];

    }
    avg=sum/total;
     printf("sum:%d\n",sum);
     printf("avg:%f\n",avg);

    return 0;

}

