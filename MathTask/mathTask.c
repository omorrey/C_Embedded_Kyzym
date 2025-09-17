#include <stdio.h>
#include <math.h> 

int main() {
    double d, alpha;
    double z1, z2;

    // для прикладу задамо значення:
    d = 0.5;
    alpha = 0.3;
	
    z1 = sin(M_PI / 2.0 + 3.0 * d) / (1.0 - sin(3.0 * alpha - M_PI));


    z2 = 1.0 / tan (5.0 / 4.0 * M_PI + 1.5 * alpha);    //(ctg = 1 / tan)

    printf("z1 = %f\n", z1);
    printf("z2 = %f\n", z2);

    return 0;
}
