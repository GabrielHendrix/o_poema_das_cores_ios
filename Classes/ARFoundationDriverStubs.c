#include <stdint.h>

// Stubs para satisfazer a ligação do linker do Vuforia quando o ARFoundationDriver não está presente
void arfoundationDriverAddCameraFrameAndPose(void) {}
void arfoundationDriverAnchorsUpdated(void) {}
void arfoundationDriverSetCameraMode(int mode) {}
void arfoundationDriverSetCreateAnchorMethod(void* method) {}
void arfoundationDriverSetRemoveAnchorMethod(void* method) {}
