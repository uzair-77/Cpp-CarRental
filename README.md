
# Car Rental System

Welcome to the Car Rental System repository! This C++ project is designed to showcase a basic yet functional car rental system using object-oriented programming principles. The system simulates a car rental service, where users can select a car model, specify the rental duration, and compute the rental fee.

## Project Description

This project demonstrates the use of classes and inheritance in C++ to build a simple car rental application. It features a user-friendly interface where customers can choose a car from a list, enter rental details, and get a calculated rental fee. The system consists of three primary classes:

1. **Owner Class**
   - **Purpose**: Represents the car owner and displays owner details.
   - **Attributes**:
     - `owner_name`: The name of the car owner.
     - `contact_number`: The contact number of the car owner.
     - `owner_address`: The address of the car owner.
   - **Method**:
     - `display()`: Outputs the owner's static information.

2. **Car Class**
   - **Purpose**: Represents a car and customer details.
   - **Attributes**:
     - `customer_name`: Name of the customer renting the car.
     - `car_model`: The selected car model.
     - `carnumber`: Car number (not used in the current implementation).
   - **Methods**:
     - `add()`: A placeholder for adding car details (currently not implemented).

3. **Rental Class** (Derived from `Car`)
   - **Purpose**: Handles the rental process including car selection and fee calculation.
   - **Attributes**:
     - `days`: The number of days the car is rented.
     - `rentalfee`: The total rental fee calculated based on the car model and rental duration.
   - **Methods**:
     - `data()`: Collects rental details from the user, including car selection and rental duration.
     - `calculate()`: Computes the rental fee based on the selected car model and rental duration.
     - `displayrent()`: Displays the rental details and the total rental amount.

## Features

- **Dynamic Car Selection**: Users can choose from a variety of car models, each with a specific rental rate.
- **Rental Fee Calculation**: Calculates the total rental fee based on the selected car and number of rental days.
- **User-Friendly Output**: Provides clear and formatted output of rental details and amounts.

## Unique Aspects

- **Interactive CLI**: Uses a command-line interface to interact with users, making it easy to understand and use.
- **Sleep and Clear Screen**: Implements `sleep()` and `system("CLS")` to enhance user experience by clearing the screen and providing a pause effect during operations.
- **Flexible Car Models**: Includes a wide range of car models to choose from, each with a different rental rate, showcasing a real-world application of conditional logic.

## License

This project is licensed under the MIT License. For more details, see the [LICENSE](LICENSE) file included in this repository.
