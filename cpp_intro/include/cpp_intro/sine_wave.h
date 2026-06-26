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
     * @param frequency The frequency of the sine wave [rad/s]
     */
    SineWave(float amplitude, float frequency);

    /**
     * Default destructor
     */
    ~SineWave() = default;

    /**
     * Computes the sine wave
     */
    void computeWave();

private:
    float amplitude_;
    float frequency_;

    std::array<float, 101> sine_wave_; // note: 100 increments of 1 second. add one for 0 seconds
};
#endif // SINE_WAVE