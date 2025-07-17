#include <vector>

using namespace std;

//this function vector<int> appends one vector after another an returns the result

vector<int> append(vector<int> a, vector<int> b) {
	a.insert(a.end(), b.begin(), b.end());
	return a;
}