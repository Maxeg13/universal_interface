#include <stdio.h>

int main( void ) {

  float* a;
  a=new float[2];

  for (int i=0; i<2;i++)
  scanf( "%f", &a[i]  );

//  scanf( "%f", &b );

  printf( "%4.2f + %4.2f = %4.2f", a[0], a[1], ( a[0]+a[1] ) );

  return 0;
}