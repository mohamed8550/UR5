
"use strict";

let Analog = require('./Analog.js');
let IOStates = require('./IOStates.js');
let ToolDataMsg = require('./ToolDataMsg.js');
let MasterboardDataMsg = require('./MasterboardDataMsg.js');
let RobotStateRTMsg = require('./RobotStateRTMsg.js');
let RobotModeDataMsg = require('./RobotModeDataMsg.js');
let Digital = require('./Digital.js');

module.exports = {
  Analog: Analog,
  IOStates: IOStates,
  ToolDataMsg: ToolDataMsg,
  MasterboardDataMsg: MasterboardDataMsg,
  RobotStateRTMsg: RobotStateRTMsg,
  RobotModeDataMsg: RobotModeDataMsg,
  Digital: Digital,
};
