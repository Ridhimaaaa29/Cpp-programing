#include <iostream>  
using namespace std;  

int main() {  
    float age;  
    char timeUnit;  

    // Input the age and time unit  
    cout << "Enter age: ";  
    cin >> age;  

    // Check for negative age input  
    if (age < 0) {  
        cout << "Invalid input. Age cannot be negative." << endl;  
        return 1; // Exit the program due to invalid input  
    }  

    cout << "Enter time unit (w for weeks, m for months, y for years): ";  
    cin >> timeUnit;  

    // Using switch-case to determine vaccination schedule based on age  
    switch (timeUnit) {  
        case 'w': // weeks  
            if (age < 1.0) {  // use decimal for specifying days
                cout << "Vaccinations: BCG, Hep B1, OPV" << endl;  
            } else if (age >= 6.0 && age < 7.0) {  
                cout << "Vaccinations: DTwP/DTaP1, Hib-1, IPV-1, Hep B2, PCV 1, Rota-1" << endl;  
            } else if (age >= 10.0 && age < 11.0) {  
                cout << "Vaccinations: DTwP/DTaP2, Hib-2, IPV-2, Hep B3, PCV 2, Rota-2" << endl;  
            } else if (age >= 14.0 && age < 15.0) {  
                cout << "Vaccinations: DTwP/DTaP3, Hib-3, IPV-3, Hep B4, PCV 3, Rota-3" << endl;  
            } else {  
                cout << "No vaccinations scheduled for this age in weeks." << endl;  
            }  
            break;  

        case 'm': // months  
            if (age >= 6.0 && age < 7.0) {  
                cout << "Vaccinations: Influenza-1" << endl;  
            } else if (age >= 7.0 && age < 8.0) {  
                cout << "Vaccinations: Influenza-2" << endl;  
            } else if (age >= 9.0 && age < 10.0) {  
                cout << "Vaccinations: MMR 1 (Mumps, Measles, Rubella)" << endl;  
            } else if (age >= 12.0 && age < 13.0) {  
                cout << "Vaccinations: Hepatitis A-1" << endl;  
            } else if (age == 13.0 || age == 15.0) {  
                cout << "Vaccinations: PCV Booster, MMR 2, Varicella" << endl;  
            } else if (age >= 16.0 && age <= 18.0) {  
                cout << "Vaccinations: DTwP/DTaP, Hib, IPV" << endl;  
            } else if (age >= 18.0 && age < 20.0) {  
                cout << "Vaccinations: Hepatitis A-2**, Varicella 2" << endl;  
            } else {  
                cout << "No vaccinations scheduled for this age in months." << endl;  
            }  
            break;  

        case 'y': // years  
            if (age >= 4.0 && age < 6.0) {  
                cout << "Vaccinations: DTwP/DTaP, IPV, MMR 3" << endl;  
            } else if (age >= 9.0 && age <= 14.0) {  
                cout << "Vaccinations: HPV (2 doses)" << endl;  
            } else if (age >= 11.0 && age <= 12.0) {  
                cout << "Vaccinations: Tdap/Td" << endl;  
            } else if (age >= 2.0 && age < 5.0) {  
                cout << "Vaccinations: Annual Influenza Vaccine" << endl;  
            } else {  
                cout << "No vaccinations scheduled for this age in years." << endl;  
            }  
            break;  

        default:  
            cout << "Invalid time unit. Please use 'w', 'm', or 'y'." << endl;  
    }    

    return 0;  
}