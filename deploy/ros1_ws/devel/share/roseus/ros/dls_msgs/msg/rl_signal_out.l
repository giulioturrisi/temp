;; Auto-generated. Do not edit!


(when (boundp 'dls_msgs::rl_signal_out)
  (if (not (find-package "DLS_MSGS"))
    (make-package "DLS_MSGS"))
  (shadow 'rl_signal_out (find-package "DLS_MSGS")))
(unless (find-package "DLS_MSGS::RL_SIGNAL_OUT")
  (make-package "DLS_MSGS::RL_SIGNAL_OUT"))

(in-package "ROS")
;;//! \htmlinclude rl_signal_out.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass dls_msgs::rl_signal_out
  :super ros::object
  :slots (_header _desired_joint_positions _kp _kd ))

(defmethod dls_msgs::rl_signal_out
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:desired_joint_positions __desired_joint_positions) (make-array 12 :initial-element 0.0 :element-type :float))
    ((:kp __kp) (make-array 12 :initial-element 0.0 :element-type :float))
    ((:kd __kd) (make-array 12 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _header __header)
   (setq _desired_joint_positions __desired_joint_positions)
   (setq _kp __kp)
   (setq _kd __kd)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:desired_joint_positions
   (&optional __desired_joint_positions)
   (if __desired_joint_positions (setq _desired_joint_positions __desired_joint_positions)) _desired_joint_positions)
  (:kp
   (&optional __kp)
   (if __kp (setq _kp __kp)) _kp)
  (:kd
   (&optional __kd)
   (if __kd (setq _kd __kd)) _kd)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float64[12] _desired_joint_positions
    (* 8    12)
    ;; float64[12] _kp
    (* 8    12)
    ;; float64[12] _kd
    (* 8    12)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float64[12] _desired_joint_positions
     (dotimes (i 12)
       (sys::poke (elt _desired_joint_positions i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[12] _kp
     (dotimes (i 12)
       (sys::poke (elt _kp i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; float64[12] _kd
     (dotimes (i 12)
       (sys::poke (elt _kd i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float64[12] _desired_joint_positions
   (dotimes (i (length _desired_joint_positions))
     (setf (elt _desired_joint_positions i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[12] _kp
   (dotimes (i (length _kp))
     (setf (elt _kp i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; float64[12] _kd
   (dotimes (i (length _kd))
     (setf (elt _kd i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;;
   self)
  )

(setf (get dls_msgs::rl_signal_out :md5sum-) "d058233efee7504b4e269e87b453c168")
(setf (get dls_msgs::rl_signal_out :datatype-) "dls_msgs/rl_signal_out")
(setf (get dls_msgs::rl_signal_out :definition-)
      "Header header 

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

")



(provide :dls_msgs/rl_signal_out "d058233efee7504b4e269e87b453c168")


