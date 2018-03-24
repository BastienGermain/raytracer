#ifndef GEOMETRY_H
#define GEOMETRY_H

typedef struct vec3 {
	float x, y, z;
} Point3D, Vector3D;

Point3D pointXYZ(float x, float y, float z); // Construit point
Vector3D vectorXYZ(float x, float y, float z); // Construit vector avec 3 coord

Vector3D vector(Point3D A, Point3D B); // Construit vector avec deux points AB
Point3D pointPlusVector(Point3D P, Vector3D V); // Construit point = point + vector

Vector3D addVectors(Vector3D A, Vector3D B);
Vector3D subVectors(Vector3D A, Vector3D B);

Vector3D multVector(Vector3D V, float a);
Vector3D divVector(Vector3D V, float a);

float dot(Vector3D A, Vector3D B); // Calcule le produit scalaire de 2 vector

float norm(Vector3D A); // Calcule la norme

Vector3D normalize(Vector3D A); // Normalise un vecteur

void printVector3D(Vector3D v);
void printPoint3D(Point3D p);

#endif