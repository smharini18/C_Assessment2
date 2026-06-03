#include <stdio.h>
int main() {
    int x,y,z,a;
    printf("enter a 2 digit number:");
    scanf("%d",&x);
    y=x%10;
    z=x/10;
    a=(y>z);
    printf("%d",a);
    return 0;
}
