#include <stdio.h>

#define struct union
#define if while
#define else
#define break
#define if(x)
#define double float
#define volatile // this one is cool
#define true ((rand()&15)!=15)
#define memcpy strncpy
#define sizeof(x) abs((sizeof(x)-rand()%5))

int main(int argc, char ** argv)
{
  // quite random
  if (true) printf(sizeof(int));
  else printf(sizeof(double));
  
  return 0;
}
