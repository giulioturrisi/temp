// Auto-generated. Do not edit!

// (in-package dls_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class rl_signal_out {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.desired_joint_positions = null;
      this.kp = null;
      this.kd = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('desired_joint_positions')) {
        this.desired_joint_positions = initObj.desired_joint_positions
      }
      else {
        this.desired_joint_positions = new Array(12).fill(0);
      }
      if (initObj.hasOwnProperty('kp')) {
        this.kp = initObj.kp
      }
      else {
        this.kp = new Array(12).fill(0);
      }
      if (initObj.hasOwnProperty('kd')) {
        this.kd = initObj.kd
      }
      else {
        this.kd = new Array(12).fill(0);
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type rl_signal_out
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Check that the constant length array field [desired_joint_positions] has the right length
    if (obj.desired_joint_positions.length !== 12) {
      throw new Error('Unable to serialize array field desired_joint_positions - length must be 12')
    }
    // Serialize message field [desired_joint_positions]
    bufferOffset = _arraySerializer.float64(obj.desired_joint_positions, buffer, bufferOffset, 12);
    // Check that the constant length array field [kp] has the right length
    if (obj.kp.length !== 12) {
      throw new Error('Unable to serialize array field kp - length must be 12')
    }
    // Serialize message field [kp]
    bufferOffset = _arraySerializer.float64(obj.kp, buffer, bufferOffset, 12);
    // Check that the constant length array field [kd] has the right length
    if (obj.kd.length !== 12) {
      throw new Error('Unable to serialize array field kd - length must be 12')
    }
    // Serialize message field [kd]
    bufferOffset = _arraySerializer.float64(obj.kd, buffer, bufferOffset, 12);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type rl_signal_out
    let len;
    let data = new rl_signal_out(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [desired_joint_positions]
    data.desired_joint_positions = _arrayDeserializer.float64(buffer, bufferOffset, 12)
    // Deserialize message field [kp]
    data.kp = _arrayDeserializer.float64(buffer, bufferOffset, 12)
    // Deserialize message field [kd]
    data.kd = _arrayDeserializer.float64(buffer, bufferOffset, 12)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 288;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dls_msgs/rl_signal_out';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd058233efee7504b4e269e87b453c168';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header 
    
    float64[12] desired_joint_positions
    float64[12] kp
    float64[12] kd
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new rl_signal_out(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.desired_joint_positions !== undefined) {
      resolved.desired_joint_positions = msg.desired_joint_positions;
    }
    else {
      resolved.desired_joint_positions = new Array(12).fill(0)
    }

    if (msg.kp !== undefined) {
      resolved.kp = msg.kp;
    }
    else {
      resolved.kp = new Array(12).fill(0)
    }

    if (msg.kd !== undefined) {
      resolved.kd = msg.kd;
    }
    else {
      resolved.kd = new Array(12).fill(0)
    }

    return resolved;
    }
};

module.exports = rl_signal_out;
