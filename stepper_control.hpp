#ifndef _STEPPER_CONTROL_H
#define _STEPPER_CONTROL_H

/*
    eSTATE type represente the differents state of a pin
    LOW represente 0V, HIGH represente 1
*/
typedef enum {
    LOW = 0, // 0 Volt
    HIGH
} eSTATE;

class stepper_control
{
private:
    int speed;
public:
    /*
        Constructors
    */
    // default constructor
    stepper_control();
    
    /*
        Getter & Setter 
    */
    void set_speed(int speed);
    int get_speed() const;

    ~stepper_control();
};

#endif //_STEPPER_CONTROL_H