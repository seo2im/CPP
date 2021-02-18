# 01

### ex00
Pony class stack or heap declaring

1. Heap 
	- Heap is dynamic allocator
	- Heap allocated with 'new' operator to pointer
	- Have to delete for memory.
2. Stack
	- Stack is allocated at first
	- Not use pointer, just declaration
	- Auto free when scope end.
	
### ex01
**OBJECT**
memoryLeakCheck function

1. Heap memory free
	- must use 'delete' operator.

### ex02
Zombie class is included ZombieEvent class.

1. Control Class with Heap or Stack
	- Zombie class is called with Stack or Heap, But must be freeed apropriate timing.

2. Random seed -> must process in first time

### ex03
ZombieHorde class has Zombie class when declaring.

1. Class Have Class
	- Class have class pointer or reference

### ex04
Brain is reference or pointer value.

1. reference variable
	- ref variable is declared with `&`
	- use it smillar to pointer, but must initialize when declared.
	- When evaluation(ex> param), not use pointer.

### ex05
Human class has Brain ref value

1. `this` operator
	- `this` operator is pointer of own. For example, in class, `this` mean address of class.

2. Use ref variable
	- variables in ref variable can be used with operator `.`

### ex06
HumanA has ref weapone, but B has pointer ref weapone

1. Declare class with ref

2. Class have class ref

### ex07
Sentence change

1. File stream
	- ifstream / ofstream is in/out stream of file.
	- `open`, `close`, `is_open` are used in logical time.
	- `getline` or `get` are read file (each `char*`, `char`)

2. Control std::string
	- String has many function.
	- use function, control string.