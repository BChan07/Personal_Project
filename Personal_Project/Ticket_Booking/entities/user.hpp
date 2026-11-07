#include <iostream>
#include <time.h>
#include <vector.h>
#include "train.hpp"

using namespace std;

struct User {
    string userId;
    string name;
    string aadharCard;
    vector<Train> trains;
};