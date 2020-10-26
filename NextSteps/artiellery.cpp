// Author : Samuel Goyette
// Solution to : https://developers.google.com/edu/c++/next-steps example 1

// Include the cmath library
#include <math.h>
#include <iostream>
#include <stdlib.h>     
#include <time.h>       
using namespace std;

void StartUp() {
	cout << "Welcome to Artillery." << endl;
	cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
	cout << "You have one cannon, which you can shoot at any angle." << endl;
	cout << "You only have 10 cannonballs for this target.." << endl;
	cout << "Let's begin..." << endl;
}

int ShotDist(double in_angle) {
	double Velocity = 200.0; // initial velocity of 200 ft/sec
	double Gravity = 32.2; // gravity for distance calculation

	double time_in_air = (2.0 * Velocity * sin(in_angle)) / Gravity;
	int distance = round((Velocity * cos(in_angle)) * time_in_air);
	return distance;
}

int Shoot() {
	double in_angle;
	int dist;
	cout << "What angle?" << endl;
	cin >> in_angle;
	// convert degree to radian
	double rad = (in_angle * 3.14159) / 180.0;
	int shot_dist = ShotDist(rad);
	return shot_dist;
}

int InitEnemyDist() {
	srand(time(NULL));
	int dist = rand() % 1000 + 1;
	return dist;
}

int Fire(int nb_killed) {
	int enemy_dist = InitEnemyDist();
	int nb_of_shots_left = 10;
	int shot_dist; 
	bool hit = false;
	cout << "The enemy is " << enemy_dist << " feet away!" << endl;
	do {
		shot_dist = Shoot();
		if (abs(shot_dist - enemy_dist) <= 1) {
			cout << "You killed the enemy!" << endl;
			cout << "It took you " << 10 - nb_of_shots_left + 1 << " shells." << endl;
			nb_killed += 1;
			hit = true; 
		}
		else {
			if (shot_dist > enemy_dist) {
				cout << "You overshot by " << abs(shot_dist - enemy_dist) << " feet." << endl;
			}
			else {
				cout << "You undershot by " << abs(shot_dist - enemy_dist) << " feet." << endl;
			}
		}
		nb_of_shots_left += -1;
	} while ((nb_of_shots_left > 0) && (hit == false));
	if (nb_of_shots_left == 0) {
		cout << "No more shells left :(" << endl;
	}

	return nb_killed;
}

int game() {
	StartUp();
	int nb_killed = 0;
	char cont = 'Y'; 
	do {
		nb_killed = Fire(nb_killed);
		cout << "You killed " << nb_killed << " enemies. Do you want to continue? (Y/N)" << endl;
		cin >> cont;
	} while ((cont == 'Y') || (cont == 'y'));
	return 0;
}