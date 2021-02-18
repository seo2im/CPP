# CPP 03

### ex00
FragTrap class, just class

1. Constructor
	- member attributes are set in constructor
	- When initializing fianl variable, use member initializer.

2. Array of references
	- Array can have reference values, so function, class, or any ref are possible.

### ex01
FragTrap & ScavTrap class, just class

1. Same ex00

### ex02
Scav & Frag Trap inheritating ClapTrap

1. inherit
	- Class inherit class, inheritating class can use inheritated class's attribute & method.
	- Must work inhertated class's constructor & destructor.
	
### ex03
Ninja Trap has function overloading

1. function overload
	- class function overloading possible.
	- overloading mean that can declare same name function but different parameter.

### ex04
SuperTrap is multiple inheritation with Ninja & Frag Trap

1. Multiple inheritation
	- multiple inheritation must use `virtual` keyword.
	- `virtual` fix ambigousion of multiple inheritation, but use more memories.