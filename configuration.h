#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

// Default video configuration
#define SCREEN_WIDTH    1280
#define SCREEN_HEIGHT   720
#define SCREEN_DEPTH    32

#define FPS 0

// Default boid parameters
#define NUM_BOIDS 1024

#define MAX_BOID_VELOCITY 10
#define MIN_BOID_SEPARATION 3
#define MAX_BOID_STEERING_FORCE 0.2
#define NEIGHBORHOOD_RADIUS 32

typedef struct
{

	struct
	{
		int screen_width, screen_height, screen_depth;

		int frames_per_second;

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