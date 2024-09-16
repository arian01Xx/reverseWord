#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SolutionFour{
public:
	string reverseWords(string s){
		int i=0, n=s.size();
		while(i<n){
			int j=i;
			while(j<n && s[j]!=' ') j++;
			int p=i, q=j-1;
			while(p<=q){
				swap(s[p++],s[q--]);
			}
			i=j+1;
		}
		return s;
	}
};

int main(){
	cout<<"cleaning code!"<<endl;
	return 0;
}