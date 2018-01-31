#include <iostream>
#include <allegro5\allegro5.h>
#include <allegro5\allegro_primitives.h>

using namespace std;

int main(int argc, char **argv) {

ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP *shape1 = NULL;


	al_init();
	
	al_init_primitives_addon();

	display = al_create_display(640,480);

	al_clear_to_color(al_map_rgb(0, 0, 0));
	

	al_flip_display();

al_draw_filled_rectangle(450,60,120,160,al_map_rgb(55,240,20));

	al_draw_filled_circle(450,150,50,al_map_rgb(50,60,50));

	al_draw_filled_triangle(60,70,150,200,158,150,al_map_rgb(122,255,255));

	al_draw_filled_circle(200, 150, 50, al_map_rgb(50, 60, 50));

	al_draw_filled_rectangle(50, 60, 120, 50, al_map_rgb(55, 240, 20));

	al_flip_display();

	al_rest(10);

	al_destroy_bitmap(shape1);
}