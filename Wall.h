// Class to represent a wall in the Pong game

#pragma once

#include "Thing.h"
#include "Vector2d.h"

class Wall :
	public Thing
{
public:
	Wall(const Vector2d& ul, const Vector2d& lr, const Vector2d& normal);
	~Wall();

	// handle collisions
	void handleCollision(const Thing* other);

	// Getter
	const Vector2d getNormal() const;

private:
	Vector2d n;				// normal vector pointing away from wall
};

