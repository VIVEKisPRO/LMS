Requirements:
Encapsulation: Each item (Book/Magazine) must hide its sensitive data (like price or unique ID) using private access modifiers, providing public methods to access or modify this data.
Inheritance: Create a base class named LibraryResource that contains shared attributes (like title and id). Derive specific classes like Book and Magazine from this base class to promote code reusability.1
Abstraction: Define LibraryResource as an abstract class with a pure virtual function displayDetails() to ensure that every specific resource type implements its own version of how its information is shown.1
Polymorphism:
Compile-time: Implement constructor overloading to create items with default values or specific parameters. Use operator overloading (e.g., overloading +) to calculate the total price of two library items.12
Run-time: Use virtual functions and method overriding so that calling displayDetails() on a base pointer behaves correctly based on whether the object is a Book or a Magazine.1
Static Members: Maintain a static integer totalItemsCount that increments every time a new Book or Magazine object is created, shared across all instances of the class.1
Friend Functions/Classes: Implement a Librarian class or a friend function that has special access to the private data of Book objects to generate a financial report without needing to use public getters.1
Mapping Concepts to the System
Encapsulation: You protect the price and ISBN of a book so they cannot be changed accidentally.1
Inheritance: A Book is a LibraryResource, inheriting common features like the title, reducing redundant code.1
Polymorphism: If you have a collection of LibraryResource pointers, calling displayDetails() on each will invoke the correct version for either a book or a magazine at runtime.1
Abstraction: By making LibraryResource abstract, you prevent the creation of generic "resources" while forcing derived classes to define their specific details.12
Static: Use this to track inventory globally without needing a separate database class.1
Friendship: Useful for a Reporting class that needs access to private data for auditing purposes.1
