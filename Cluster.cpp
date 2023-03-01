#include "Header.h"

point Center(point *C, int n) {
	float x_total = 0, y_total = 0;
	point c;

	for (int i = 0; i < n; i++) {
		x_total += C[i].GetX();
		y_total += C[i].GetY();
	}

	c.SetX(x_total / n);
	c.SetY(y_total / n);

	return c;
}

void ClosestCluster(point *c1, int c1_size, point *c2, int c2_size, point p) {
	float p_to_c1, p_to_c2;
	p_to_c1 = p.distance(Center(c1, c1_size));
	p_to_c2 = p.distance(Center(c2, c2_size));

	if (p_to_c1 < p_to_c2)
		cout << "The point is closer to cluster A" << endl;
	else
		cout << "The point is closer to cluster B" << endl;
	//cout << p_to_c1 << " , " << p_to_c2 << endl;
}