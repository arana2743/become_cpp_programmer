# become cpp programmer

### Learning basics of C++ programming language as part of roadmap to become C++ programmer

### 1. Datatypes in C++
1.1. Primitive or fundamental
  - Integer
    - storage: 4 bytes
    - range: (-2 raise to power of 31) to (2 raise to power of 31 - 1)
  - Floating-point
    - storage: 4 bytes
    - range: ±3.40  x (10 raise to power of ±38)
    - A float can store seven digits after a decimal point precisely
    - we can also store number in scientific notation as well example: 97e4 i.e. 970000
  - Double
    - storage: 8 bytes
    - range: ±1.79  x (10 raise to power of ±308)
    - A double can store 15 digits after a decimal point precisely
  - Void
    - A void data type represents an entity without a value.
  - Character
    - storage: 1 byte
    - range: (-2 raise to power of 7) to (2 raise to power of 7 -1)
    - character value is always written in single quotes
  - Boolean
    - storage: 1 byte

1.2. Derived 
- Functions
- Arrays
- Pointers
- Reference

1.3. User defined
  - Structure
  - Union
  - Enum
  - Class
  - Typedef

### 2. Data type modifiers in C++
> Data type modifiers are used with primitive data types to change the meaning of predefined data types according to the situation.

2.1. long
  - used to increase length of a data type to double in bytes like example long int (will be 8 bytes from usual 4 bytes) and long double (will be 16 bytes from usual 8 bytes)
  - can be used with int, long

2.2. short
  - used to decrease length of a data type by 2 bytes
  - can be used with int

2.3. unsigned
  - allows to store positive numbers only
  - here bytes remain same , only thing is capacity is increased by double since now there is no signed bit
  - can be used with int, char

2.4. signed
  - allows to store both negative and positive numbers
  - can be used with int, char
  - default behaviour of data types (for int and char)

### 3. Bitwise operators in C++
Bitwise operators are:
  - '&' = bitwise AND
  - '|' = bitwise OR
  - '~' = bitwise NOT
  - '>>' = bitwise right shift
  - '<<' = bitwise left shift
  - '^' = bitwise XOR

> Right-shifting an operand1 >> operand2 is equivalent to dividing operand1 by (2 raise to power of operand2).

> Left-shifting an operand1 << operand2 is equivalent to multiplying operand1 by (2 raise to power of operand2).

### 4. Conditional statements in C++

> Switch expression and case label accept variables of int or char data types.

### 5. Function overloading

> Function overloading is the concept of affecting a function’s behavior based on the number of parameters or their types.

> This way, functions with different parameters can coexist with the same name. Function overloading works with different parameters. The function prototype can change and the return type changes according to parameters being returned.

### 6. Lambda functions
> lambdas are just function objects automatically created by the compiler.

> A function object is an instance of a class for which the call operator, operator (), is overloaded. This means that a function object is an object that behaves like a function. The main difference between a function and a function object is that a function object is an object and can, therefore, have a state.

6.1 Syntax: `[] () -> {...}`
  - '[]' =>  
    - captures the used variable
  - '()' => 
    - necessary for parameters
    - optional
  - '->' => 
    - necessary for complex lambda functions
    - optional
  - '{}' => 
    - function body, per default `const`
    - `[]() mutable{...}` has a non-constant function body

### 7. Closures
> Lambda functions can bind their invocation context. This is perhaps the best feature of C++ lambdas.

> Binding allows any variables passed in the surrounding scope(invocation context) to be passed to the lambda. This is what the [] in the beginning is for. Within these square brackets, we can specify which variables we want the lambda to capture.

> The empty brackets we’ve used so far indicate that no variables should be bound.

There are several types of bindings provided by C++ for lambda functions.
PFB some of the bindings provided in C++:

|     Bindings         |    Description                                  | 
|----------------------|:------------------------------------------------| 
| []                   | no binding                                      |
| [a]                  | `a` per copy                                    |
| [&a]                 | `a` per reference                               | 
| [=]                  | all used variables per copy                     | 
| [&]                  | all used variables per reference                | 
| [=,&a]               | per default per copy; `a` per reference         | 
| [&,a]                | per default per reference; a per copy           | 
| [this]               | data and member of the enclosing class per copy |
| [l= std::move(lock)] | moves lock (C++14)                              | 


### 8. Generic lambda functions
> With C++14, we have generic lambdas, which means that lambdas can deduce their argument types. Therefore, we can define a lambda expression such as `[](auto a, auto b){ return a + b; };`. 

> The call operator becomes a template. Therefore to emphasize it explicitly: _a generic lambda is a function template._

### 9. Arrays
There are two way to declara and initilize array in C++: 
  - Approach 1 to declare and intialize:
    - declaration : `DataType ArrayName [ArraySize]; `
    - intialization: `ArrayName [ArrayIndex] = value; `
  - Approach 2 to declare and initialize on same line:
    - `DataType ArrayName [ ] = {value1,value2,...,valueN};`
    - If we are initializing an array in the declaration step, we don’t need to specify the size of the array. _The compiler automatically determines its size_.

> If we initialize an array with elements fewer than its total size, the compiler automatically initializes the remaining elements with their default values.

> If you try to access an index that is greater than the size of an array, the compiler won’t generate an error, but may give you an unexpected output.

> When initializing a 2-D array, specifying the first dimension is optional. The compiler will infer the number of rows from the statement. In the above program, changing `Student[3][3]` to `Student[][3]` is fine, but either `Student[][]` or `Student[3][]` **_isn’t valid_**.

### 10. Pointers
In C++, pointers are variables that store the address of another variable.

Pointer declaration
  - To declare a variable as a pointer, it’s identifier must be preceded by an asterisk *.
  - When we use * before the identifier, it indicates that the variable being declared is a pointer.
    ```
    DataType *identifier;
    ```
  - Above represents that the pointer `*identifier` will store address of variable of type `DataType`

> It’s considered a best practice to set a pointer to `nullptr` when it is declared, unless it is initialized to some valid address

> If we don’t initialize a pointer, it is automatically initialized to 0.

> It’s a good practice to use `ptr` in a pointer’s variable name. It indicates that a variable is a pointer, and must be handled differently.

> If we declare multiple pointers in the same line, we must use an asterisk `*` before each identifier.

Pointer initialization
  - To initialize a pointer, we must store the address in it. 
  - The basic syntax for storing an address of another variable in the pointer variable is given below:
    ```
    ptrVariable = &Variable;
    ```

Address-of operator (`&`)
  - The address-of operator (`&`) is a unary operator. It is used to extract the memory address of the variable.
  - we cannot store the address of one variable into another variable e.g. 
    ```
    int num, address;
    // below is wrong and will generate error
    address = &num; 
    ```
  - upon reviewing above example, this is where pointer types come into picture and are useful.

Dereferencing Operator
  - The dereference operator `*` is a unary operator. It gives the value of the variable to which the pointer is pointing. This process is known as dereferencing a pointer.
  - syntax: `* pointer_name;`

> Trying to dereference an **_uninitialized_** or **_null pointer_** generates an error.

### 11. References
A reference is an alias for an existing variable. It can be created using the `&` operator.

Reference vs Pointers
  - A reference is never nullptr. Therefore, it must always be initialized by having an existing variable assigned to it.
  The below code snippet will not work
    ```
    int &intRef;
    int &intRef = nullptr;
    ```
  - References behave like constant pointers. 
  - A reference always refers to its initial variable. 
  - The value of the variable can change but the reference cannot be assigned to another variable.
  - Like pointers, a reference can only be initialized by a variable of the same type.
