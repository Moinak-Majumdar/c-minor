#include<stdio.h>

int main () {
    // char *s1;
    // char far *s2;
    // char huge *s3;
    // printf("%d %d %d",sizeof(s1), sizeof(s2), sizeof(s3));

    extern int fun(float);
    int a;
    a = fun(3.14);
    printf("%d",a);
    
    return 0;
}
int fun(int aa){
    return (int)++aa;
}

