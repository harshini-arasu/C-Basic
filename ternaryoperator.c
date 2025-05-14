#include <stdio.h>
int main(){

int x;
scanf("%d",&x);
//odd or even
printf("%d",(x%2==0)?0:1);
return 0;
}


#include <stdio.h>
int main(){
int x;
scanf("%d",&x);
//odd or even
printf("%d",(x>=35)?"you're pass":"you're fail");
return 0;
}