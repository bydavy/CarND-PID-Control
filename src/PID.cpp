#include "PID.h"

PID::PID() : p_error(0), i_error(0), d_error(0) {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  double prev_p_error = p_error;
  // Proportional
  p_error = cte;
  // Integral
  i_error += cte; // FIXME Can we overflow if we start way too far from target ?
  // Differential
  d_error = cte - prev_p_error;
}

double PID::TotalError() {
  return -Kp*p_error -Ki*i_error -Kd*d_error;
}
