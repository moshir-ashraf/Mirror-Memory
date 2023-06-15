#include "Block.h"
Block::Block(Label^ x, Label^ y, Button^ z) {
	showhide = x; showhide->Hide();
	alwaysshow = y; alwaysshow->Hide();
	btn = z;
}
void Block::Link(Block^ x)
{
	Linked = x;
}

void Block::toogle(bool x)
{
	if (x == true) showhide->Show();
	else showhide->Hide();
}

void Block::correct()
{
	alwaysshow->Show();
	Linked->alwaysshow->Show();
}
