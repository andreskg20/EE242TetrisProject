// Wall -- the wall is off the left side of the screen. Its purpose is to be an
// obstacle for the pipes so they can be destroyed after they move off screen.

#include "Thing.h"
#include "Vector2d.h"
#include "PolygonShape.h"
#include "Color.h"

#include "Wall.h"

// Put the wall off the screen as a thin rectangle
Wall::Wall() : Thing(Vector2d(-50, 0), new PolygonShape())
{
	// add points to the shape
	PolygonShape *p = dynamic_cast<PolygonShape*>(shape);
	p->addPoint(Vector2d(0, 0));
	p->addPoint(Vector2d(1, 0));
	p->addPoint(Vector2d(1, 600));
	p->addPoint(Vector2d(0, 600));
	p->setFill(Color::Transparent);
}

Wall::~Wall()
{
	delete shape;
}

void Wall::handleCollision(const Thing* other)
{
	// ignore collisions
}