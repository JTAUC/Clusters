#include "Header.h"

int main() 
{
	srand(time(0));

	int n1 = 200, n2 = 200, m = 20;
	float min_a = 70.0, max_a = 90.0;
	float min_b = 20.0, max_b = 40.0;
	float min_m = 5.0, max_m = 100.0;

	point* A = new point[n1];
	point* B = new point[n2];

	for (int i = 0; i < n1; i++) {
		(A + i)->SetX(min_a + static_cast<float>(rand()) * static_cast<float>(max_a - min_a) / RAND_MAX);
		(A + i)->SetY(min_a + static_cast<float>(rand()) * static_cast<float>(max_a - min_a) / RAND_MAX);
	}
	for (int i = 0; i < n2; i++) {
		(B + i)->SetX(min_b + static_cast<float>(rand()) * static_cast<float>(max_b - min_b) / RAND_MAX);
		(B + i)->SetY(min_b + static_cast<float>(rand()) * static_cast<float>(max_b - min_b) / RAND_MAX);
	}
	for (int i = 0; i < m; i++) {
		point p;
		p.SetX(min_m + static_cast<float>(rand()) * static_cast<float>(max_m - min_m) / RAND_MAX);
		p.SetY(min_m + static_cast<float>(rand()) * static_cast<float>(max_m - min_m) / RAND_MAX);

		cout << i + 1 << ": ";
		ClosestCluster(A, n1, B, n2, p);
	}
	
	delete [] A;
	delete [] B;
}
