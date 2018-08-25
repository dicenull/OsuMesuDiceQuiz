
# include <Siv3D.hpp>
#include "CreateDice.h"

void Main()
{
	CreateDice createDice;

	const Font font(30);
	
	const Texture mesuTexture(createDice.MesuImage(), TextureDesc::For3D);
	const Texture osuTexture(createDice.OsuImage(), TextureDesc::For3D);

	const Mesh diceMesh(MeshData::Box6(1.0));

	Stopwatch stopwatch(true);

	Texture texture = RandomBool() ? mesuTexture : osuTexture;

	Print(L"Left : Mesu", L"Right : Osu");
	
	while (System::Update())
	{
		if (Input::MouseL.clicked || Input::MouseR.clicked)
		{
			Rect(Window::Size()).draw(Palette::Green);

			String type = texture == mesuTexture ? L"メスサイコロ" : L"オスサイコロ";

			if (Input::MouseL.clicked && texture == mesuTexture
				|| Input::MouseR.clicked && texture == osuTexture)
			{
				font(L"正解!").drawCenter(Window::Center() + Point(0, -50));
			}
			else
			{
				font(L"不正解!").drawCenter(Window::Center() + Point(0, -50));
			}
			font(type).drawCenter(Window::Center());
			font(L"何かキーを押して再開").drawCenter(Window::Center() + Point(0, 50));

			WaitKey();
			
			texture = RandomBool() ? mesuTexture : osuTexture;
		}
		
		ClearPrint();

		const double t = stopwatch.ms() / 1000.0;

		diceMesh
			.scaled(5)
			.rotated(Quaternion::Pitch(45))
			.rotated(Quaternion::Yaw(60))
			.rotated(Quaternion::Yaw(t))
			.draw(texture);

		// Print(texture == osuTexture ? L"osu" : L"mesu");
	}
}
