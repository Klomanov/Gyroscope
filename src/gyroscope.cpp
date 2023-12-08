#include "gyroscope.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void Gyroscope::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_amplitude"), &Gyroscope::get_amplitude);
	ClassDB::bind_method(D_METHOD("set_amplitude", "p_amplitude"), &Gyroscope::set_amplitude);
	ClassDB::add_property("Gyroscope", PropertyInfo(Variant::FLOAT, "amplitude"), "set_amplitude", "get_amplitude");
}

Gyroscope::Gyroscope() {
	time_passed = 0.0;
	amplitude = 10.0;
}

void Gyroscope::_process(double delta) {
	time_passed += delta;

	rotate_y(amplitude);
}

void Gyroscope::set_amplitude(const double p_amplitude) {
	amplitude = p_amplitude;
}

double Gyroscope::get_amplitude() const {
	return amplitude;
}