#!/usr/bin/python3

import rospy 
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint

def my_publisher():
    # control part

    rospy.init_node('saad_control_python_node')
    control_publisher = rospy.Publisher('/arm_controller/command', JointTrajectory, queue_size=10)

    while not rospy.is_shutdown():
        
        msg = JointTrajectory()

        msg.header.stamp = rospy.Time.now()
        msg.header.frame_id = ''
        msg.joint_names = ['shoulder_pan_joint', 'shoulder_lift_joint', 'elbow_joint', 'wrist_1_joint', 'wrist_2_joint', 'wrist_3_joint']
       


          

        point = JointTrajectoryPoint()
        
        point.positions = [0,0,0,0,0,0]
        point.velocities = [0,0,0,0,0,0]
        point.accelerations = [0,0,0,0,0,0]
        point.effort = [0,0,0,0,0,0]
          
        point.time_from_start = rospy.Duration(5)
        
        


        msg.points.append( point )

        control_publisher.publish( msg )
        rospy.loginfo( msg ) 


if __name__ == '__main__':

    my_publisher()
