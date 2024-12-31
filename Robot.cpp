//
// Created by Asus on 31/12/2024.
//

#include "Robot.h"
#include<bits/stdc++.h>
using namespace std;
Robot::Robot(string nom, double x1, double y1, double portee) {
    name = nom;
    x = x1;
    y = y1;
    porte = portee;
    estmort=false;
}
void Robot::dep(double dx, double dy) {
    x += dx;
    y += dy;
}
void Robot::tuer() {
    estmort=true;
}
void Robot::aff() {
    cout<<name<<" "<<x<<" "<<y<< "potee"<<porte<<"est il mort?"<<estmort<<endl;
}
bool Robot::dipor(Robot r) {
    double d = sqrt(pow(x - r.x, 2) + pow(y - r.y, 2));
    return d<=porte;
}
string Robot::getName() {
    return name;
}
bool Robot::getEstmort() {
    return estmort;
}





