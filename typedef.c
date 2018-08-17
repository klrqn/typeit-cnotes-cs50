typdef unsigned char byte;

// use byte instead of unsigned char

typedef char* string;

// string instead of char*

struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
};

typedef struct car car_t;

// now i can use "car_t" instead of struct car;

struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
}
car_t; // do it like this.

car_t mycar;
