#include <AstUtils.h>
// Program constants
#define ECHO_GAIN 0.5f
#define ECHO_DELAY_MS 300
/**
 * Represents 32-bit floating-point audio samples and audio format.
 */
struct AudioData {
    /** Pointer to the audio samples. */
    float *samples;
    /** The number of audio samples. */
    int numSamples;
    /** The sample rate in samples per second. */
    int sampleRate;
    /** The number of audio interleaved audio channels. */
    int channels;
};
/**
 * Loads audio data form a file.
 *
 * @param filename the file name including the path
 * @return structure containing audio and format information
 */
AudioData LoadAudioFile(const char filename[])
{
    // TODO use `ReadAudio` function from ASTU to load audio file and
    // Check for errors and return nullptr or initialize data of
    // `AudioData` struct and return it.
}
/**
 * Stores audio data to a file.
 *
 * @param audio the audio data structure
 * @param filename the filename including the path
 * @return `true` on success, `false` otherwise
 */
bool StoreAudioFile(const AudioData *audio, const char filename[])
{
    // TODO use `WriteAudio` function from ASTU to store audio file
    // Check for errors and return true/false accordingly.
}
/**
 * Converts milliseconds to samples.
 *
 * @param ms time in milliseconds
 * @param sampleRate the sample rate in samples per second
 * @return the number of samples equivalent to the given duration
 */
int MillisecondsToSamples(int ms, int sampleRate)
{
    return RoundToInt(sampleRate * (ms / 1000.0));
}
/**
 * Prints the error message and error details of the last error.
 */
void ReportError()
{
    SayText( "An error has occurred:" );
    SayText( GetLastErrorMessage() );
    SayText( GetErrorDetails() );
}
/**
 * Release allocated memory and resets data structure.
 *
 * @param audio the audio data structure to clean up
 */
void CleanUp(AudioData *audio)
{
    // TODO release memory of samples array
    // set pointer to float buffer to `nullptr`
    // nullify other values
}
/**
 * Increases the size of an audio signal by adding silence.
 *
 * @param audio the audio data structure
 * @param extraSamples the number of extra samples to add
 */
void ExtendAudio(AudioData *audio, int extraSamples)
{
    // TODO extend sample array in audio data
}
/**
 * Adds a single echo to the audio signal.
 * This functions operates in-place.
 *
 * @param audio the audio data structure
 * @param delayInSamples the delay of the echo in samples
 * @param gain the attenuation of the echo
 */
void AddEcho(AudioData *audio, int delayInSamples, float gain)
{
    // TODO generate echo in-place
}
int main()
{
    const char* inFilename
            = AskString("Enter file name of input audio file:");

    const char* outFilename
            = AskString("Enter file name of output audio file:");

    AudioData audio = LoadAudioFile(inFilename);
    if (HasError()) {
        ReportError();
        return -1;
    }
    if (audio.channels != 1) {
        SayText("Multi-channel audio files not supported.");
        CleanUp(&audio);
        return -1;
    }

    // TODO calculate delay in samples
    // TODO extend audio
    // TODO add echo

    if (!StoreAudioFile(&audio, outFilename)) {
        ReportError();
        CleanUp(&audio);
        return -1;
    }
    // TODO Cleanup

    return 0;
}