#include <stdlib.h>
#include <stdio.h>

#include "colors.h"

Color3f addColors(Color3f c1, Color3f c2) {
	Color3f color;

	color.r = c1.r + c2.r;
	if (color.r > 1.0) {
		color.r = 1.0;
	}

	color.g = c1.g + c2.g;
	if (color.g > 1.0) {
		color.g = 1.0;
	}

	color.b = c1.b + c2.b;
	if (color.b > 1.0) {
		color.b = 1.0;
	}
}

Color3f subColors(Color3f c1, Color3f c2) {
	Color3f color;

	color.r = c1.r - c2.r;
	if (color.r < 0.0) {
		color.r = 0.0;
	}

	color.g = c1.g - c2.g;
	if (color.g < 0.0) {
		color.g = 0.0;
	}

	color.b = c1.b - c2.b;
	if (color.b < 0.0) {
		color.b = 0.0;
	}
}

Color3f mutlColors(Color3f c1, Color3f c2) {
	Color3f color;

	color.r = c1.r * c2.r;
	if (color.r > 1.0) {
		color.r = 1.0;
	}

	color.g = c1.g * c2.g;
	if (color.g > 1.0) {
		color.g = 1.0;
	}

	color.b = c1.b * c2.b;
	if (color.b > 1.0) {
		color.b = 1.0;
	}
}

Color3f multColor(Color3f c, float a) {
	Color3f color;

	color.r = c.r * a;
	if (color.r > 1.0) {
		color.r = 1.0;
	}

	color.g = c.g * a;
	if (color.g > 1.0) {
		color.g = 1.0;
	}

	color.b = c.b * a;
	if (color.b > 1.0) {
		color.b = 1.0;
	}
}

Color3f divColor(Color3f c, float a) {
	Color3f color;

	color.r = c.r / a;
	if (color.r > 1.0) {
		color.r = 1.0;
	}

	color.g = c.g / a;
	if (color.g > 1.0) {
		color.g = 1.0;
	}

	color.b = c.b / a;
	if (color.b > 1.0) {
		color.b = 1.0;
	}
}