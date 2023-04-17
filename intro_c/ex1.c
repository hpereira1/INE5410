#include <stdio.h>

int main() {
typedef struct {
    float x, y;
} ponto_t;

ponto_t q = {23.0, 27.0};
ponto_t* p = &q;
printf("valores %f e %f \n", q.x,q.y);
return 0;

}