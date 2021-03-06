#include <due_can.h>
#include <Pose.h>

class CANProcessor {
  CAN_FRAME lastBrakeSpeedFrame;
  CAN_FRAME lastTransmissionFrame;
  
  public:
    float _speed;
    int _rpm;
    bool newVehicleData();

    bool checkBus(CANRaw *bus);
    bool processFrame(CAN_FRAME &frame);
    void updateDashboard();
    void updateTelemetry(float speed, int rpm);

    Pose pose;
};