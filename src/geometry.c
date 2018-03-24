#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "geometry.h"

Point3D pointXYZ(float x, float y, float z) {
	Point3D point;

	point.x = x;
	point.y = y;
	point.z = z;

	return point;
}

Vector3D vectorXYZ(float x, float y, float z) {
	Vector3D vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;

	return vector;
}

Vector3D vector(Point3D A, Point3D B) {
	Vector3D vector;

	vector.x = B.x - A.x;
	vector.y = B.y - A.y;
	vector.z = B.z - A.z;

	return vector;
}

Point3D pointPlusVector(Point3D P, Vector3D V) {
	Point3D point;

	point.x = P.x + V.x;
	point.y = P.y + V.y;
	point.z = P.z + V.z;

	return point;
}

Vector3D addVectors(Vector3D A, Vector3D B) {
	Vector3D vector;

	vector.x = A.x + B.x;
	vector.y = A.y + B.y;
	vector.z = A.z + B.z;

	return vector;
}

Vector3D subVectors(Vector3D A, Vector3D B) {
	Vector3D vector;

	vector.x = A.x - B.x;
	vector.y = A.y - B.y;
	vector.z = A.z - B.z;

	return vector;
}

Vector3D multVector(Vector3D V, float a) {
	Vector3D vector;

	vector.x = a * V.x;
	vector.y = a * V.y;
	vector.z = a * V.z;

	return vector;
}

Vector3D divVector(Vector3D V, float a) {

	Vector3D vector;

	vector.x = V.x / a;
	vector.y = V.y / a;
	vector.z = V.z / a;

	return vector;
}

float dot(Vector3D A, Vector3D B) {
	float retour;

	retour = A.x*B.x + A.y*B.y + A.z*B.z;

	return retour;
}

float norm(Vector3D A) {
	float retour;

	retour = sqrt(dot(A, A));

	return retour;
}

Vector3D normalize(Vector3D A) {
	Vector3D vector;

	vector = divVector(A, norm(A));

	return vector;
}

void printVector3D(Vector3D v) {
	printf("(%f, %f, %f)\n", v.x, v.y, v.z);
}

void printPoint3D(Point3D p) {
	printf("(%f, %f, %f)\n", p.x, p.y, p.z);
}




