'!TITLE "Cognex API Setting"

#Include <Variant.h>

'========================================================================================
'User Data
'========================================================================================

#Define _VIS_HMI_COM_ 	8	'Specify Comm line for Vision HMI
#Define _VIS_DEV_COM_ 	9	'Specify Comm line for Vision Camera

'Specify Where to start saving Train Positions (default P90)
#Define _TRAIN_POS_OFFSET_ 	90	
#Define _TRAIN_POS_0_	(0 + _TRAIN_POS_OFFSET_)
#Define _TRAIN_POS_1_	(1 + _TRAIN_POS_OFFSET_)
#Define _TRAIN_POS_2_	(2 + _TRAIN_POS_OFFSET_)
#Define _TRAIN_POS_3_	(3 + _TRAIN_POS_OFFSET_)
#Define _TRAIN_POS_4_	(4 + _TRAIN_POS_OFFSET_)

'========================================================================================
'API Data
'========================================================================================

#Define CGNX_API_VER	"1.7.0-alpha"
#Define SUCCEEDED		1
#Define FAILED			0
