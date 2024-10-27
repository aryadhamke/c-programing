#include <stdio.h>
int main() {
    int a=35; // 00100011 in binary
    int b=40; // 00101000 in binary
    int result=a&b; //0100 in binary
    printf("%d&%d=%d\n",a,b,result);
    return 0;
}
    