// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

class Constants {
	public:
		static int rightClimbCANID;
		static int shootDirectionCANID;
		static int feedCANID;
		static int leftClimbCANID;
		static int ballFeedCANID;
		static int shooterCANID;
		static int intakeCANID;
		static int leftDriveBackCANID;
		static int leftDriveFrontCANID;
		static int armID;
		static int rightDriveFrontCANID;
		static int rightDriveBackCANID;
};

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */
