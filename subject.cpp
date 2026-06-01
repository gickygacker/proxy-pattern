#include "subject.h"
#include <iostream>

void RealSubject::request() {
	std::cout << "Real Subject request" << std::endl;
}

Proxy::Proxy() : subject(new RealSubject()) {}

Proxy::~Proxy() {
	delete subject;
}

void Proxy::request() {
	subject->request();
}
