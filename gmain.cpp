//
// 
//
#include <libOne.h>

void gmain(void)
{
	window(900, 800);
	clear(5, 5, 5);

	float v = 0;
	fill(0, 0, 0, 0);

	while (notQuit)
	{
		v += 1;

		stroke(255, 0, 0, 128);
		circle(v, v, v);

		stroke(255, 255, 0, 128);
		circle(width - v, v, v);

		stroke(0, 255, 0, 128);
		circle(width - v, height - v, v);

		stroke(0, 0, 255, 128);
		circle(v, height - v, v);

	}


}

// End
