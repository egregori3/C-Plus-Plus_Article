Overview of C++ with links to online resources

There is a wealth of information online about C++. The purpose of this article is to provide a path for students by pointing them to the online material. In this article, I provide links to resources along with summaries of the resource contents. Consider a "map" of online resources for learning C++.

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

The Four Pillars of Object-Oriented Programming:

Encapsulation
In my opinion, encapsulation (data hiding) is the most powerful feature of C++. 

Abstraction

Inheritance

Polymorphism

-------------------------------------------------------
C++ Syntax
-------------------------------------------------------

Class - A recipe for an Object

Inheritance - Building objects by combining classes

Runtime polymorphism - Operator and function overloading

Compile time polymorphism - virtual functions

cppcheck

--------------------------------------------------------
Coding Standards
--------------------------------------------------------

NASA C++ Coding Standard - https://ntrs.nasa.gov/api/citations/20080039927/downloads/20080039927.pdf?attachment=true




-------------------------------------------------------
Online C++ Resources
-------------------------------------------------------

Practical C++ Programming - http://117.211.166.170:8080/jspui/bitstream/123456789/1578/1/O_REILLY___PRACTICAL_C___PR.PDF

Boost Library Reference - http://www.xwood.net/docs/pdf/Beyond%20the%20C++%20Standard%20Library_201611291716.pdf



