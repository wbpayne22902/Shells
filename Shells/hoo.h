#pragma once
class pig {
	int age;
	std::string name;
	bool isHappy;
public:
	void setAge(int na);
	void setName(std::string nn);
	pig();
	pig(int na);
	pig(std::string nn);
	pig(std::string nn, int na, bool nh);
	~pig();
	std::string getName();
	int getAge();
	void Poop();
	void toggleHappy();
	bool getHappy();
	void setHappy(bool nb);
};

