#include <stdio.h>
#include "CZzang.h"
#include <iostream>
class A {
private:
	int a = 1;

public:
	void setA(const int& a2){
		this->a = a2;
	}
};

class C {

private:
	int a_ = 2;
	A b_;
public:
	void setA(const int& a) {
		this->a_ = a;
	}
	const int& getA() const {
		return this->a_;
	}
	
	const A& getB() {
		return this->b_;
	}

};



int main(int argc, char * argv[]) {
	C *c = new C();
	int test = 0;
	c->setA(test);
		
	A a= c->getB();
	a.setA(3);
	std::cout << "hello" << std::endl;
	//c->getB() = A();
	

	return 0;
}