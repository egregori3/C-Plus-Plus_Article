----------------------------------------------------------------------------------------
C++ is an Object Oriented language
----------------------------------------------------------------------------------------

There are many great on-line resources covering C++. The purpose of this article is to provide students with links to these resources in an easy to use format. I quote the resource to provide context and provide a link to enable the student to get more information. I reference Youtube videos because feedback from modern students indicate some prefer Youtube videos. This article is available on Github at: https://github.com/egregori3/C-Plus-Plus_Article   If you know of a good resource not listed, please fork the article, add a summary and a link to the resource.

C++ is an object oriented language. In this context, an object is a container holding data and functions. The container binds the data to the functions required to access and manipulate the data protecting the data from external entities. An object is a "black box" described by the software designer for the purpose of protecting data; allowing only the minimum access required to make the overall system work. If designed correctly, objects facilitate code reusability and can be combined to create complex systems. Designing programs around the concept of objects is called object-oriented programming (OOP).

https://www.youtube.com/watch?v=kp9RmrJp1GQ

An object is created by the compiler based on a recipe or template; the recipe is called a class. The software engineer creates a class (recipe) to describe the object to the compiler. The compiler generates code to build the object in memory at compile time. When the object is instantiated at run-time, the generated code is executed and the object is build in memory. "A class template by itself is not a type, or an object, or any other entity. No code is generated from a source file that contains only template definitions. In order for any code to appear, a template must be instantiated: the template arguments must be provided so that the compiler can generate an actual class (or function, from a function template)"

https://en.cppreference.com/w/cpp/language/class_template

Great material from a MIT online C++ course: https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-088-introduction-to-c-memory-management-and-c-object-oriented-programming-january-iap-2010/lecture-notes/ 

Resources from the creator of C++: https://www.stroustrup.com/C++.html

Guidelines for writing professional C++ code from the creator of C++: http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

"What’s “Super” about this FAQ? In part it’s because this is a merger of two great FAQs: Marshall Cline’s C++ FAQs, and Bjarne Stroustrup’s C++ FAQ. And in part it’s because this is a wiki being continuously updated for modern C++. There are some FAQ topics not yet updated; if you spot one, suggest an improvement using the link on the bar for that FAQ."

My favorite C++ resource: https://isocpp.org/faq
https://github.com/isocpp/CppCoreGuidelines

One of my favorite on-line C++ courses: https://www.youtube.com/watch?v=iVLQeWbgbXs&t=201s

---------------------------------------------------------------------------------------
The Four Pillars of Object-Oriented Programming
---------------------------------------------------------------------------------------

https://www.youtube.com/watch?v=m_MQYyJpIjg

https://www.youtube.com/watch?v=wN0x9eZLix4

https://cs.smu.ca/~porter/csc/common_341_342/notes/oop_3pillars.html

## Encapsulation

"Preventing unauthorized access to some piece of information or functionality." https://isocpp.org/wiki/faq/classes-and-objects

