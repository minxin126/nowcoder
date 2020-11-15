#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
//definition for a point.
struct Point {// we also can regonise as one class.in c we can use struct as class.
	int x;
	int y;
	Point() : x(0), y(0) {}//make function to initialize
	Point(int a, int b) : x(a), y(b) {}//i do not know this function is what.
};

class Solution {
public:
	int max(int a, int b) {//we make max func
		return a > b ? a : b;
	}
	int maxPoints(vector<Point> &points) {
		int size = points.size();
		if (size <= 2) return size;//it clear

		int res = 0;
		for (int i = 0; i < size; i++) {
			int repeat = 1;//first one
			map<float, int> temp;//we use map in this place.
			for (int j = i + 1; j < size; j++) {
				if (points[i].x == points[j].x) {
					if (points[i].y == points[j].y) {
						repeat++;
					}
					else {
						temp[INT_MAX]++;
					}
				}
				else {
					float k = (points[i].y - points[j].y)* 1.0 / (points[i].x - points[j].x);
					temp[k]++;
				}
			}
			res = max(res, repeat);
			for (auto it = temp.begin(); it != temp.end(); it++)
				res = max(res, it->second + repeat);
		}
		return res;
	}
};
int main()
{
	//how to make me quickly to exercise myself.tomorrow i want to write somecode everyday.i think this is a good place.
	//how to use data into the vector container.
	Solution solution;

	Point myPon;
	myPon.x = 1;
	myPon.y = 2;

	Point myPon1;
	myPon1.x = 2;
	myPon1.y = 4;

	Point myPon2;
	myPon2.x = 3;
	myPon2.y = 6;

	Point myPonall;
	for (int i = 0; i < 10; i++)
	{
		/*myponall[i].x = i;
		myponall[i].y = i;*/
	}

	//some information i like to finish the work.althought i am slow than others,but i like it.and i think it is good to finish the task.it is important how i feel and like.not just compare with others.
	//the feeling is diffent.

	vector<Point> points;
	for (int i = 0; i < 10; i++)
	{
		points[0].x = i;
		points[0].y = i;
	}
	/*points.push_back(myPon);
	points.push_back(myPon1);
	points.push_back(myPon2);*/

	/*for (auto pos = map.begin(); pos != map.end(); map++)
	{
		points.push_back(pos);
	}*/
	cout << "the result is:";
	cout << solution.maxPoints(points) << endl;

	return 0;
}