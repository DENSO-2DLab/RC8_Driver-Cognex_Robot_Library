# RC8-Cognex-Robot-Library

The Cognex Provided robot function library provides high level functions that can be called from the customer's robot application program.

### Contents

Driver for easy integration between Cognex Vision systems and RC8/RC8A Controller. 

### System Requirements

- RC8 Controller 
- Wincaps III

### Contributing 

Feel free to contribute by fixing any bugs and adding new features to this repository. 
Once you are ready to share open a new pull request or generate an Issue. 

### License 

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

### Release Notes

**Please read carefully before using this version.**
\+ Supported Tools, - Non-supported Tools

**v.1.6.25**
\+ Allows Vision HMI to act as the client (per Issue #3 )

**v1.6.24**
\+ Added Singularity avoidance feature when moving
\+ Set all motion figures to Auto Fig -2. (per Issue #1 )

**v1.6.23**
Integration of Vision_Lib functions with new DPAM_stdlib function
Minor Bug Fixes

**v1.6.9**
\+ CGNX_HE Function Added
\+ CGNX_HEB Function Added
\+ CGNX_HECalib2D Function Added
\+ CGNX_TVGR Function Added
\+ CGNX_XVGR Function Added
\+ CGNX_RunVGR Function Added
\+ CGNX_RunVGRPicked Function Added
\+ CGNX_TrainVGRMotion Function Added
\+ CGNX_TrainVGRTarget Function Added
\+ CGNX_TT Function Added
\+ CGNX_TTR Function Added
\+ CGNX_XT Function Added

**v1.4.0**
\+ CGNX_CAL Function Added
\+ CGNX_AC Function Added
\+ CGNX_ACB Function Added
\+ CGNX_AutoCalib Function Added (2D Only)

**v1.3.1**
Same functionality as before but the API is broken down into separate files per function to make version control more flexible.

Please read carefully before using this version.
\+ Supported Tools, - Non-supported Tools

**v1.3.0**
\+ SS Command Enabled
\+ TP Command Enabled
\+ SO Command Enabled

**v1.2.0**
\+ MJ Command Enabled

**v1.1.0**
\+ GS Command Added
\+ MP Command Added

**v1.0.0**
\+ Base program for EasySetup (Denso-VisionHMI Communication)
\+ Base program for API (Cognex-Denso Communication)
\+ MR Command added
\+ GV Command added
\- SS command removed (failed HMI tester)