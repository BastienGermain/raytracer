#ifndef COLORS_H
#define COLORS_H

typedef struct color3f {
	float r, g, b;
} Color3f;

/* Calcule la somme, soustraction et mutliplication de deux couleur */
Color3f addColors(Color3f c1, Color3f c2);
Color3f subColors(Color3f c1, Color3f c2);
Color3f multColors(Color3f c1, Color3f c2);

/* Multiplication et division d'une couleur par un scalaire */
Color3f multColor(Color3f c, float a);
Color3f divColor(Color3f c, float a);

#endif