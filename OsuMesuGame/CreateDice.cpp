#include "CreateDice.h"

Image CreateDice::MesuImage(int32 resolution)
{
	Image image(resolution * 3, resolution * 2, Palette::White);

	const double r = resolution / 100.0;

	// [1]
	Circle(r * 50, r * 50, r * 18).write(image, Palette::Red);

	// [2]
	Circle(r * 122, r * 22, r * 11).write(image, Palette::Black);
	Circle(r * 178, r * 78, r * 11).write(image, Palette::Black);

	// [3]
	Circle(r * 278, r * 22, r * 11).write(image, Palette::Black);
	Circle(r * 250, r * 50, r * 11).write(image, Palette::Black);
	Circle(r * 222, r * 78, r * 11).write(image, Palette::Black);

	// [4]
	Circle(r * 122, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 122, r * 178, r * 11).write(image, Palette::Black);
	Circle(r * 178, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 178, r * 178, r * 11).write(image, Palette::Black);

	// [5]
	Circle(r * 22, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 22, r * 178, r * 11).write(image, Palette::Black);
	Circle(r * 50, r * 150, r * 11).write(image, Palette::Black);
	Circle(r * 78, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 78, r * 178, r * 11).write(image, Palette::Black);

	// [6]
	Circle(r * 227, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 227, r * 150, r * 11).write(image, Palette::Black);
	Circle(r * 227, r * 178, r * 11).write(image, Palette::Black);
	Circle(r * 273, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 273, r * 150, r * 11).write(image, Palette::Black);
	Circle(r * 273, r * 178, r * 11).write(image, Palette::Black);

	return image.fit(resolution, resolution);
}

Image CreateDice::OsuImage(int32 resolution)
{
	Image image(resolution * 3, resolution * 2, Palette::White);

	const double r = resolution / 100.0;

	// [1]
	Circle(r * 50, r * 50, r * 18).write(image, Palette::Red);

	// [3]
	Circle(r * 178, r * 22, r * 11).write(image, Palette::Black);
	Circle(r * 150, r * 50, r * 11).write(image, Palette::Black);
	Circle(r * 122, r * 78, r * 11).write(image, Palette::Black);
	
	// [2]
	Circle(r * 222, r * 22, r * 11).write(image, Palette::Black);
	Circle(r * 278, r * 78, r * 11).write(image, Palette::Black);

	// [5]
	Circle(r * 122, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 122, r * 178, r * 11).write(image, Palette::Black);
	Circle(r * 150, r * 150, r * 11).write(image, Palette::Black);
	Circle(r * 178, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 178, r * 178, r * 11).write(image, Palette::Black);

	// [4]
	Circle(r * 22, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 22, r * 178, r * 11).write(image, Palette::Black);
	Circle(r * 78, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 78, r * 178, r * 11).write(image, Palette::Black);

	// [6]
	Circle(r * 227, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 227, r * 150, r * 11).write(image, Palette::Black);
	Circle(r * 227, r * 178, r * 11).write(image, Palette::Black);
	Circle(r * 273, r * 122, r * 11).write(image, Palette::Black);
	Circle(r * 273, r * 150, r * 11).write(image, Palette::Black);
	Circle(r * 273, r * 178, r * 11).write(image, Palette::Black);

	return image.fit(resolution, resolution);
}

CreateDice::CreateDice()
{
}
