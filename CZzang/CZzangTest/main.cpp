#include "CZzang.h"
#include "ZObject.h"
#include "ZColor.h"
#include <iostream>

using namespace std;
using namespace czzang;
class B {};
class A {
private:
	int a_;
	B * b_;

public:
	//get�Լ��� ������ const�޼ҵ��/
	void setA(const int& a){
		this->a_ = a;
	}
	const int& getA() const {
		return this->a_;
	}
	void setB(const B& b) {
		this->b_ = new B(b);
	}
	B *getB() const {
		return this->b_;
	}


};



int main(void) {
	
}