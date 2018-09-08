#pragma config(Motor,  port1,           ClawLeft,      tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           LeftBackMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           RightBackMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           LeftFrontMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           RightFrontMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           LiftUpperLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           LiftLowerLeft, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           LiftUpperRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           LiftLowerRight, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          ClawRight,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma DebuggerWindows("debugStream")
#pragma DebuggerWindows("vexCompetitionControl")

//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

#include "chassis.c"
#include "gun.c"
#include "tower.c"
#include "intake.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

task main()
{
  startTask(chassis_control);
  startTask(gun_control);
  startTask(tower_control);
  startTask(intake_control);

  while (true)
  {
    //checkAutonomous();
  	printSensorValuesToDebugWindow();
    wait(1);
  }
}
