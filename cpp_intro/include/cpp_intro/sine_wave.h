#ifndef SINE_WAVE
#define SINE_WAVE

#include <array>
#include <cmath>

/**
 * Take-home assignment 1 for Applied Robotics
 */
class SineWave
{
public:
    /**
     * Constructor
     * @param amplitude The amplitude of the sine wave
     * @param angular_frequency The angular frequency of the sine wave [rad/s]
     */
    SineWave(float amplitude, float angular_frequency);

    /**
     * Default destructor
     */
    ~SineWave() = default;

    /**
     * Computes the sine wave
     */
    void generateWave();

private:
    float amplitude_;
    float omega_;

    std::array<float, 101> sine_wave_; // note: 100 increments of 1 second. add one for 0 seconds
};
#endif // SINE_WAVE