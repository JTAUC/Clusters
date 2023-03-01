#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



class point
{
private:
	// Data members x and y
	float x;
	float y;
public:
	// Default Constructor, sets X = Y = 0
	point() 
	{
		x = 0;
		y = 0;
	}
	// Constructor. Initializes both X and Y.
	point(float a, float b) 
	{
		x = a;
		y = b;
	}
	// Set X value
	void SetX(float a) {
		x = a;
	}
	// Set Y value
	void SetY(float a) {
		y = a;
	}
	// Get X value
	float GetX() {
		return x;
	}
	// Get Y value
	float GetY() {
		return y;
	}
	// Display point as (X , Y)
	void DisplayPoint() {
		cout << "(" << x << " , " << y << ")" << endl;
	}
	// distance between current point object and another point p
	float distance(point p) {
		return sqrt(pow((x - p.GetX()), 2) + pow((y - p.GetY()), 2));
	}

};

#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

point Center(point* C, int n);
void ClosestCluster(point* c1, int c1_size, point* c2, int c2_size, point p);

#endif