#include <cpp_intro/sine_wave.h>

SineWave::SineWave(float amplitude, float frequency) 
    : amplitude_(amplitude), frequency_(frequency)
{
}

void SineWave::computeWave()
{
    for (unsigned int i = 0; i < sine_wave_.size(); i++)
    {
        sine_wave_[i] = amplitude_ * std::sin(frequency_*i);
    }
}

int main()
{
    SineWave sine_wave(10,100); // amplitude of 10 and frequency of 100 rad/s
    sine_wave.computeWave();
    return 0;
}