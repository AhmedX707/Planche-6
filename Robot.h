//
// Created by Asus on 31/12/2024.
//

#ifndef ROBOT_H
#define ROBOT_H
#include<bits/stdc++.h>
using namespace std;
class Robot {
protected:
    string name;
    double x,y;
    double porte;
    bool estmort;
public:
    Robot(string nom, double x1, double y1  , double portee);
    void aff();
    void dep(double dx,double dy);
    bool dipor(Robot r);
    void tuer();
    string getName();
    bool getEstmort();



};



#endif //ROBOT_H
