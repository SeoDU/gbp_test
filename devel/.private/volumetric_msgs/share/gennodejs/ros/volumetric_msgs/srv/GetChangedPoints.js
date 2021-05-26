// Auto-generated. Do not edit!

// (in-package volumetric_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class GetChangedPointsRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetChangedPointsRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetChangedPointsRequest
    let len;
    let data = new GetChangedPointsRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'volumetric_msgs/GetChangedPointsRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetChangedPointsRequest(null);
    return resolved;
    }
};

class GetChangedPointsResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.size = null;
      this.changed_points = null;
      this.changed_states = null;
    }
    else {
      if (initObj.hasOwnProperty('size')) {
        this.size = initObj.size
      }
      else {
        this.size = 0;
      }
      if (initObj.hasOwnProperty('changed_points')) {
        this.changed_points = initObj.changed_points
      }
      else {
        this.changed_points = [];
      }
      if (initObj.hasOwnProperty('changed_states')) {
        this.changed_states = initObj.changed_states
      }
      else {
        this.changed_states = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetChangedPointsResponse
    // Serialize message field [size]
    bufferOffset = _serializer.int32(obj.size, buffer, bufferOffset);
    // Serialize message field [changed_points]
    // Serialize the length for message field [changed_points]
    bufferOffset = _serializer.uint32(obj.changed_points.length, buffer, bufferOffset);
    obj.changed_points.forEach((val) => {
      bufferOffset = geometry_msgs.msg.Vector3.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [changed_states]
    bufferOffset = _arraySerializer.bool(obj.changed_states, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetChangedPointsResponse
    let len;
    let data = new GetChangedPointsResponse(null);
    // Deserialize message field [size]
    data.size = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [changed_points]
    // Deserialize array length for message field [changed_points]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.changed_points = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.changed_points[i] = geometry_msgs.msg.Vector3.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [changed_states]
    data.changed_states = _arrayDeserializer.bool(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 24 * object.changed_points.length;
    length += object.changed_states.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a service object
    return 'volumetric_msgs/GetChangedPointsResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b13aac43ad02af7141713450fbaa2797';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 size
    geometry_msgs/Vector3[] changed_points
    bool[] changed_states
    
    
    ================================================================================
    MSG: geometry_msgs/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetChangedPointsResponse(null);
    if (msg.size !== undefined) {
      resolved.size = msg.size;
    }
    else {
      resolved.size = 0
    }

    if (msg.changed_points !== undefined) {
      resolved.changed_points = new Array(msg.changed_points.length);
      for (let i = 0; i < resolved.changed_points.length; ++i) {
        resolved.changed_points[i] = geometry_msgs.msg.Vector3.Resolve(msg.changed_points[i]);
      }
    }
    else {
      resolved.changed_points = []
    }

    if (msg.changed_states !== undefined) {
      resolved.changed_states = msg.changed_states;
    }
    else {
      resolved.changed_states = []
    }

    return resolved;
    }
};

module.exports = {
  Request: GetChangedPointsRequest,
  Response: GetChangedPointsResponse,
  md5sum() { return 'b13aac43ad02af7141713450fbaa2797'; },
  datatype() { return 'volumetric_msgs/GetChangedPoints'; }
};
