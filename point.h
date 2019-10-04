
#ifndef POINT_H
#define POINT_H

class Point{
  public:
		Point(double x, double y);

		void display();
		static int counter();
		double distance(const Point& other) const;
		static double distance(const Point& p1, const Point& p2);

		double get_x() const;
		double get_y() const;
		int get_id() const;
		void set_x(double val);
		void set_y(double val);
		void set_id(int val);

  private:
		double x;
		double y;
		int id;
		static int count;
};

#endif