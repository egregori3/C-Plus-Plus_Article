Introduction to C++ (a Survey Article)

There is a wealth of information online about C++. The purpose of this article is to provide a path for students by pointing them to the online material. In this article, I provide links to resources along with summaries of the resource contents. Consider a "map" of online resources for learning C++.

https://www.stroustrup.com/hopl2.pdf

"C allows quite low- level operations such as bit manipulation and choosing between different sizes of integers. There are also facilities, such as explicit unchecked type conversions, for deliberately breaking the type system. C with Classes and later C++ follow this path by retaining the low- level and unsafe features of C. In contrast to C, C++ systematically eliminates the need to use such features except where they are essential and performs unsafe operations only at the explicit request of the programmer."

C++ adds features to C that makes it easier to bind data to functions for the purpose of information hiding and data relationships. When used properly, C++ encourages the software designer to consider the relationship between data and function, the relationships and flow of the data through the system, and the scope of the data in the system for the purpose of code maintainability and reuse. When used improperly, C++ can turn a simple program into a mess.

Note from the description above that C++ is a very datacentric language as opposed to C which is more of a procedural language. This does not mean that you cannot write data-centric programs in C, it is just easier to write data-centric programs in C++. Of course, C++ is also procedural which is where the aforementioned "mess" can result when the software designer does not understand the data/function relationship.

https://www.youtube.com/watch?v=kp9RmrJp1GQ

C++ is an object oriented language. In this context, an object is a container holding data and functions. The container binds the data to the functions required to access and manipulate the data protecting the data from external entities. An object is a "black box" described by the software designer for the purpose of protecting data; allowing only the minimum access required to make the overall system work. If designed correctly, objects facilitate code reusability and can be combined to create complex systems. Designing programs around the concept of objects is called object-oriented programming (OOP).  

https://www.youtube.com/watch?v=pTB0EiLXUC8&t=325s

The Four Pillars of Object-Oriented Programming:

Encapsulation
In my opinion, encapsulation (data hiding) is the most powerful feature of C++. 


