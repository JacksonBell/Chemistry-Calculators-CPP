#include <iostream>
using namespace std;

int main(){
    // ((Mass * 1.66054E-27) - (ElectronAmount * 9.10915E-31)) Mass formula
    double Mass;
        cout << "Enter Mass Number: ";
        cin >> Mass;
    double ElectronAmount;
        cout << "Enter Electron Amount: ";
        cin >> ElectronAmount;
    // Proton Mass Formula
    double ProtonAmount;
        cout << "Enter Proton Amount: ";
        cin >> ProtonAmount;
    double NeutronAmount;
        cout << "Enter Neutron Amount: ";
        cin >> NeutronAmount;
    // Mass Defect Formula
    // (The difference between the mass of an isotope and its mass number)
    cout << "Neutron Mass: " << ((Mass * 1.66054E-27) - (ElectronAmount * 9.10915E-31)) << endl << "Proton Mass: " << (ProtonAmount * 1.67262E-27) + (NeutronAmount * 1.67495E-27) << endl;
    cout << "Mass Defect: " << ((Mass * 1.66054E-27) - (ElectronAmount * 9.10915E-31)) - (ProtonAmount * 1.67262E-27) + (NeutronAmount * 1.67495E-27) << endl;
}
