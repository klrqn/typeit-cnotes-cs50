/*

structures

provide a way to unify several variables of different types into a single, new variable type which can be assigned its own type

we use structures (structs) to group together elements of a variety of data types that have a logical connection.

think of a structure like a "super-variable"

*/

struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
};

/*

once we have defined a structure, which we typically do in a separate .h files or atop our rpograms, we have efeectively created a new type

that meas we can create variables of that type using the familiar syntax

we can access the various _fields_ (also known as _members_) of hte structure using the dot operator.

*/

struct car mycar;

// access fields of structure
mycar.year		= 1998;
mycar.plate 	= "BR920";
mycar.odometer	= 191010;

/*

structures, like varaibles of all other data types, don't need to be created on the stack. we can dynamically allocate structures at run time.

in order to access the fields of our structures in that situation, we need to first dereference the pointer to the structure before 
we can access its field

*/

struct car *mycar = malloc(sizeof(struct car));
(*mycar).year		= 1998;
(*mycar).plate 	= "BR920";
(*mycar).odometer	= 191010;

// this is a little annoying. there is a shorter way
// the arrow operator (->) makes this process easier. it's an operator that does two things back to back
// 1.	first - dereferences the pointer on the left side of the operator
// 2.	accesses the field on the right side of the operator

mycar->year		= 1998;
mycar->plate 	= "BR920";
mycar->odometer	= 191010;

