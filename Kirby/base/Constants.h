//
// Created by quokka on 12/10/16.
//

#ifndef KIRBY_CONSTANTS_H
#define KIRBY_CONSTANTS_H

// Tile size
#define TILE_SIZE_X 32
#define TILE_SIZE_Y 32

//Character 
	//Size of sprite
	#define CHARACTER_SIZE_X 32
	#define CHARACTER_SIZE_Y 32
	//Animations
	#define NUM_OF_FRAMES 8
	#define NUM_OF_FRAMES_SLOW 5
	//Movement
	#define MOVEMENT_DEFAULT 2 //How quick character moves
	//Damage
	#define DAMAGED_DISTANCE 4 //How far will character move when damaged per frame
	#define DAMAGED_TIME 15 //How many frames a character is being damaged
	//Jump constants
	#define JUMP_ANGLE_STEP 4
	#define JUMP_HEIGHT 70
	#define FALL_STEP 4
	#define ANGLE_GROUND 180

//Kirby constants
#define INIT_PLAYER_X_TILES 2 //Initial Kirby position
#define INIT_PLAYER_Y_TILES 2
#define MAX_JUMPS 3 //How many time can Kirby jump
#define SWALLOW_DISTANCE 50 //How far can Kirby swallow
#define SWALLOW_VELOCITY_FACTOR 20 //Factor of enemies being swallowed: the smaller, the faster

//Camera size
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 300

//GUI
#define GUI_HEIGHT 60
#define HABILITY_SIZE 20

#endif //KIRBY_CONSTANTS_H