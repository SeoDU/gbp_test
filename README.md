## Drone version:
```
roslaunch gbplanner gbplanner_sim2.launch
```


## quadruped robot version (updating):
```
roslaunch gbplanner gbplanner_sim.launch
roslaunch champ_teleop teleop.launch

```

### Method to add ground truth(GT) pose & tf:
```
  <gazebo>
    <plugin name="p3d_base_controller" filename="libgazebo_ros_p3d.so">
      <alwaysOn>true</alwaysOn>
      <updateRate>50.0</updateRate>
      <bodyName>base</bodyName>
      <topicName>ground_truth/state</topicName>
      <gaussianNoise>0.01</gaussianNoise>
      <frameName>world</frameName>
      <xyzOffsets>0 0 0</xyzOffsets>
      <rpyOffsets>0 0 0</rpyOffsets>
    </plugin>
  </gazebo>
```

1. insert the code above in the urdf file of robot.   
2. download the following package :     
```
https://github.com/tu-darmstadt-ros-pkg/hector_localization.git
```
3. set argument for message_to_tf as the topic you wrote above (ex. ground_truth/state)
4. Disable your **SLAM** like ekf (anymal_b_config/launch/in bringup_body.launch, anymal_b_base/config/ekf)

### Region settings
You can adjust the region for global and local planner, respectively.    
To make planning go well in the corner like blocked region, proper ranges should be decided.

### Note: 
1. If you want to additional static tf between frames, insert the code like following in your launch file
```
  <node pkg="tf" type="static_transform_publisher" name="tf_1" args="0.0 0 0.0 0.0 0.0 0.0 /base /imu_link 100" />
```

2. If you want to change the name of world frame or the robot base frame, there are many things to change :   
- anymal_b_config/config/move_base/local_costmap_params.yaml   
- anymal_b_config/config/move_base/move_base_params.yaml
- anymal_b_config/config/move_base/costmap_common_params.yaml
- gbplanner_ros/config/firefly/octomap_sim_config.yaml
- gbplanner_ros/config/firefly/voxblox_sim_config.yaml

3. For using customized map, add follwing plugin to your .world file
```
<plugin name="ros_interface_plugin" filename="librotors_gazebo_ros_interface_plugin.so"/>
```

4. Refer the site here to implement in quadruped robot : 

<https://github.com/ntnu-arl/gbplanner_ros/issues/6>

