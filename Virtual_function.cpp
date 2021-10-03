#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<stack>
#include<bitset>
#include<string>
#include<queue>
#include<set>
#include<cstring>
#include<map>
#include<math.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
using namespace std;



class Animal {
public:
	// virtual void eat() { std::cout << "I'm eating generic food."; } //uncomment to see the magic
	void eat() { std::cout << "I'm eating generic food."; }
};

class Cat : public Animal {

public:
	void eat() { std::cout << "I'm eating a rat."; }
};

void func(Animal *xyz) { xyz->eat(); }

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Animal *animal = new Animal;
	Cat *cat = new Cat;


	func(animal);
	func(cat);
	return 0;
}
