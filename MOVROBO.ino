//MOVIMENTO DO ROBO
			
void robot_forward(unsigned char v)
{

  motor4.setSpeed(v);
  motor4.run(FORWARD); 
  motor2.setSpeed(v);
  motor2.run(FORWARD);

} //end robot forward

void robot_backward(unsigned char v)
{
  motor4.setSpeed(v);
  motor4.run(BACKWARD); 
  motor2.setSpeed(v);
  motor2.run(BACKWARD);
} //end robot backward

void robot_right(unsigned char v)
{
  motor4.setSpeed(v);
  motor4.run(FORWARD);
  motor2.setSpeed(210);
  motor2.run(BACKWARD);


} //end robot left

void robot_left(unsigned char v)
{

  motor2.setSpeed(v);
  motor2.run(FORWARD);
  motor4.setSpeed(210);
  motor4.run(BACKWARD);

  
} //end robot right


void robot_stop(unsigned char v)
{
  motor2.setSpeed(v);
  motor2.run(RELEASE);
  motor4.setSpeed(v);
  motor4.run(RELEASE);
}
