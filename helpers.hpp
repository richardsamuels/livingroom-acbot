int state_str_to_enum(const std::string& s) {
  if (s == "Fan") {
    return 2;
  } else if (s == "Energy Saver") {
    return 1;
  } else { // AC
    return 0;
  }
}
auto mode_servo_trigger_3x = button_buttonpresstrigger_4;
auto mode_servo_trigger_2x = button_buttonpresstrigger_3;
auto mode_servo_trigger_1x = button_buttonpresstrigger_2;
