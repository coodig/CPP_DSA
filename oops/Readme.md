# 💡 OOPs Practice Problem Set (Up to Polymorphism)

This file contains **10 practice questions for each key OOP concept** up to **polymorphism** to strengthen understanding and implementation in C++.

---

## 📦 1. Class & Object

1. Create a `Car` class with brand, year, and display function.
2. Create a `Book` class with title and author; display details.
3. Make a `Student` class and create multiple student objects.
4. Build a `Movie` class with name and rating, and print them.
5. Add method to update rating in `Movie` class.
6. Create a `BankAccount` with balance and methods to deposit/withdraw.
7. Design a `Laptop` class with RAM, brand, and SSD info.
8. Define a `Rectangle` class and add area & perimeter methods.
9. Create a `Fan` class with speed and state (on/off), toggle state.
10. Implement a `Clock` class to show time in HH:MM format.

---

## 🔒 2. Encapsulation

1. Create a `BankAccount` class with private balance and public setters/getters.
2. Prevent setting negative age in a `Person` class.
3. Add validation to `Student` marks input.
4. `User` class: username/password set via method only.
5. `Circle` class with radius; set/get radius with validation.
6. `Temperature` class storing Celsius with methods to convert to Fahrenheit.
7. Add getter/setter to private email in `Profile` class.
8. Implement read-only getter for `registrationId` in `User` class.
9. Class `Ticket`: only allow setting passenger name once.
10. Restrict max value in `Speedometer` class.

---

## 🧱 3. Inheritance

1. `Person` → `Student` → display inherited name/age.
2. `Shape` → `Circle`, `Rectangle` — override area methods.
3. `Employee` → `Manager`, `Developer` — add roles.
4. `Vehicle` → `Car`, `Bike` — implement mileage.
5. Multilevel: `LivingThing` → `Animal` → `Dog`.
6. Hierarchical: `Animal` → `Dog`, `Cat`, `Cow`.
7. Multiple: `Artist`, `Engineer` → `CreativeEngineer`.
8. Access experiment with `public`, `private`, `protected` inheritance.
9. Inherit constructor behavior and test it.
10. Constructor chaining: base and derived constructor interaction.

---

## 🎭 4. Polymorphism

### 📌 Function Overloading (Compile-Time)

1. Create `print()` function with int, double, string params.
2. Overload `volume()` for cube, sphere, cylinder.
3. Overload `add()` for 2, 3, and 4 integers.
4. `area()` function for square, rectangle.
5. `display()` for 1 or 2 strings.
6. `multiply()` overloaded for int×int, double×double.
7. `max()` for 2 integers, 2 floats.
8. `show()` with no args, one arg, two args.
9. Constructor overloading with different param types.
10. Build a calculator class with overloaded `calculate()` method.

### 📌 Function Overriding (Run-Time)

1. `Animal` class → `sound()` overridden in `Dog`, `Cat`.
2. `Vehicle` → `startEngine()` overridden in `Car`, `Bike`.
3. `Employee` → `calculateSalary()` in `Intern`, `Manager`.
4. `Shape` → `area()` overridden in `Circle`, `Rectangle`.
5. Pointer of base type pointing to derived object → call virtual function.
6. `Account` class with `withdraw()` overridden in `SavingAccount`.
7. `Appliance` class → `powerOn()` overridden in `Fan`, `AC`.
8. `Bird` class → `fly()` overridden in `Penguin`, `Sparrow`.
9. Add `virtual` in base, override in derived → test behavior.
10. Use `Animal* a = new Cow();` pattern to test dynamic dispatch.

---

## 🏗️ 5. Constructors & Destructors

1. Create a class `Student` with default constructor printing "Student created".
2. Add parameterized constructor to `Student` class to take name and age.
3. Create `Book` class that uses parameterized constructor for title and author.
4. Make a `Laptop` class with default and parameterized constructors.
5. Use copy constructor in `User` class to duplicate objects.
6. Demonstrate constructor overloading in a `Circle` class.
7. Add a destructor to `Car` class and print a message when object is destroyed.
8. Create an object inside a block scope and see when destructor is called.
9. Show constructor and destructor execution order in derived/base class.
10. Demonstrate default constructor not generated when a parameterized constructor exists.

---

## Misc

1. `Complex numbers`