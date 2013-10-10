class Point
{
	private:
		// Declare Variables
		double latitude_;
		double longitude_;

	public:
		// Constructor
		Point();				// Default Constructor
		Point(double, double);	// Overload of Default Constructor

		// Accessors (get)
		double latitude();
		double longitude();

		// Mutators (set)
		void set_latitude(double);
		void set_longitude(double);

		static double random_latitude();
		static double random_longitude();
		static Point random_point();
};