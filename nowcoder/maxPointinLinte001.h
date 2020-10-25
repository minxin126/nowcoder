#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

struct Point {
	int x;
	int y;
};

class Solution {
public:
	/**
	 *
	 * @param points Point¿‡vector
	 * @return int’˚–Õ
	 */
	int maxPoints(vector<Point>& points) {
		// write code
		int N = points.size();
		if (N < 3) return N;
		int i = 0, j, k;
		vector<int> a;
		a.push_back(1);

		while (i != N - 1) {
			bool flag = true;
			for (j = i + 1; j < N; j++) {
				if (points[i].x == points[j].x&&points[i].y == points[j].y) {
					points[j] = points[N - 1];
					a[i] += 1;
					N = N - 1;
					flag = false;
					break;
				}
			}
			if (flag) {
				i += 1;
				a.push_back(1);
			}
		}
		if (N == 1)  return a[0];
		int max = 0, s;
		for (i = 0; i < N; i++)
		{
			for (j = i + 1; j < N; j++)
			{
				s = a[i] + a[j];
				for (k = j + 1; k < N; k++)
				{
					if ((points[i].y - points[j].y)*(points[k].x - points[j].x) == (points[i].x - points[j].x)*(points[k].y - points[j].y))
					{
						s += a[k];
					}
				}
				if (s > max) max = s;
			}
		}
		return max;
	}
};