
void robot_backward(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(BACKWARD);
  motor2.setSpeed(v);
  motor2.run(FORWARD);


}  //end robot forward

void robot_forward(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(FORWARD);
  motor2.setSpeed(v);
  motor2.run(BACKWARD);

}  //end robot backward

void robot_left(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(BACKWARD);
  motor2.setSpeed(v);
  motor2.run(FORWARD);
}  //end robot left

void robot_right(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(FORWARD);
  motor2.setSpeed(v);
  motor2.run(BACKWARD);
}  //end robot left


void robot_stop(unsigned char v) {
  motor1.setSpeed(v);
  motor1.run(RELEASE);
  motor2.setSpeed(v);
  motor2.run(RELEASE);
}

