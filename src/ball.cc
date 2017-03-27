#include "ball.h"

ball::ball() : x(0), y(0) {}

int ball::get_x() const { return x; }
int ball::get_y() const { return y; }
void ball::set_x(int value) {x = value}
void ball::set_y(int value) {y = value}


