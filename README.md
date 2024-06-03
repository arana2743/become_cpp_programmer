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