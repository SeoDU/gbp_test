; Auto-generated. Do not edit!


(cl:in-package volumetric_msgs-srv)


;//! \htmlinclude GetChangedPoints-request.msg.html

(cl:defclass <GetChangedPoints-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetChangedPoints-request (<GetChangedPoints-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetChangedPoints-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetChangedPoints-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name volumetric_msgs-srv:<GetChangedPoints-request> is deprecated: use volumetric_msgs-srv:GetChangedPoints-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetChangedPoints-request>) ostream)
  "Serializes a message object of type '<GetChangedPoints-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetChangedPoints-request>) istream)
  "Deserializes a message object of type '<GetChangedPoints-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetChangedPoints-request>)))
  "Returns string type for a service object of type '<GetChangedPoints-request>"
  "volumetric_msgs/GetChangedPointsRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetChangedPoints-request)))
  "Returns string type for a service object of type 'GetChangedPoints-request"
  "volumetric_msgs/GetChangedPointsRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetChangedPoints-request>)))
  "Returns md5sum for a message object of type '<GetChangedPoints-request>"
  "b13aac43ad02af7141713450fbaa2797")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetChangedPoints-request)))
  "Returns md5sum for a message object of type 'GetChangedPoints-request"
  "b13aac43ad02af7141713450fbaa2797")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetChangedPoints-request>)))
  "Returns full string definition for message of type '<GetChangedPoints-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetChangedPoints-request)))
  "Returns full string definition for message of type 'GetChangedPoints-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetChangedPoints-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetChangedPoints-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetChangedPoints-request
))
;//! \htmlinclude GetChangedPoints-response.msg.html

(cl:defclass <GetChangedPoints-response> (roslisp-msg-protocol:ros-message)
  ((size
    :reader size
    :initarg :size
    :type cl:integer
    :initform 0)
   (changed_points
    :reader changed_points
    :initarg :changed_points
    :type (cl:vector geometry_msgs-msg:Vector3)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:Vector3 :initial-element (cl:make-instance 'geometry_msgs-msg:Vector3)))
   (changed_states
    :reader changed_states
    :initarg :changed_states
    :type (cl:vector cl:boolean)
   :initform (cl:make-array 0 :element-type 'cl:boolean :initial-element cl:nil)))
)

(cl:defclass GetChangedPoints-response (<GetChangedPoints-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetChangedPoints-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetChangedPoints-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name volumetric_msgs-srv:<GetChangedPoints-response> is deprecated: use volumetric_msgs-srv:GetChangedPoints-response instead.")))

(cl:ensure-generic-function 'size-val :lambda-list '(m))
(cl:defmethod size-val ((m <GetChangedPoints-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader volumetric_msgs-srv:size-val is deprecated.  Use volumetric_msgs-srv:size instead.")
  (size m))

(cl:ensure-generic-function 'changed_points-val :lambda-list '(m))
(cl:defmethod changed_points-val ((m <GetChangedPoints-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader volumetric_msgs-srv:changed_points-val is deprecated.  Use volumetric_msgs-srv:changed_points instead.")
  (changed_points m))

(cl:ensure-generic-function 'changed_states-val :lambda-list '(m))
(cl:defmethod changed_states-val ((m <GetChangedPoints-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader volumetric_msgs-srv:changed_states-val is deprecated.  Use volumetric_msgs-srv:changed_states instead.")
  (changed_states m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetChangedPoints-response>) ostream)
  "Serializes a message object of type '<GetChangedPoints-response>"
  (cl:let* ((signed (cl:slot-value msg 'size)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'changed_points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'changed_points))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'changed_states))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if ele 1 0)) ostream))
   (cl:slot-value msg 'changed_states))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetChangedPoints-response>) istream)
  "Deserializes a message object of type '<GetChangedPoints-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'size) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'changed_points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'changed_points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:Vector3))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'changed_states) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'changed_states)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:not (cl:zerop (cl:read-byte istream)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetChangedPoints-response>)))
  "Returns string type for a service object of type '<GetChangedPoints-response>"
  "volumetric_msgs/GetChangedPointsResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetChangedPoints-response)))
  "Returns string type for a service object of type 'GetChangedPoints-response"
  "volumetric_msgs/GetChangedPointsResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetChangedPoints-response>)))
  "Returns md5sum for a message object of type '<GetChangedPoints-response>"
  "b13aac43ad02af7141713450fbaa2797")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetChangedPoints-response)))
  "Returns md5sum for a message object of type 'GetChangedPoints-response"
  "b13aac43ad02af7141713450fbaa2797")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetChangedPoints-response>)))
  "Returns full string definition for message of type '<GetChangedPoints-response>"
  (cl:format cl:nil "int32 size~%geometry_msgs/Vector3[] changed_points~%bool[] changed_states~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetChangedPoints-response)))
  "Returns full string definition for message of type 'GetChangedPoints-response"
  (cl:format cl:nil "int32 size~%geometry_msgs/Vector3[] changed_points~%bool[] changed_states~%~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetChangedPoints-response>))
  (cl:+ 0
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'changed_points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'changed_states) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetChangedPoints-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetChangedPoints-response
    (cl:cons ':size (size msg))
    (cl:cons ':changed_points (changed_points msg))
    (cl:cons ':changed_states (changed_states msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetChangedPoints)))
  'GetChangedPoints-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetChangedPoints)))
  'GetChangedPoints-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetChangedPoints)))
  "Returns string type for a service object of type '<GetChangedPoints>"
  "volumetric_msgs/GetChangedPoints")