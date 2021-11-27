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


---------------------------------------------------------------------------------------
The Four Pillars of Object-Oriented Programming
---------------------------------------------------------------------------------------

## Encapsulation

"Preventing unauthorized access to some piece of information or functionality." https://isocpp.org/wiki/faq/classes-and-objects

In my opinion, encapsulation (data hiding) is the most powerful feature of C++. 
It is good programming practice to always minimize scope;
variables should only be accessable by functions that require access.
C++ allows for variables to be bound directly to funcions within a class.
The programmer can specify the scope of a variable or function in a class using access specifiers (https://en.cppreference.com/w/cpp/language/access).

### Class Access Specifiers


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

Polymorphism is a key 


## Inheritance

"Inheritance is a mechanism of reusing and extending existing classes without modifying them, thus producing hierarchical relationships between them. Inheritance lets you include the names and definitions of another class's members as part of a new class. The class whose members you want to include in your new class is called a base class. Your new class is derived from the base class. The new class contains a subobject of the type of the base class. You can derive a class from any number of base classes. Deriving a class from more than one direct base class is called multiple inheritance."

https://www.ibm.com/docs/en/zos/2.4.0?topic=reference-inheritance-c-only

---------------------------------------------------------------------------------------
Class Types
---------------------------------------------------------------------------------------

- Base Class
- Derived Class
- Abstract Class
- Singleton




