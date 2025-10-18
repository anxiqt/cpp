When selecting a data structure to solve a problem, you should follow these steps:

1. Analyze your problem to determine the basic operations that must be supported. Examples of basic operations include inserting a data item into the data structure, deleting a data item from the data structure, and finding a specified data item.

2. Quantify the resource constraints for each operation.

3. Select the data structure that best meets these requirements.

This three-step approach to selecting a data structure operationalizes a data centered view of the design process.

~ Cost and benefits~
Each data structure has associated costs and benefits. In practice, it is hardly ever true that one data structure is better than another for use in all situations.

A data structure requires a certain amount of space for each data item it stores, a certain amount of time to perform a single basic operation, and a certain amount of programming effort.     

A "type" is a collection of values. Example: Boolean type consists of the values "true" and "false".

A "data item" is a piece of information or a record whose value is drawn from a type.

A data item is said to be a member of that type.

A "data type" is a type together with a collection of operations to manipulate that type. 

An "abstract data type" (ADT) is the realization of a data type as a software component. The interface of the ADT is defined in terms of a type and set of operations on that type. The behavior of each operation is determined by its inputs and outputs.

An ADT does not specify how the data type is implemented. These implementation details are hidden from the user of the ADT and protected from outside access, a concept called encapsulation. 

A 'data structure' is the implementation for an ADT. In an object-oriented language such as C++, an ADT and its implementation together make up a class. Each operation associated with the ADT is implemented by a member function or method. The variables that define the space required by a data item are referred to as data members. 

An object is an instance of a class, that is, something that is created and takes up storage during the execution of a program.

Data types have both a 'logical' and 'physical' form. 