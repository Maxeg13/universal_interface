#include <stdio.h>

int main( void ) {



    char c;
    int cnt=0;
    while(1)
    {
        scanf( "%c",&c);
        if(c=='\n')break;
        cnt++;
    }

    float* a;
    a=new float[cnt];

    for (int i=0; i<cnt;i++)
        scanf( "%f", &a[i]  );

    printf( "%4.2f + %4.2f = %4.2f", a[0], a[1], ( a[0]+a[1] ) );
    return 0;
}
