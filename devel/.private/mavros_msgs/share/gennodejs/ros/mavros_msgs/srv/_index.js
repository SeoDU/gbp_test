
"use strict";

let VehicleInfoGet = require('./VehicleInfoGet.js')
let CommandInt = require('./CommandInt.js')
let CommandBool = require('./CommandBool.js')
let LogRequestData = require('./LogRequestData.js')
let ParamSet = require('./ParamSet.js')
let FileRename = require('./FileRename.js')
let FileClose = require('./FileClose.js')
let FileChecksum = require('./FileChecksum.js')
let FileOpen = require('./FileOpen.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let FileMakeDir = require('./FileMakeDir.js')
let WaypointPull = require('./WaypointPull.js')
let ParamPush = require('./ParamPush.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandTOL = require('./CommandTOL.js')
let SetMavFrame = require('./SetMavFrame.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let LogRequestList = require('./LogRequestList.js')
let CommandHome = require('./CommandHome.js')
let WaypointPush = require('./WaypointPush.js')
let CommandLong = require('./CommandLong.js')
let ParamGet = require('./ParamGet.js')
let SetMode = require('./SetMode.js')
let FileTruncate = require('./FileTruncate.js')
let StreamRate = require('./StreamRate.js')
let FileList = require('./FileList.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileRemove = require('./FileRemove.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let MessageInterval = require('./MessageInterval.js')
let MountConfigure = require('./MountConfigure.js')
let WaypointClear = require('./WaypointClear.js')
let FileWrite = require('./FileWrite.js')
let FileRead = require('./FileRead.js')
let ParamPull = require('./ParamPull.js')

module.exports = {
  VehicleInfoGet: VehicleInfoGet,
  CommandInt: CommandInt,
  CommandBool: CommandBool,
  LogRequestData: LogRequestData,
  ParamSet: ParamSet,
  FileRename: FileRename,
  FileClose: FileClose,
  FileChecksum: FileChecksum,
  FileOpen: FileOpen,
  CommandVtolTransition: CommandVtolTransition,
  FileMakeDir: FileMakeDir,
  WaypointPull: WaypointPull,
  ParamPush: ParamPush,
  CommandTriggerControl: CommandTriggerControl,
  CommandTOL: CommandTOL,
  SetMavFrame: SetMavFrame,
  WaypointSetCurrent: WaypointSetCurrent,
  LogRequestList: LogRequestList,
  CommandHome: CommandHome,
  WaypointPush: WaypointPush,
  CommandLong: CommandLong,
  ParamGet: ParamGet,
  SetMode: SetMode,
  FileTruncate: FileTruncate,
  StreamRate: StreamRate,
  FileList: FileList,
  CommandTriggerInterval: CommandTriggerInterval,
  FileRemove: FileRemove,
  FileRemoveDir: FileRemoveDir,
  LogRequestEnd: LogRequestEnd,
  MessageInterval: MessageInterval,
  MountConfigure: MountConfigure,
  WaypointClear: WaypointClear,
  FileWrite: FileWrite,
  FileRead: FileRead,
  ParamPull: ParamPull,
};
