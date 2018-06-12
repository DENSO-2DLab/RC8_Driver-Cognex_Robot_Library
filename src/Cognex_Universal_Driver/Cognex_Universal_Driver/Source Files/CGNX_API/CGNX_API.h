'!TITLE "Cognex API Setting"

#Include <Variant.h>

'========================================================================================
'User Data (PLEASE SETUP THIS SECTION ACCORDINGLY)
'========================================================================================

'
'Comms Settings
'
#Define _VIS_HMI_COM_ 	8	'Specify Comm line for Vision HMI
#Define _VIS_DEV_COM_ 	9	'Specify Comm line for Vision Camera

'
'EasySetup Program Settings
'
#Define _WORKING_TOOL_	1					   ' Tool Offset to be configured 
#Define _TRAIN_POS_OFFSET_	90				   ' Trained Pos Index Start (default P90)
#Define _TRAIN_POS_0_ (0 + _TRAIN_POS_OFFSET_) ' Home Pos
#Define _TRAIN_POS_1_ (1 + _TRAIN_POS_OFFSET_) ' Calibration Start Pos
#Define _TRAIN_POS_2_ (2 + _TRAIN_POS_OFFSET_) ' Trained Pick Pos (StepID=1)
#Define _TRAIN_POS_3_ (3 + _TRAIN_POS_OFFSET_) ' Trained VGR(Picked) position (StepID=2)
#Define _TRAIN_POS_4_ (4 + _TRAIN_POS_OFFSET_) ' Trained Place Pos (StepID=3)

'========================================================================================
'========================================================================================
'=============================DO NOT EDIT BELOW THIS SECTION=============================
'========================================================================================
'========================================================================================

'========================================================================================
'API Data
'========================================================================================

#Define CGNX_API_VER	"2.0.1"
#Define SUCCEEDED		1
#Define FAILED			0

'========================================================================================
' + Initialization / Close
' 	Communication line number (IP address of PC, Port number [23], Delimiter [LF])
' + Reception/Transmisison (Denso to Cognex Commands)
' + Reception/Transmisison (Cognex to Denso Commands)
'========================================================================================
#Include "CGNX_Comm.pcs"

'========================================================================================
' + Cognex Vision Library Functions
'   (For function details, refer to Cognex Robot Library manual.)
' + Convenience Functions
'========================================================================================
#Include "CGNX_Lib.pcs"

'========================================================================================
' + Cognex Vision HMI Functions
'   (For function details, refer to Cognex Robot Library manual.)
' + Application Commands
'======================================================================================== 
#Include "CGNX_HMI.pcs"

'========================================================================================
' + Utility Functions
'========================================================================================
#Include "CGNX_RobotSub.pcs"
