class Point
{
public:
	Point()	// Default constructor.
	{}
	Point(int, int)	// Construct from two ints
	{}
};

// An array of Point objects can be declared as follows:
Point aPoint[3] = {
	Point(3,3)	// Use int, int constructor.
};

int main()
{
}