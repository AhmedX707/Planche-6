#include "Robot.h"
#include "RobotChasseur.h"
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int main() {
    RobotChasseur robotChass1("Optimus", 2, 3, 25);
    robotChass1.dep(33, 19); // De (2, 3) à (35, 22)
    robotChass1.aff();
    vector<Robot*> robots = {
        new Robot("ahmed", 40, 25, 15),
        new Robot("youssef", 20, 18, 10),
        new Robot("Bumblebee", 36, 23, 20),
        new Robot("arsalen", 50, 50, 10),
        new Robot("jassem", 10, 10, 12)
    };


    robotChass1.chasserEtTuer(robots);

    cout << "\nAprès la chasse:" << endl;
    for (Robot* robot : robots) {
        robot->aff();
        delete robot;
    }

    return 0;
}
