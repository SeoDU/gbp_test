;; Auto-generated. Do not edit!


(when (boundp 'volumetric_msgs::GetChangedPoints)
  (if (not (find-package "VOLUMETRIC_MSGS"))
    (make-package "VOLUMETRIC_MSGS"))
  (shadow 'GetChangedPoints (find-package "VOLUMETRIC_MSGS")))
(unless (find-package "VOLUMETRIC_MSGS::GETCHANGEDPOINTS")
  (make-package "VOLUMETRIC_MSGS::GETCHANGEDPOINTS"))
(unless (find-package "VOLUMETRIC_MSGS::GETCHANGEDPOINTSREQUEST")
  (make-package "VOLUMETRIC_MSGS::GETCHANGEDPOINTSREQUEST"))
(unless (find-package "VOLUMETRIC_MSGS::GETCHANGEDPOINTSRESPONSE")
  (make-package "VOLUMETRIC_MSGS::GETCHANGEDPOINTSRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass volumetric_msgs::GetChangedPointsRequest
  :super ros::object
  :slots ())

(defmethod volumetric_msgs::GetChangedPointsRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass volumetric_msgs::GetChangedPointsResponse
  :super ros::object
  :slots (_size _changed_points _changed_states ))

(defmethod volumetric_msgs::GetChangedPointsResponse
  (:init
   (&key
    ((:size __size) 0)
    ((:changed_points __changed_points) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Vector3 :init) r)) r))
    ((:changed_states __changed_states) (let (r) (dotimes (i 0) (push nil r)) r))
    )
   (send-super :init)
   (setq _size (round __size))
   (setq _changed_points __changed_points)
   (setq _changed_states __changed_states)
   self)
  (:size
   (&optional __size)
   (if __size (setq _size __size)) _size)
  (:changed_points
   (&rest __changed_points)
   (if (keywordp (car __changed_points))
       (send* _changed_points __changed_points)
     (progn
       (if __changed_points (setq _changed_points (car __changed_points)))
       _changed_points)))
  (:changed_states
   (&optional __changed_states)
   (if __changed_states (setq _changed_states __changed_states)) _changed_states)
  (:serialization-length
   ()
   (+
    ;; int32 _size
    4
    ;; geometry_msgs/Vector3[] _changed_points
    (apply #'+ (send-all _changed_points :serialization-length)) 4
    ;; bool[] _changed_states
    (* 1    (length _changed_states)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _size
       (write-long _size s)
     ;; geometry_msgs/Vector3[] _changed_points
     (write-long (length _changed_points) s)
     (dolist (elem _changed_points)
       (send elem :serialize s)
       )
     ;; bool[] _changed_states
     (write-long (length _changed_states) s)
     (dotimes (i (length _changed_states))
       (if (elt _changed_states i) (write-byte -1 s) (write-byte 0 s))
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _size
     (setq _size (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; geometry_msgs/Vector3[] _changed_points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _changed_points (let (r) (dotimes (i n) (push (instance geometry_msgs::Vector3 :init) r)) r))
     (dolist (elem- _changed_points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; bool[] _changed_states
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _changed_states (make-list n))
     (dotimes (i n)
     (setf (elt _changed_states i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;;
   self)
  )

(defclass volumetric_msgs::GetChangedPoints
  :super ros::object
  :slots ())

(setf (get volumetric_msgs::GetChangedPoints :md5sum-) "b13aac43ad02af7141713450fbaa2797")
(setf (get volumetric_msgs::GetChangedPoints :datatype-) "volumetric_msgs/GetChangedPoints")
(setf (get volumetric_msgs::GetChangedPoints :request) volumetric_msgs::GetChangedPointsRequest)
(setf (get volumetric_msgs::GetChangedPoints :response) volumetric_msgs::GetChangedPointsResponse)

(defmethod volumetric_msgs::GetChangedPointsRequest
  (:response () (instance volumetric_msgs::GetChangedPointsResponse :init)))

(setf (get volumetric_msgs::GetChangedPointsRequest :md5sum-) "b13aac43ad02af7141713450fbaa2797")
(setf (get volumetric_msgs::GetChangedPointsRequest :datatype-) "volumetric_msgs/GetChangedPointsRequest")
(setf (get volumetric_msgs::GetChangedPointsRequest :definition-)
      "---
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
")

(setf (get volumetric_msgs::GetChangedPointsResponse :md5sum-) "b13aac43ad02af7141713450fbaa2797")
(setf (get volumetric_msgs::GetChangedPointsResponse :datatype-) "volumetric_msgs/GetChangedPointsResponse")
(setf (get volumetric_msgs::GetChangedPointsResponse :definition-)
      "---
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
")



(provide :volumetric_msgs/GetChangedPoints "b13aac43ad02af7141713450fbaa2797")


