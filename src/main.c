#include <stdlib.h>
#include <stdio.h>

#include "geometry.h"

int main(int argc, char** argv) {

	Point3D A = pointXYZ(1, 2, 3);
	Point3D B = pointXYZ(0, 1, 0);

	Vector3D V = vector(A, B);

	printf("%f\n",dot(A, B));

	printf("%f\n",norm(A));

	printf("%f\n",norm(normalize(A)));

	return EXIT_SUCCESS;
}