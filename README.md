
# Car Rental System

This repository includes a C++ program for a simple Car Rental System. The program demonstrates the use of classes, inheritance, and basic file operations. It allows users to rent cars and calculates the rental fee based on the selected car model and rental duration.

## Program Overview

The Car Rental System consists of several classes:

1. **Owner Class**
   - Represents the car owner with attributes such as name, contact number, and address.
   - **Methods:**
     - `display()`: Displays the owner's information.

2. **Car Class**
   - Represents the car and the customer who wants to rent it.
   - **Attributes:**
     - `customer_name`: Name of the customer.
     - `car_model`: Selected car model.
     - `carnumber`: Car number (not used in this example).
   - **Methods:**
     - `add()`: Placeholder method for adding car details (not implemented).

3. **Rental Class** (Derived from `Car`)
   - Represents the rental transaction.
   - **Attributes:**
     - `days`: Number of days the car is rented.
     - `rentalfee`: Total rental fee.
   - **Methods:**
     - `data()`: Collects customer and car rental information.
     - `calculate()`: Computes the rental fee based on the selected car model and rental duration.
     - `displayrent()`: Displays the rental details and total amount.

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/yourrepo.git
   ```
2. Navigate to the directory containing the `car_rental_system.cpp` file.
3. Compile the program using a C++ compiler:
   ```bash
   g++ car_rental_system.cpp -o car_rental_system
   ```
4. Run the compiled program:
   ```bash
   ./car_rental_system
   ```

## Code Walkthrough

1. **Owner Class**:
   - Displays static owner information.
   
2. **Car Class**:
   - Placeholder for car details (not fully implemented in this version).

3. **Rental Class**:
   - Allows users to select a car, enter rental days, and calculates the rental fee.
   - Shows the final rental amount along with the details.

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
