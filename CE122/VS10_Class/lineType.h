class lineType{
  double a;
  double b;
  double c;
public:
  void display();
  bool isParallel(lineType);
  bool intersect(lineType,double,double);
  lineType(double,double,double);
};
