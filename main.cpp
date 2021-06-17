#include <iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	
	vector<int> twoSum(vector<int>& num, int target) {
		map<int, int> m;
		vector<int> v;
		
		for (int i = 0; i < num.size(); i++) {
			if (m.find(target - num[i]) != m.end()) {
				v.push_back(m[target - num[i]]);
				v.push_back(i);
				return v;
			}
			m[num[i]] = i;
		}

		return v;
	}
	


};

int main() {


	
	

	return(0);
}
