//
//  Concert.cpp
//  basic
//
//  Created by Joshua Crum on 10/4/17.
//  Copyright © 2017 Joshua Crum. All rights reserved.
//

#include "Concert.h"
#include <ctime>
#include <string>
#include <vector>

std::string concertName;
std::vector<std::string> friends;
int desire;
std::tm date;



Concert::Concert() {
    concertName = "None";
    friends = new vector<std::string>('s',0);
    desire = 0;
    date = { .tm_mday = 1 }; //FIX ME
}


Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date) {
    this -> concertName = concertName;
    this -> friends = friends;
    this -> desire = desire;
    this -> date = date;
}

std::string getName(){
    return concertName;
}

std::vector<std::string> getFriends(){
    return friends;
}

int getDesire(){
    return desire;
}

std::tm getDate(){
    return date;
}

void setName(std::string concertName){
    concertName = concertName;
}

void setFriends(std::vector<std::string> friends){
    friends = friends;
}

int setDesire(int desire){
    desire = desire;
}

void setDate(std::tm date){
    date = date;
}
