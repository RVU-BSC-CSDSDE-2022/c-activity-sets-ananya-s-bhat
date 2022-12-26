#include <stdio.h>
struct triangle
{
    float base;
    float height;
    float area;
};
typedef struct triangle Triangle;

int main()
{
    Triangle t;
    scanf("%f", &t.base);
    scanf("%d", &t.height);
    return 0;
  }
