'!TITLE "Cognex API Setting"

#Include <Variant.h>

'========================================================================================
'User Data
'========================================================================================

#Define _VIS_HMI_COM_ 	8	'Specify Comm line for Vision HMI
#Define _VIS_DEV_COM_ 	9	'Specify Comm line for Vision Camera

' EasySetup Program Settings
#Define _WORKING_TOOL_	1							' Tool Offset to be configured 
#Define _TRAIN_POS_OFFSET_ 	90						' Trained Pos Index Start (default P90)
#Define _TRAIN_POS_0_	(0 + _TRAIN_POS_OFFSET_)	' Home Pos
#Define _TRAIN_POS_1_	(1 + _TRAIN_POS_OFFSET_)	' Calibration Start Pos
#Define _TRAIN_POS_2_	(2 + _TRAIN_POS_OFFSET_)	' Trained Pick Pos (StepID=1)
#Define _TRAIN_POS_3_	(3 + _TRAIN_POS_OFFSET_)	' Trained VGR(Picked) position (StepID=2)
#Define _TRAIN_POS_4_	(4 + _TRAIN_POS_OFFSET_)	' Trained Place Pos (StepID=3)

'========================================================================================
'API Data
'========================================================================================

#Define CGNX_API_VER	"1.7.5"
#Define SUCCEEDED		1
#Define FAILED			0
