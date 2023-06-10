// 5. Create a base class called Photon. Use this class to store a double type value of
// wavelength that could be used to calculate photon energy. Create class
// calculate_photonEnergy which will inherit photon energy.
// Using these classes, calculate photon energy.
/*
    Energy of photon , E = hc/lambda
    where, h = 6.62607015e-34
*/

#include <iostream>
using namespace std;

class Photon
{
protected:
    double wavelength;

public:
    Photon(double wavelength) : wavelength(wavelength) {}

    virtual double calculatePhotonEnergy()
    {
        return 0.0; // Base class does not provide a specific implementation
    }
};

class CalculatePhotonEnergy : public Photon
{
public:
    CalculatePhotonEnergy(double wavelength) : Photon(wavelength) {}

    double calculatePhotonEnergy() override
    {
        const double h = 6.62607015e-34; // Planck's constant
        const double c = 2.99792458e8;   // Speed of light
        return (h * c) / wavelength;     // Calculate photon energy using E = hc/lambda
    }
};

int main()
{
    double wavelength;
    cout << "Enter the wavelength of the photon (in meters): ";
    cin >> wavelength;

    CalculatePhotonEnergy photon(wavelength);
    double energy = photon.calculatePhotonEnergy();

    cout << "Energy of the photon: " << energy << " Joules" <<endl;

    return 0;
}
