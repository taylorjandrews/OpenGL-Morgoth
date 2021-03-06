/*
 * Taylor Andrews
 * Header file for smaller figure.
 */

#ifndef FIN_H
#define FIN_H
 
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>

#define GL_GLEXT_PROTOTYPES // OpenGL with prototypes for glext
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#define Cos(th) cos(3.1415926/180*(th))
#define Sin(th) sin(3.1415926/180*(th))
#define PI 3.141592

/* Global Variables */
extern unsigned int textures[10]; // Textures for fighter

/* Draw the Scene */
void drawFin(double x, double y, double z, double dx, double dy, double dz, double t);

/* Body Parts */
// Head
void drawFinHelmet(double t);
void drawFinHelmetGrate(double x, double y, double z, double dx, double dy, double dz, double amount, double th, int tex);
void drawFinNeck();
// Body
void drawFinTorso();
void drawFinSkirt(double x, double y, double z, double dx, double dy, double dz, double amount, double pinch_factor, double th, int tex);
// Weapon
void drawFinSword();
void drawFinBlade(double x, double y, double z, int tex);
void drawFinBladeTip(double x, double y, double z, int tex);
// Hands
void drawFinLeftHand();
void drawFinRightHand();
void drawFinFinger(double x, double y, double z, double dx, double dy, double dz, double th, double xtilt, double ztilt, int tex);
void drawFinLeftThumb(double x, double y, double z, double dx, double dy, double dz, double th, double xtilt, double ztilt, int tex);
void drawFinRightThumb(double x, double y, double z, double dx, double dy, double dz, double th, double xtilt, double ztilt, int tex);
// Arms
void drawFinRightArm();
void drawFinLeftArm();
//Legs 
void drawFinLeftLeg(double t);
void drawFinRightLeg();

/* Shapes and Objects */
void drawFinCylinderTube(double x, double y, double z, double dx, double dy, double dz, double amount, 
	                     double th, double xtilt, double ztilt, int tex);
void drawFinPinchedTube(double x, double y, double z, double dx, double dy, double dz, double amount, double pinch_factor, double th, int tex);
void drawFinCappedCylinder(double x, double y, double z, double dx, double dy, double dz, double amount, 
						   double th, double xtilt, double ztilt, int tex, int end); 
void drawFinCylinderCap(double x, double y, double z, double dx, double dy, double dz, double th, int tex);
void drawFinPointedCylinder(double x, double y, double z, double dx, double dy, double dz, double th, double amount, int tex, int dir);
void drawFinCone(double x, double y, double z, double dx, double dy, double dz, double th, int tex);
void finVertex(double th, double ph, int tex);
void finHalfBall(double x, double y, double z, double r, double tilt, int axis, int tex);
void finBall(double x, double y, double z, double r, double tilt, int axis, int tex);

#endif