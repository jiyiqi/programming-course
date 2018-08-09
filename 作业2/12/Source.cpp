#include <vector>
#include "Shape.h"
#include "ThreeDimensionalShape.h"
#include "TwoDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h" 
#include "typeinfo"

int main()
{
	vector < Shape* > shapes (4);

	shapes[0] = new Circle(3.5 ,6 ,9);
	shapes[1] = new Square(12 , 2 , 2);
	shapes[2] = new Sphere(5 , 1.5 , 4.5);
	shapes[3] = new Cube (2.2);

	for (int i = 0 ; i < 4 ; i++)
	{
		cout << *( shapes[i] ) << endl;
		
		TwoDimensionalShape * TwoDimensionalShapePtr = dynamic_cast < TwoDimensionalShape * > (shapes[i]) ;

		if (TwoDimensionalShapePtr != 0)
		{
			cout << "Area: " << TwoDimensionalShapePtr -> getarea() << endl;
		}

		ThreeDimensionalShape * ThreeDimensionalShapePtr =  dynamic_cast < ThreeDimensionalShape * > (shapes[i]);

		if (ThreeDimensionalShapePtr != 0)
		{
			cout << "Area: " << ThreeDimensionalShapePtr -> getarea() << endl;
			cout << "Volune: " << ThreeDimensionalShapePtr -> getvolume() << endl;
		}
		cout << endl;
	}
	system("pause");
}