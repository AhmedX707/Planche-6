#include "RobotChasseur.h"

// Constructeur
RobotChasseur::RobotChasseur(string nom, double x, double y, double portee)
    : Robot(nom, x, y, portee) {}


void RobotChasseur::chasserEtTuer(vector<Robot*>& robots) {
    for (Robot* robot : robots) {
        if (!robot->getEstmort() && dipor(*robot)) {
            robot->tuer();
            cout << robot->getName() << " a été tué par " << name << "!" << endl;
        }
    }
}
