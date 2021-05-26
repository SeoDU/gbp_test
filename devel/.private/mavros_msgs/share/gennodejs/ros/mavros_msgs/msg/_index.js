
"use strict";

let HilGPS = require('./HilGPS.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let WaypointList = require('./WaypointList.js');
let Trajectory = require('./Trajectory.js');
let ParamValue = require('./ParamValue.js');
let LandingTarget = require('./LandingTarget.js');
let RTKBaseline = require('./RTKBaseline.js');
let RCOut = require('./RCOut.js');
let BatteryStatus = require('./BatteryStatus.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let ExtendedState = require('./ExtendedState.js');
let Waypoint = require('./Waypoint.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let ManualControl = require('./ManualControl.js');
let HilSensor = require('./HilSensor.js');
let Altitude = require('./Altitude.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let VehicleInfo = require('./VehicleInfo.js');
let Mavlink = require('./Mavlink.js');
let DebugValue = require('./DebugValue.js');
let RCIn = require('./RCIn.js');
let LogEntry = require('./LogEntry.js');
let WaypointReached = require('./WaypointReached.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let LogData = require('./LogData.js');
let PositionTarget = require('./PositionTarget.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let Param = require('./Param.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let GPSRTK = require('./GPSRTK.js');
let ESCStatus = require('./ESCStatus.js');
let FileEntry = require('./FileEntry.js');
let State = require('./State.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let CommandCode = require('./CommandCode.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ActuatorControl = require('./ActuatorControl.js');
let HilControls = require('./HilControls.js');
let Thrust = require('./Thrust.js');
let MountControl = require('./MountControl.js');
let RadioStatus = require('./RadioStatus.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let VFR_HUD = require('./VFR_HUD.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let ESCInfo = require('./ESCInfo.js');
let HomePosition = require('./HomePosition.js');
let Vibration = require('./Vibration.js');
let RTCM = require('./RTCM.js');
let GPSRAW = require('./GPSRAW.js');
let StatusText = require('./StatusText.js');
let ESCInfoItem = require('./ESCInfoItem.js');

module.exports = {
  HilGPS: HilGPS,
  OpticalFlowRad: OpticalFlowRad,
  WaypointList: WaypointList,
  Trajectory: Trajectory,
  ParamValue: ParamValue,
  LandingTarget: LandingTarget,
  RTKBaseline: RTKBaseline,
  RCOut: RCOut,
  BatteryStatus: BatteryStatus,
  ESCStatusItem: ESCStatusItem,
  ExtendedState: ExtendedState,
  Waypoint: Waypoint,
  AttitudeTarget: AttitudeTarget,
  TimesyncStatus: TimesyncStatus,
  OnboardComputerStatus: OnboardComputerStatus,
  ManualControl: ManualControl,
  HilSensor: HilSensor,
  Altitude: Altitude,
  PlayTuneV2: PlayTuneV2,
  CamIMUStamp: CamIMUStamp,
  VehicleInfo: VehicleInfo,
  Mavlink: Mavlink,
  DebugValue: DebugValue,
  RCIn: RCIn,
  LogEntry: LogEntry,
  WaypointReached: WaypointReached,
  CompanionProcessStatus: CompanionProcessStatus,
  LogData: LogData,
  PositionTarget: PositionTarget,
  HilStateQuaternion: HilStateQuaternion,
  Param: Param,
  ADSBVehicle: ADSBVehicle,
  GPSRTK: GPSRTK,
  ESCStatus: ESCStatus,
  FileEntry: FileEntry,
  State: State,
  HilActuatorControls: HilActuatorControls,
  GlobalPositionTarget: GlobalPositionTarget,
  CommandCode: CommandCode,
  WheelOdomStamped: WheelOdomStamped,
  ActuatorControl: ActuatorControl,
  HilControls: HilControls,
  Thrust: Thrust,
  MountControl: MountControl,
  RadioStatus: RadioStatus,
  OverrideRCIn: OverrideRCIn,
  VFR_HUD: VFR_HUD,
  EstimatorStatus: EstimatorStatus,
  ESCInfo: ESCInfo,
  HomePosition: HomePosition,
  Vibration: Vibration,
  RTCM: RTCM,
  GPSRAW: GPSRAW,
  StatusText: StatusText,
  ESCInfoItem: ESCInfoItem,
};
