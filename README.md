** Overview of C++ with links to online resources **

---------------------------------------------------------
Introduction
---------------------------------------------------------

There is a wealth of information online about C++. The purpose of this article is to provide a path for students by pointing them to the online material. In this article, I provide links to resources along with summaries of the resource contents. Consider a "map" of online resources for learning C++.

Before diving deep into C++, this video explains the differences between programming languages from a very unique angle: https://www.youtube.com/watch?v=wyABTfR9UTU

I found this video to be a bit of a rant, but the history of programming languages presented is fascinating: https://www.youtube.com/watch?v=P2yr-3F6PQo&t=0s

----------------------------------------------------------
Overview of C++
-----------------------------------------------------------

https://www.stroustrup.com/hopl2.pdf

"C allows quite low- level operations such as bit manipulation and choosing between different sizes of integers. There are also facilities, such as explicit unchecked type conversions, for deliberately breaking the type system. C with Classes and later C++ follow this path by retaining the low- level and unsafe features of C. In contrast to C, C++ systematically eliminates the need to use such features except where they are essential and performs unsafe operations only at the explicit request of the programmer."

C++ adds features to C that makes it easier to bind data to functions for the purpose of information hiding and data relationships. When used properly, C++ encourages the software designer to consider the relationship between data and function, the relationships and flow of the data through the system, and the scope of the data in the system for the purpose of code maintainability and reuse. When used improperly, C++ can turn a simple program into a mess.

Note from the description above that C++ is a very datacentric language as opposed to C which is more of a procedural language. This does not mean that you cannot write data-centric programs in C, it is just easier to write data-centric programs in C++. Of course, C++ is also procedural which is where the aforementioned "mess" can result when the software designer does not understand the data/function relationship.

https://www.youtube.com/watch?v=kp9RmrJp1GQ

C++ is an object oriented language. In this context, an object is a container holding data and functions. The container binds the data to the functions required to access and manipulate the data protecting the data from external entities. An object is a "black box" described by the software designer for the purpose of protecting data; allowing only the minimum access required to make the overall system work. If designed correctly, objects facilitate code reusability and can be combined to create complex systems. Designing programs around the concept of objects is called object-oriented programming (OOP).  

https://d1wqtxts1xzle7.cloudfront.net/61597464/An_Overview_of_C__C___-A_Case_of_Engineering_Faculty_120191224-96814-nkbkyr.pdf?1577188947=&response-content-disposition=inline%3B+filename%3DAn_Overview_of_C_and_C_A_Case_of_Enginee.pdf&Expires=1629582672&Signature=JKttU1cQ8HSE~vnJuWkE8OWYHTccTnozxt182var9e5dE1cjL-ioLdgtqBGelH4ClHtygZowk7dDiO2EZnlEZi44UfkY-1UTDpJAOD97Xa9X4HNbfbFq52CpdisgU5zAGD-bArW34gOux6MkWDEXKFDsNEWY~bZtWL3JAQkWd~Iwutk97FVmpU~Hjmpn~04GzJApmJT9t2nMj8AfhKzX6XoajBlv6UZuQreH990nhbx-sLZeLZaXGHSeErUwf05MrWq~0KoGUdj2PlWqqeRxdOkQuWHA3IC78-m2v2c6bplZh5QM6F4O32PA5MpJbDaBbnEjWBnewq9r7yezTfIwxQ__&Key-Pair-Id=APKAJLOHF5GGSLRBV4ZA

"Features of C++:
Object, class, abstraction, encapsulations, inheritance, reusability, polymorphism,
dynamic binding and message passing are the major features of C++ [9]. The other
features are emphasis is on data rather than procedure, program is divided into objects,
functions and data are tied together in a single unit, data can be hidden to prevent from
accidental alternation from other functions or objects, data access is done through the
visible function so that communication between objects is possible, data structures are
modeled as objects and follows bottom up approach for program design methodology [8]"

https://www.youtube.com/watch?v=pTB0EiLXUC8&t=325s

https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1206/lectures/c++-classes/

---------------------------------------------------------------------------------------
The Four Pillars of Object-Oriented Programming:
---------------------------------------------------------------------------------------

Encapsulation

"Preventing unauthorized access to some piece of information or functionality." https://isocpp.org/wiki/faq/classes-and-objects

