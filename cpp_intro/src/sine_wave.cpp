#include <cpp_intro/sine_wave.h>

SineWave::SineWave(float amplitude, float angular_frequency) 
    : amplitude_(amplitude), omega_(angular_frequency)
{
}

void SineWave::generateWave()
{
    for (unsigned int i = 0; i < sine_wave_.size(); i++)
    {
        double time = i; // note that we have an increment of 1 second.
        sine_wave_[i] = amplitude_ * std::sin(omega_*time);
    }
}

int main()
{
    SineWave sine_wave(10,100); // amplitude of 10 and frequency of 100 rad/s
    sine_wave.generateWave();
    return 0;
}