#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include <SDL.h>

// Number of worker threads used to update boids
#define NUM_THREADS 4

// Default video configuration
#define SCREEN_WIDTH    1280
#define SCREEN_HEIGHT   720
#define SCREEN_DEPTH    32

#define FPS 0

#define DRAW_ANCHOR 0

// Default boid parameters
#define NUM_BOIDS 2048

#define MAX_BOID_VELOCITY 10
#define MIN_BOID_SEPARATION 3
#define MAX_BOID_STEERING_FORCE 0.05
#define NEIGHBORHOOD_RADIUS 25

typedef struct
{
	SDL_Surface* boid_sprite;
	SDL_Surface* anchor_sprite;

	int num_threads;

	struct
	{
		int screen_width, screen_height, screen_depth;

		int frames_per_second;

		int draw_anchor;

	} video;

	struct
	{
		int num_boids;

		int max_boid_velocity;
		int min_boid_separation;
		float max_boid_steering_force;
		int neighborhood_radius;

	} flock;

} configuration;

#endif
