double angleClock(int hour, int minutes) {
    double hourAngle = (hour % 12) * 30 + minutes * 0.5;
    double minuteAngle = minutes * 6;

    double angle = hourAngle - minuteAngle;

    if (angle < 0)
        angle = -angle;

    if (angle > 180)
        angle = 360 - angle;

    return angle;
}