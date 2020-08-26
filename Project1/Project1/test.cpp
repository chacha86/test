#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	
	vector<string> participant{ "mislav", "stanko", "mislav", "ana" };
	vector<string> completion{ "stanko", "mislav", "ana" };

	map<string, int> rMap;

	for (auto s : participant) {

		if (rMap.count(s)) {
			rMap[s]--;
		}
		else {
			rMap[s] = 0;
		}
	}
	
	for (auto p : rMap) {
		cout << p.first << " : " << p.second << endl;
	}

	for (auto s : completion) {
		rMap[s]++;
	}

	for (auto p : rMap) {
		cout << p.first << " : " << p.second << endl;
	}

	//string rst = "";
	//for (auto p : rMap) {
	//	if (p.second == 0) {
	//		rst = p.first;
	//		break;
	//	}
	//}

	//cout << rst << endl;

		
	return 0;
}

