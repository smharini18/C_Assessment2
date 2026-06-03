#include <stdio.h>
int main() {
    int x,y,z,a,b,c,d,e;
    printf("enter a 4 digit number:");
    scanf("%d",&x);
    y=x%10;
    z=(x/10)%10;
    a=(x/100)%10;
    b=(x/1000);
    c=(z*10)+y;
    d=(b*10)+a;
    e=(c==d);
    printf("%d",e);
    return 0;
}
