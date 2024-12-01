#include "pch.h"
#include "hoo.h"


void pig::setAge(int na) {
    age = na;
    
}

pig::pig() {
    age = 0;
    name = "unnamed";
    isHappy = 0;
}

pig::pig(int na) {
    age = na;
    printf("Created new instance with age = %d.\n", na);
    isHappy = 0;
}

pig::~pig() {
    printf("Destructed!\n");
}

pig::pig(std::string nn) {
    age = NULL;
    name = nn;
    isHappy = 0;
}

pig::pig(std::string nn, int na, bool nh) {
    name = nn;
    age = na;
    isHappy = nh;
}

void pig::setName(std::string nn) {
    name = nn;
}

std::string pig::getName() {
    return name;
}


int pig::getAge() {
    return age;
}

void pig::Poop() {
    printf("I'm pooping!\n");
}

void pig::toggleHappy() {
    if (isHappy == true) {
        isHappy = false;
    } else {
        isHappy = true;
    }
}

bool pig::getHappy() {
    return isHappy;
}

void pig::setHappy(bool nb) {
    isHappy = nb;
}