In my opinion, encapsulation (data hiding) is the most powerful feature of C++. 
It is good programming practice to always minimize scope;
variables should only be accessable by functions that require access.
C++ allows for variables to be bound directly to funcions within a class.
The programmer can specify the scope of a variable or function in a class using access specifiers (https://en.cppreference.com/w/cpp/language/access).

### Class Access Specifiers

https://www.youtube.com/watch?v=iVLQeWbgbXs&t=201s

#### public

" A public member of a class is accessible anywhere in the program where the class itself is visible and accessible."

#### private

"A private member of a class is accessible only to members and friends of that class."

#### protected

"A protected member of a class is accessible only to members and friends of that class or to members and friends of classes derived from that class."

https://www.embedded.com/access-specifiers-and-class-member-allocation-order/

## Abstraction

https://www.educative.io/edpresso/what-is-abstraction-in-programming

"Abstraction is used to hide background details or any unnecessary implementation about the data so that users only see the required information. It is one of the most important and essential features of object-oriented programming."

After you learn how to drive a car, you can "drive" almost any car. This is an example of abstraction. The brake, accelerator, and steering wheel are an interface to a black box. Once you learn to use the interface, you do not need to understand how the black box works in order to use it. The functioning of the car is abstracted from the user; only the interface is presented to the user.

http://web.cecs.pdx.edu/~karlaf/CS202_Slides/Topic2.pdf

procedural abstraction - "..  a “fence” around program segments, preventing some parts of the program from “seeing” how tasks are being accomplished.
modular abstraction - " ... a “screen” surrounding the internal structure of our program prohibiting programmers from accessing the data except through specified functions.
data abstraction - "With data abstraction we think about what operations can be performed on a particular type of data and not how it does it."

## Polymorphism

https://www.geeksforgeeks.org/polymorphism-in-c/

"The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form."

### Two Types of Polymorphism

#### Compile time polymorphism

"The overloaded functions are invoked by matching the type and number of arguments. This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. It is achieved by function overloading and operator overloading which is also known as static binding or early binding."

#### Run time polymorphism

"Run time polymorphism is achieved when the object's method is invoked at the run time instead of compile time. It is achieved by method overriding which is also known as dynamic binding or late binding."

The link below has a detailed table describing the different between the two types of Polymorphism:
https://www.javatpoint.com/cpp-polymorphism

### C++ Function Overloading

"Function Overloading is defined as the process of having two or more function with the same name, but different in parameters is known as function overloading in C++. In function overloading, the function is redefined by using either different types of arguments or a different number of arguments. It is only through these differences compiler can differentiate between the functions."

### C++ Operators Overloading

"Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types."

https://www.javatpoint.com/cpp-overloading

## Inheritance

https://www.youtube.com/watch?v=qYY9eR7Ldek

"Inheritance is a mechanism of reusing and extending existing classes without modifying them, thus producing hierarchical relationships between them. Inheritance lets you include the names and definitions of another class's members as part of a new class. The class whose members you want to include in your new class is called a base class. Your new class is derived from the base class. The new class contains a subobject of the type of the base class. You can derive a class from any number of base classes. Deriving a class from more than one direct base class is called multiple inheritance."

https://www.ibm.com/docs/en/zos/2.4.0?topic=reference-inheritance-c-only

"C++ inheritance is an enormous topic with all sorts of nuances, far more than we can reasonably cover in
a single handout. If you're interested, here are some topics you might want to consider reading into:"

"**Multiple Inheritance:** One of C++'s most complicated and most contested feature is multiple
inheritance, the ability to have a class inherit from two or more base classes. Multiple inheritance
can be quite useful, especially if some of the base classes are abstract. Otherwise, you'll run into
disambiguation issues, virtual inheritance, and the infamous “deadly diamond of death.”
Many professional C++ programmers advise against multiple inheritance, but it's important to
know about because it can be a useful tool."

"**Private Inheritance:** Have you ever wondered why when inheriting from a base class you write
public before the name of the class? It's because there is another form of inheritance called
private inheritance by writing private and then the class name. Private inheritance is
fundamentally different from public inheritance and represents the “is-implemented-in-terms-of”
relationship instead of “is-a.” Private inheritance is uncommon in practice, but you should be
aware that it exists."

http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1084/cs106l/handouts/250_Inheritance_2.pdf

"A member (either data member or member function) declared in a **private** section of a class can only be accessed by member functions and friends of that class"

"A member (either data member or member function) declared in a **protected** section of a class can only be accessed by member functions and friends of that class, and by member functions and friends of derived classes"

"A member (either data member or member function) declared in a **public** section of a class can be accessed by anyone"

https://isocpp.org/wiki/faq/basics-of-inheritance

### Types of Inheritance
In C++, we have 5 different types of Inheritance. Namely,
1. Single Inheritance
2. Multiple Inheritance
3. Hierarchical Inheritance
4. Multilevel Inheritance
5. Hybrid Inheritance (also known as Virtual Inheritance)

"A base class is one from which others are derived, while a derived class is one defined as an extension of another class."
"A derived class often overrides one or more of the member functions in the base class, thereby changing the behavior (but not the interface) of that member function. A derived class will often also extend the base class by adding new member functions, with or without overriding base class functions."

#### Single Inheritance
"In this type of inheritance one derived class inherits from only one base class. It is the most simplest form
of Inheritance."

"single inheritance, which is the mechanism by which one class (called the derived class) acquires the properties (data and operations) of another class (called the base class)"

https://www.youtube.com/watch?v=VmDUgxflYSQ

#### Multiple Inheritance
"In this type of inheritance a single derived class may inherit from two or more than two base classes."
"multiple inheritance, which is the mechanism by which one class acquires the properties of two or more base classes"

#### Hierarchical Inheritance
"In this type of inheritance, multiple derived classes inherits from a single base class."

#### Multilevel Inheritance
"In this type of inheritance the derived class inherits from a class, which in turn inherits from some other
class. The Super class for one, is sub class for the other."

#### Hybrid (Virtual) Inheritance
Hybrid Inheritance is combination of Hierarchical and Mutilevel Inheritance.

For more info and some helpful diagrams:
https://home.csulb.edu/~pnguyen/cecs282/lecnotes/inheritance.pdf

---------------------------------------------------------------------------------------
Class Types
---------------------------------------------------------------------------------------

https://www.youtube.com/watch?v=DAnz06-Xq1s

- Base Class

"The Base Class, also known as the Parent Class or the Super Class is a class, from which other classes are derived. In other term it is a base class for other derived classes. That means if a derived class which inherits the base class has all members of a base class as well as can also have some additional properties. The Base class members and member functions are inherited to object of the derived class."

https://learncplusplus.org/de/learn-c-inheritance-base-classes-and-derived-classes/

- Derived Class

"The Derived Class, also known as Child Class or SubClass, is a class that is created from an existing class. The derived class inherits all members and member functions of a base class. The derived class can have more functionality with respect to the Base class and can easily access the Base class."

https://learncplusplus.org/de/learn-c-inheritance-base-classes-and-derived-classes/

- Abstract Class

"By definition, an abstract class in C++ is a class that has at least one pure virtual function (i.e., a function that has no definition). The classes inheriting the abstract class must provide a definition for the pure virtual function; otherwise, the subclass would become an abstract class itself."

"Sometimes a derived class can also be used for realization. That is, sometimes a derived class actually needs to implement one or more member functions that have not been implemented in the base class. This gives us the notion of an abstract base class (or, simply, an abstract class), which is a class used only to derive other classes, and which cannot be used to create an object. In order to be an abstract class, the class must contain at least one pure virtual function."

https://www.educative.io/edpresso/what-is-a-cpp-abstract-class

https://www.youtube.com/watch?v=T8f4ajtFU9g

- Interface Class

""

https://www.youtube.com/watch?v=tBrf6PRCyfY

- Singleton

---------------------------------------------------------------------------------------
Inheritance vs. Composition
---------------------------------------------------------------------------------------

https://betterprogramming.pub/inheritance-vs-composition-2fa0cdd2f939

"To make a long story short, when a child class inherits from a parent class, the child acquires all behaviors from the parent. Inheritance will make a class hierarchy — you can imagine it as a tree of classes."

"Composition is in contrast to inheritance, it enables the creation of complex types by combining objects (components) of other types, rather than inheriting from a base or parent class. To put it simply, composition contains instances of other classes that implement the desired functionality."

"Inheritance: “is a.” E.g. The car **is a** vehicle."

"Composition: “has a.” E.g. The car **has a** steering wheel."



---------------------------------------------------------------------------------------
Overloading versus Overriding
---------------------------------------------------------------------------------------

"A great source of C++ confusion is the difference between function overloads and function overrides. A
function overload is a function with the same name as another function but with different parameters. For
example, the following two functions are overloads of one another:"
"On the other hand, a function override is a redefinition of a virtual function in a derived class. "

http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1084/cs106l/handouts/250_Inheritance_2.pdf



