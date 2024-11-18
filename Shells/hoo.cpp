#include "pch.h"
#include "hoo.h"


void hoo::setAge(int na) {
    age = na;
    
}

hoo::hoo() {
    age = 0;
    name = "unnamed";
    isHappy = 0;
}

hoo::hoo(int na) {
    age = na;
    printf("Created new instance with age = %d.\n", na);
    isHappy = 0;
}

hoo::~hoo() {
    printf("Destructed!\n");
}

hoo::hoo(std::string nn) {
    age = NULL;
    name = nn;
    isHappy = 0;
}

hoo::hoo(std::string nn, int na, bool nh) {
    name = nn;
    age = na;
    isHappy = nh;
}

void hoo::setName(std::string nn) {
    name = nn;
}

std::string hoo::getName() {
    return name;
}


int hoo::getAge() {
    return age;
}

void hoo::Poop() {
    printf("I'm pooping!\n");
}

void hoo::toggleHappy() {
    if (isHappy == true) {
        isHappy = false;
    } else {
        isHappy = true;
    }
}

bool hoo::getHappy() {
    return isHappy;
}

void hoo::setHappy(bool nb) {
    isHappy = nb;
}
