Car Dealership Inventory System
A C++ OOP project to manage car inventory, sales, and revenue tracking.

📌 Key Features
Add cars with details: make, name, model, year, price, and sale status.

Sell/Restock cars with automatic stats updates.

Track total cars and total revenue using static members.

Input validation (e.g., prevent negative prices).

🧠 Core Concepts Implemented
✔ Encapsulation (Private data + public methods)
✔ Static Members (totalCars, totalRevenue)
✔ Const-Correctness (Safe getters)
✔ Object Lifecycle (Constructor/Destructor)

⚙️ Class Structure: Car
Data Members (Private)
Member	Type	Description
make	string	Manufacturer (e.g., "Toyota")
name	string	Marketing name (e.g., "Camry")
model	string	Body type (e.g., "Sedan")
year	int	Manufacturing year
price	double	Retail price
isSold	bool	Sale status
totalCars	static int	Total cars in inventory
totalRevenue	static double	Total sales revenue
Key Member Functions
Function	Description
Car(...) (Constructor)	Initializes car and updates totalCars
~Car() (Destructor)	Adjusts stats if car was unsold
sell()	Marks as sold; updates revenue and inventory
restock()	Reverts a sale (e.g., for returns)
setPrice()	Validates and updates price
displayDealearshipStats()	Static: Prints global stats
🚀 How to Compile & Run
Save code as main.cpp.

Compile:

bash
Copy
g++ main.cpp -o dealership
Execute:

bash
Copy
./dealership
Expected Output:

Copy
Dealership Stats: 
Total Cars: 2
Total Revenue: $55000

car-dealership-inventory-cpp
A C++ OOP project to manage car inventory, sales, and revenue tracking using static members and encapsulation. Features car sales/restocking, dealership statistics, and input validation.  (Bonus: Add these emoji tags for visibility on GitHub) 🔹 #OOP 🔹 #CPlusPlus 🔹 #StaticMembers 🔹 #Encapsulation 🔹 #InventorySystem
