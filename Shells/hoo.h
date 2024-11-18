#pragma once
class hoo {
	int age;
	std::string name;
	bool isHappy;
public:
	void setAge(int na);
	void setName(std::string nn);
	hoo();
	hoo(int na);
	hoo(std::string nn);
	hoo(std::string nn, int na, bool nh);
	~hoo();
	std::string getName();
	int getAge();
	void Poop();
	void toggleHappy();
	bool getHappy();
	void setHappy(bool nb);
};

