class Point {
private:
	double abscissa;
	double ordinate;
public:
	Point():
		abscissa(0),
		ordinate(0)
	  {}
	Point(double x, double y):
		abscissa(x),
		ordinate(y)
	  {}
	void setAbs(double x);
	void setOrd(double y);
	double getAbs();
	double getOrd();
};

double calcDistance(Point p1, Point p2);