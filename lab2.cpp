// Erkinov Mirpo'lat
// 230057
// Friday 9:00

/*
1) Main Function
	    2. The program starts executing from 'main' function. 'static' because no need to create an object.
    	3. In C++ 'main' return type is int and parameters are args but in Java 'main' returns nothing and parameter is String array.
        4. '0' means exited successfully, 'non-zero' means error occurred. In Java non-zero exit status is achieved by System.exit()

2) Variables
        2. Primitive type variables always take some place in storage while reference types just refer to some place in storage.
	    3. A scope is like a place in which the variable can be used. If a variable is declared or given a value in a method, its value or itself can be used inside the method so it is a local scope. If a variable is declared or its value is changed in the class(outside of the function), it can be used in the class and the method too so it is a static scope.
	    4. In statically-typed languages types of variables must be declared and not changed later but in dynamic typing even if the variable's type was int later you can assign string to it and data type of the variable becomes string.

3) Control Flow
	    2. In the while loop operation inside the loop is executed only if the condition is met but in do-while loop the operation is executed once regardless of the condition then it goes the same as while loop.
	    3. Switch statement compares its parameter to the parameters of the cases and executed the corresponding code. Case executes its code if its parameter and the parameter of the switch match. Break is for going out of the switch statement so that other case codes don't get executed and Default's code gets executed regardless of the parameters.
	    4. When using the AND operation if the first condition is false then the outcome is false right away and when using the OR operation if the first condition is true then the outcome is true right away. This is ’short-circuit evaluation’.

4) Functions / Methods
	    2. In 'pass-by-value' only the value of the variable is passed and if the value is changed in the method it does not get changed outside of the function. In 'pass-by-pointer' address of the variable is passed and if the value get changed then the value of that variable is changed everywhere. ’pass-by-pointer’ (C++), ’pass-by-reference’ (C++) are pretty similar I guess but the way how we use them differ a little.
	    3. Function overloading is giving the same names to several functions but different number of parameters and types.
	    4. Recursion is executing the same code and calling the same function over and over. Base case is a condition that stops the recursion. Without it the recursion loops infinitely.

5) Comments
	    2. With comments team members can understand the code easily also they can leave some message to their team members. 
	    3. Main purpose of documentation comment systems is to make it easier for developers to understand the purposes of everything and the code itself.
	    4. ”Good code is self-documenting.” Means that the code must be written so that while reading you can understand the purpose and everything like naming correctly. Even if the code is clear comment may explain why it was written for example.

6) Classes
     	2. an object (instance) is a real thing created from it.
   	    3. public: accessible everywhere; private: only inside the class; protected: inside the class + subclasses.
   	    4. A constructor sets up an object. If you don’t write one, the compiler provides a default empty one.

7) Enums
    	2. Enums are safer and clearer than strings/ints for fixed sets of values.
    	3. They enforce valid values (type safety) and make code self-explanatory.
    	4. Java enums can have methods/fields; old C++ enums act like ints, but C++11 enums are type-safe.

8) Inheritance
    	2. is-a = inheritance (Car is-a Vehicle). has-a = composition (Car has-an Engine).
    	3. Method overriding = redefining a parent method. virtual/override in C++, @Override in Java make it explicit.
    	4. Diamond problem = multiple inheritance conflict. C++ fixes with virtual inheritance; Java avoids it by using interfaces.

9) Mixins
    	2. They let you reuse code without forcing strict inheritance.
    	3. Java default methods in interfaces act like mixins (add shared behavior).
    	4. Inheritance = hierarchy, composition = flexible, mixins = reusable behavior.

10) Polymorphism
    	2. Compile-time = method overloading; Runtime = method overriding.
    	3. Abstract class = can have code + abstract methods. Interface = only contracts (Java) or pure virtuals (C++). Use interface for contracts, abstract class when sharing code.
    	4. Both allow polymorphism: Java interfaces & C++ abstract classes define a common API for different implementations.

12) Async Operations
        2. Solves waiting/blocking problems in I/O tasks (e.g., network, files).
        3. Parallel = tasks run at the same time. Concurrent = tasks make progress together (not always at the same time).
        4. Future/Promise = placeholders for async results. Java: Future, CompletableFuture; C++: std::future.

12) Exceptions
    	2. try = risky code, catch = handle error, finally = always runs. C++ uses RAII instead of finally.
    	3. Java: checked (must handle) vs unchecked (runtime). C++: no such distinction.
    	4. Exceptions are cleaner than error codes but can be slower and misused if overused.
*/
