#ifndef GYROSCOPE_H
#define GYROSCOPE

#include <godot_cpp/classes/mesh_instance3d.hpp>

namespace godot {
	class Gyroscope: public MeshInstance3D {
		GDCLASS(Gyroscope, MeshInstance3D)

	private:
		double time_passed;
		double amplitude;
	protected:
		static void _bind_methods();

	public:
		void set_amplitude(const double p_amplitude);
		double get_amplitude() const;

		Gyroscope();

		void _process(double delta) override;
	};

}
#endif