#include <iostream>
using namespace std;

int main() {

	int touchDown, field_goal, safety, pointAfter_touchDown, two_point_conversion;

	int score[2];

	for (int i = 0; i < 2; i++) {
		cin >> touchDown >> field_goal >> safety >> pointAfter_touchDown >> two_point_conversion;
		score[i] = 6 * touchDown + 3 * field_goal + 2 * safety + pointAfter_touchDown + 2 * two_point_conversion;
	}

	for (int i = 0; i < 2; i++) {
		cout << score[i] << " ";
	}

}