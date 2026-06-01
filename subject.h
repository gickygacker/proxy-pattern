#ifndef SUBJECT_H
#define SUBJECT_H

class Subject {
public:
	virtual ~Subject() = default;
	virtual void request() = 0;
};

class RealSubject : public Subject {
public:
	void request() override;
};

class Proxy : public Subject {
public:
	Proxy();
	~Proxy() override;
	void request() override;
private:
	Subject* subject;
};

#endif
