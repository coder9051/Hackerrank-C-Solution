#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m, n;
    scanf("%d %d", &m, &n);
    
    float p, q;
    scanf("%f %f", &p, &q);
    
    printf("%d %d \n", m+n, m-n);
    printf("%.1f %.1f", p+q, p-q);
    
    return 0;
}
