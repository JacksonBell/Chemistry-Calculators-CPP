#include <iostream>
using namespace std;

int main() {
    int System1;
    cout <<"Solve Mass Defect (1) or Energy/Wavelength/Frequency (2): ";
    cin >> System1;
        if (System1 == 1) {
            // Nucleus Mass formula
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
            double Nucleus = ((Mass * 1.66054E-27) - (ElectronAmount * 9.10915E-31));
            double Proton = (ProtonAmount * 1.67262E-27) + (NeutronAmount * 1.67495E-27);
            cout << "Nucleus Mass: " << Nucleus << endl << "Proton Mass: " << Proton << endl;
            cout << "Mass Defect: " << Nucleus - Proton << endl;
        } else if (System1 == 2) {
            int System2;   
            cout << "Solve Energy (1), Wavelength (2), or Frequency (3): ";
            cin >> System2;
            if (System2 == 1){
                //Energy Formula
                double Energy;
                cout << "Enter Frequency (Example: 4.97e-33): ";
                cin >> Energy; 
                cout << "Energy = " << ((6.63E-34) * (Energy)) << endl;
            } else if (System2 == 2) {
                //Wavelength Formula
                double Wavelength;
                cout << "Enter Frequency (Example: 4.97e-33): ";
                cin >> Wavelength;
                cout << "Wavelength = " << ((3E8) / (Wavelength)) << "m" << endl;
            } else if (System2 == 3) {
                //Frequency Formula
                double Frequency;
                cout << "Enter Wavelength (Example: 4.0e-7): ";
                cin >> Frequency;
                cout << "Frequency = " << ((3E8) / (Frequency)) << "Hz" << endl;
            } else {
                cout << "Please Select A Valid Number" << endl;
            } } else {
            cout << "Please Select A Valid Number" << endl; }
        int System3;
        cout << "Exit (1), or Restart (2)?: ";
        cin >> System3;
        if (System3 != 1) {
            main(); } }