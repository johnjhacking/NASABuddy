/* created by @johnjhacking 
References:
https://solarsystem.nasa.gov/resources/681/solar-system-temperatures/ 
https://nssdc.gsfc.nasa.gov/planetary/factsheet/
https://examples.yourdictionary.com/examples-of-mass.html
*/
#include <iostream>
#include <math.h>
#include <stdio.h>

int main() {

// Variables for average temperatures, masses of planets (kg), and gravity on planets
int mercuryT = 167; 
int venusT = 464; 
int earthT = 15; 
int marsT = -65;
int jupiterT = -110; 
int saturnT = -140; 
int uranusT = -195; 
int neptuneT = -200; 
int plutoT = -225;
double mercuryM = 0.33; 
double venusM = 4.87; 
double earthM = 5.97; 
double marsM = 0.642;
int jupiterM = 1898; 
int saturnM = 568; 
double uranusM = 86.8; 
int neptuneM = 102; 
double plutoM = 0.0130;
double mercuryG = 0.378; 
double venusG = 0.907;
int earthG = 1;
double marsG = 0.377;
double jupiterG = 2.36; 
double saturnG = 0.916;
double uranusG = 0.889;
double neptuneG = 1.12; 
double plutoG = 0.071;

// ASCII Art for planets
    std::cout << R"(
                ~+

                 *       +
           '                  |
       ()    .-.,="``"=.    - o -
             '=/_       \     |
          *   |  '=._    |
               \     `=./`,        '
            .   '=.__.=' `='      *
   +                         +
        O      *        '       .
    )" << '\n';

        
    // Ask user what they would like to do
    std::cout << "What would you like to do?\n";
    std::cout << "1. See facts about all planets (temperature, mass)\n";
    std::cout << "2. See your weight on all planets\n";
    std::cout << "3. Compare the size of objects to the size of a specific planet\n";

    // Get user input
    int choice;
    std::cin >> choice;

    // If user chooses 1, print all facts about each planet
    if (choice == 1) {
        std::cout << "Mercury: " << "Average temperature " << mercuryT << "°C," << " Mass " << mercuryM * pow(10, 24) << " kgs\n";
        std::cout << "Venus: " << "Average temperature " << venusT << "°C," << " Mass " << venusM * pow(10, 24) << " kgs\n";
        std::cout << "Earth: " << "Average temperature " << earthT << "°C," << " Mass " << earthM * pow(10, 24) << " kgs\n";
        std::cout << "Mars: " << "Average temperature " << marsT << "°C," << " Mass " << marsM * pow(10, 24) << " kgs\n";
        std::cout << "Jupiter: " << "Average temperature " << jupiterT << "°C," << " Mass " << jupiterM * pow(10, 24) << " kgs\n";
        std::cout << "Saturn: " << "Average temperature " << saturnT << "°C," << " Mass " << saturnM * pow(10, 24) << " kgs\n";
        std::cout << "Uranus: " << "Average temperature " << uranusT << "°C," << " Mass " << uranusM * pow(10, 24) << " kgs\n";
        std::cout << "Neptune: " << "Average temperature " << neptuneT << "°C," << " Mass " << neptuneM * pow(10, 24) << " kgs\n";
        std::cout << "Pluto: " << "Average temperature " << plutoT << "°C," << " Mass " << plutoM * pow(10, 24) << " kgs\n";   
    // If user chooses 2, ask for their weight and print their weight on each planet
    }
    else if (choice == 2) {
        int weight;
        int measurement;
        std::cout << "Select 1 for lbs, 2 for kgs: ";
        std::cin >> measurement;
        if (measurement == 1) {
        std::cout << "Enter your weight: ";
        std::cin >> weight;
        }
    else if (measurement == 2) {
        std::cout << "Enter your weight: ";
        std::cin >> weight;
        weight = weight * 2.205;
    }
    // Display weight on each planet in lbs
    double mercuryG = 0.378; 
    double venusG = 0.907;
    int earthG = 1;
    double marsG = 0.377;
    double jupiterG = 2.36; 
    double saturnG = 0.916;
    double uranusG = 0.889;
    double neptuneG = 1.12; 
    double plutoG = 0.071;
    std::cout << "Your weight on the different planets:\n";
    std::cout << "Mercury: " << weight * mercuryG << " lbs\n";
    std::cout << "Venus: " << weight * venusG << " lbs\n";
    std::cout << "Earth: " << weight * earthG << " lbs\n";
    std::cout << "Mars: " << weight * marsG << " lbs\n";
    std::cout << "Jupiter: " << weight * jupiterG << " lbs\n";
    std::cout << "Saturn: " << weight * saturnG << " lbs\n";
    std::cout << "Uranus: " << weight * uranusG << " lbs\n";
    std::cout << "Neptune: " << weight * neptuneG << " lbs\n";
    std::cout << "Pluto: " << weight * plutoG << " lbs\n";
}
    else if (choice == 3) {
    // Variables for specific objects and mass
    double mercuryM = 0.33; 
    double venusM = 4.87; 
    double earthM = 5.97; 
    double marsM = 0.642;
    int jupiterM = 1898; 
    int saturnM = 568; 
    double uranusM = 86.8; 
    int neptuneM = 102; 
    double plutoM = 0.0130;
    // Mass of small and large objects (kg)
    double sheetofpaperM = 0.0045; 
    double pencilM = 0.0085; 
    double cellphoneM = 0.141; 
    double bookM = 0.34; 
    double bicycle = 11.3; 
    int horse = 771; 
    int car = 2000; 
    int house = 45359;
    int airplaneM = 40823;
    int militarytankM = 54531; 
    int cruiseshipM = 231679560; 
    int skyscraperM = 317514659;
    
    // print size of objects compared to a specific planet
    int planet;
    std:: cout << "Select a planet:\n";
    std:: cout << "1. Mercury\n";
    std:: cout << "2. Venus\n";
    std:: cout << "3. Earth\n";
    std:: cout << "4. Mars\n";
    std:: cout << "5. Jupiter\n";
    std:: cout << "6. Saturn\n";
    std:: cout << "7. Uranus\n";
    std:: cout << "8. Neptune\n";
    std:: cout << "9. Pluto\n";
    std:: cin >> planet;

    // if user chooses Mercury, multiply mercuryM by 10 ^ 24 and divide by the mass of the object
    if (planet == 1) {
        std::cout << "The amount of objects that could fit in Mercury:\n";
        std::cout << "Sheets of Paper: " << mercuryM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << mercuryM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << mercuryM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << mercuryM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << mercuryM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << mercuryM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << mercuryM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << mercuryM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << mercuryM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << mercuryM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << mercuryM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << mercuryM * pow(10, 24) / skyscraperM << "\n";    
    }
    else if (planet == 2) {
        std::cout << "The amount of objects that could fit in Venus:\n";
        std::cout << "Sheets of Paper: " << venusM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << venusM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << venusM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << venusM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << venusM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << venusM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << venusM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << venusM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << venusM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << venusM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << venusM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << venusM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 3) {
        std::cout << "The amount of objects that could fit in Earth:\n";
        std::cout << "Sheets of Paper: " << earthM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << earthM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << earthM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << earthM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << earthM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << earthM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << earthM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << earthM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << earthM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << earthM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << earthM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << earthM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 4) {
        std::cout << "The amount of objects that could fit in Mars:\n";
        std::cout << "Sheets of Paper: " << marsM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << marsM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << marsM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << marsM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << marsM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << marsM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << marsM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << marsM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << marsM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << marsM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << marsM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << marsM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 5) {
        std::cout << "The amount of objects that could fit in Jupiter:\n";
        std::cout << "Sheets of Paper: " << jupiterM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << jupiterM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << jupiterM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << jupiterM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << jupiterM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << jupiterM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << jupiterM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << jupiterM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << jupiterM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << jupiterM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << jupiterM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << jupiterM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 6) {
        std::cout << "The amount of objects that could fit in Saturn:\n";
        std::cout << "Sheets of Paper: " << saturnM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << saturnM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << saturnM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << saturnM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << saturnM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << saturnM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << saturnM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << saturnM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << saturnM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << saturnM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << saturnM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << saturnM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 7) {
        std::cout << "The amount of objects that could fit in Uranus:\n";
        std::cout << "Sheets of Paper: " << uranusM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << uranusM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << uranusM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << uranusM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << uranusM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << uranusM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << uranusM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << uranusM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << uranusM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << uranusM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << uranusM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << uranusM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 8) {
        std::cout << "The amount of objects that could fit in Neptune:\n";
        std::cout << "Sheets of Paper: " << neptuneM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << neptuneM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << neptuneM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << neptuneM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << neptuneM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << neptuneM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << neptuneM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << neptuneM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << neptuneM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << neptuneM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << neptuneM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << neptuneM * pow(10, 24) / skyscraperM << "\n";
    }
    else if (planet == 9) {
        std::cout << "The amount of objects that could fit in Pluto:\n";
        std::cout << "Sheets of Paper: " << plutoM * pow(10, 24) / sheetofpaperM << "\n";
        std::cout << "Pencils: " << plutoM * pow(10, 24) / pencilM << "\n";
        std::cout << "Cellphones: " << plutoM * pow(10, 24) / cellphoneM << "\n";
        std::cout << "Books: " << plutoM * pow(10, 24) / bookM << "\n";
        std::cout << "Bicycles: " << plutoM * pow(10, 24) / bicycle << "\n";
        std::cout << "Horses: " << plutoM * pow(10, 24) / horse << "\n";
        std::cout << "Cars: " << plutoM * pow(10, 24) / car << "\n";
        std::cout << "Houses: " << plutoM * pow(10, 24) / house << "\n";
        std::cout << "Airplanes: " << plutoM * pow(10, 24) / airplaneM << "\n";
        std::cout << "Military Tanks: " << plutoM * pow(10, 24) / militarytankM << "\n";
        std::cout << "Cruise Ships: " << plutoM * pow(10, 24) / cruiseshipM << "\n";
        std::cout << "Skyscrapers: " << plutoM * pow(10, 24) / skyscraperM << "\n";
    }
    else {
        std::cout << "Invalid input.\n";
    }   
}
}
