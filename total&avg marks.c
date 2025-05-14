#include <stdio.h>
int main(){
    int tam,eng,math,sci,ss,sum,avg;
    printf("enter tam mark:");
    scanf("%d",&tam);
    printf("enter english marks:");
    scanf("%d",&eng);
    printf("enter math mark:");
    scanf("%d",&math);
    printf("enter science mark:");
    scanf("%d",&sci);
    printf("enter ss mark:");
    scanf("%d",&ss);
sum=(tam+eng+math+sci+ss);
avg=sum/5;
printf(sum);
printf(avg);
}