In my opinion, encapsulation (data hiding) is the most powerful feature of C++. 
It is good programming practice to always minimize scope;
variables should only be accessable by functions that require access.
C++ allows for variables to be bound directly to funcions within a class.
The programmer can specify the scope of a variable or function in a class using access specifiers (https://en.cppreference.com/w/cpp/language/access).

Abstraction

https://www.educative.io/edpresso/what-is-abstraction-in-programming

"Abstraction is used to hide background details or any unnecessary implementation about the data so that users only see the required information. It is one of the most important and essential features of object-oriented programming."

After you learn how to drive a car, you can "drive" almost any car. This is an example of abstraction. The brake, accelerator, and steering wheel are an interface to a black box. Once you learn to use the interface, you do not need to understand how the black box works in order to use it. The functioning of the car is abstracted from the user; only the interface is presented to the user.


http://web.cecs.pdx.edu/~karlaf/CS202_Slides/Topic2.pdf

procedural abstraction - "..  a “fence” around program segments, preventing some parts of the program from “seeing” how tasks are being accomplished.
modular abstraction - " ... a “screen” surrounding the internal structure of our program prohibiting programmers from accessing the data except through specified functions.
data abstraction - "With data abstraction we think about what operations can be performed on a particular type of data and not how it does it."


Polymorphism

https://www.geeksforgeeks.org/polymorphism-in-c/

"The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form."

Polymorphism is a key 


Inheritance





-------------------------------------------------------
C++ Syntax
-------------------------------------------------------

Class - A recipe for an Object



Inheritance - Building objects by combining classes

https://eng.libretexts.org/Courses/Delta_College/C_-_Data_Structures/05%3A_Polymorphism/5.1%3A_Polymorphism_in_C

Runtime polymorphism - Operator and function overloading

Compile time polymorphism - virtual functions

cppcheck

--------------------------------------------------------
C++ Standard Library - libstdc++
--------------------------------------------------------

https://gcc.gnu.org/onlinedocs/libstdc++/

--------------------------------------------------------
C++ Standard Template Library (STL)
--------------------------------------------------------




--------------------------------------------------------
Coding Standards
--------------------------------------------------------

NASA C++ Coding Standard - https://ntrs.nasa.gov/api/citations/20080039927/downloads/20080039927.pdf?attachment=true

Google C++ Style Guide - https://google.github.io/styleguide/cppguide.html

ISO C++ Codeing Standard - https://isocpp.org/wiki/faq/coding-standards

Bjarne Stroustrup's C++ Style and Technique FAQ - https://www.stroustrup.com/bs_faq2.html

Stanford C++ Style Guide - https://web.stanford.edu/class/cs106b/resources/style_guide.html

Unreal C++ Coding Standard - https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/DevelopmentSetup/CodingStandard/

GCC Coding Conventions - https://gcc.gnu.org/codingconventions.html

NorthWestern C/C++ Style Guidde - https://users.cs.northwestern.edu/~riesbeck/programming/c++/c++-style.html

Linux Coding Stabdard - https://www.kernel.org/doc/html/latest/process/coding-style.html

-------------------------------------------------------
Online C++ Resources
-------------------------------------------------------

The creator of C++ - https://www.stroustrup.com/C++.html

C++ Tutorials - https://www.w3schools.com/CPP/default.asp

C++ Tutorials - https://www.learncpp.com/

C++ Tutorials - https://www.tutorialspoint.com/cplusplus/cpp_references.htm

C++ Tutorials with Online Compiler - https://www.programiz.com/cpp-programming

C++ Tutorial Video - https://www.youtube.com/watch?v=vLnPwxZdW4Y

C++ Tutorial Video - https://www.youtube.com/watch?v=GQp1zzTwrIg

C++ Reference and Tutorials- https://www.cplusplus.com/

C++ Reference - https://en.cppreference.com/w/

Micorsoft C++ Reference - https://docs.microsoft.com/en-us/cpp/cpp/?view=msvc-160

Practical C++ Programming - http://117.211.166.170:8080/jspui/bitstream/123456789/1578/1/O_REILLY___PRACTICAL_C___PR.PDF

Boost Library Reference - http://www.xwood.net/docs/pdf/Beyond%20the%20C++%20Standard%20Library_201611291716.pdf

Official C++ Language Standard - http://www.open-std.org/jtc1/sc22/wg21/

Standard C++ - https://isocpp.org/





