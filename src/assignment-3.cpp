// PHYS 30762 Programming in C++
// Assignment 3
// Practice with C++ classes and their interactions

#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using std::string;

// test test test

// Beginning of particle class
class particle
{
private:
  string particle_name;
  double rest_mass;
  double charge;
  double velocity;
  const double speed_of_light = 2.99792458e8;
  double particle_beta_value = velocity / speed_of_light; // Put this in range of 0-1?


public:
  // Constructors
  // Here you need a default constructor, and a parameterised constructor
  particle() = default ;
  particle(double mass_in, double charge_in, double velocity_in) : rest_mass{mass_in}, velocity{velocity_in}, charge{charge_in} {}

  // Destructor
  ~particle(){std::cout<<"DESTROY"<<std::endl;}

  // Getter functions (accessors) to 
  // This should include function returning beta value 

  // Setter functions, to change value of data members
  // Make sure you check input validity before changing something
  // Hint: you can use the input checking functions you used in assignment 1

  // Function to print info about a particle
  void print_data();

};

// Implementation of print_data function goes here

// End of particle class and associated member functions

// Beginning of detector class
class detector
{
  private:
  
  public:

};
// Functionalities needed, in addition to constructor/destructor/setters/getters (see slides on BB):
// - write a function that takes a particle 
//   and returns a bool and a print-out on whether this type of detector detected the particle
//   depending on the detector/particle combination (see slides on BB)
// - have data members that keep track of how many particles were detected by this particular detector, 
//   and of which type
// - write a function (accessor) that prints how many particles passed through this detector

// End of detector class

// Main program
int main()
{
  particle electron;
  particle muon;
  // Create the following particles: 
  // two electrons, four muons, one antielectron, one antimuon
  // Use the parameterised constructor

  // Print out the data from all the particles (put them in a vector)

  // Create the following detectors: a tracker, a calorimeter, a muon chamber

  // Pass the list of particles into each detector

  // Print a summary of how many particles were detected

  return 0;
}
