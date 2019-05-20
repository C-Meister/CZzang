#include <iostream>

using namespace std;

class A {
public:
	string str;
	virtual void method() = 0;
};

class B : public A {
	void method() override {
		cout << this->str << endl;
	}
};

int main(void) {
	/*
	ZWindow window = new ZWindow();
	ZTextView view = new ZTextView();

	window.addObject(&view);

	view.setText("aa");

	*/
	B b;
	b.str = "test";
	
	A* b_ = &b;

	b_->method();

	b.str = "aa";
	b_->method();
	
	int a = 0;
	cin >> a;
}