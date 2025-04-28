#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
  // Data members(private encapsulation)
  string make;
  string name;
  string model;
  int year;
  double price;
  bool isSold;

  // Static data member (shared across all objects)
  static int totalCars;
  static double totalRevenue;

public:
  // constructor
  Car(string make, string name, string model, int year, double price, bool isSold)
      : make(make), name(name), model(model), year(year), price(price), isSold(false) { totalCars++; }

  ~Car()
  {
    if (!isSold)
    { // only adjust stats if the car wan not sold
      totalCars--;
    }
  }
  // getter (const-safe)
  // Getters are const because they don’t modify the object.
  string getmake() const { return make; }
  string getModel() const { return model; }
  double getPrice() const { return price; }
  bool getIsSold() const { return isSold; }

  // setter for price (with validation)
  void setPrice(double newPrice)
  {
    if (newPrice > 0)
    {
      price = newPrice;
    }
  }

  bool sell()
  {
    if (!isSold)
    {
      isSold = true;
      totalRevenue += price;
      totalCars--;
      return true; // Success
    }
    return false; // already sold
  }

  // Restock (Mark as unsold)

  void restock()
  {
    if (isSold)
    {
      isSold = false;
      totalCars++;
      totalRevenue -= price;
    }
  }

  // statics function to view stats
  // Static functions can access only static members (no make, model, etc.).

  static void displayDealearshipStats()
  {
    cout << "Dealership Stats: " << endl;
    cout << "Total Cars: " << totalCars << endl;
    cout << "Total Revenue: $" << totalRevenue << endl;
  }
};
// Static member must be define seperately (they dont belong to any single object)
int Car::totalCars = 0;
double Car::totalRevenue = 0.0;

int main()
{
  // Create Cars
  Car car1("Toyota", "Camry", "Sedan", 2023, 25000.0, false);
  Car car2("Honda", "Civic", "Sedan", 2024, 22000.0, false);
  Car car3("Ford", "Mustang", "Coupe", 2025, 30000.0, false);
  Car car4("Chevrolet", "Malibu", "Sedan", 2023, 24000.0, false);

  // Sell Cars
  car1.sell();
  car2.restock();
  car3.sell();
  car4.restock();

  // display stats
  Car::displayDealearshipStats();

  return 0;
}