%% Simscape Multibody Contact Forces Library
%
% <html>
% <span style="font-family:Arial">
% <span style="font-size:10pt">
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_Library.html');">Library Overview</a></b><br>
% <tr>1.  <a href="matlab:web('Contact_Forces_Library_Use.html');">Using the Library</a><br>
% <tr>2.  <a href="matlab:cd([CFR_HomeDir filesep 'Libraries']);Contact_Forces_Lib;">Library</a><br>
% <tr>3.  Forces: <a href="matlab:web('Force_Laws.html');">Laws</a><br>
% <tr>....1. Basic 2D:<br>
% <tr>.......a. Circle-to-Circle Force: <a href="matlab:web('Circle_to_Circle_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_04_Disks_in_Box;">Example (Disks in Box)</a><br>
% <tr>.......b. Circle-to-Finite Line Force: <a href="matlab:web('Circle_to_Finite_Line_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_03_Disk_Finite_Plane_Spin;">Example (Ball on Finite Plane (spin))</a><br>
% <tr>.......c. Circle-to-Ring Force: <a href="matlab:web('Circle_to_Ring_Contact.html');">Description</a>; Examples: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_05_Disk_in_Ring;"> Disk in Ring</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple']);Collision_06_Catapult;">Catapult</a><br>
% <tr>....2. Composite 2D:<br>
% <tr>.......a. Box-to-Box Force: <a href="matlab:web('Box_to_Box_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Spinning_Boxes']);Spinning_Boxes;">Example (Spinning Boxes)</a><br>
% <tr>.......b. Box-to-Belt Force: <a href="matlab:web('Box_to_Belt_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Conveyor_Belts']);Belts_01_Two_Belts;">Example (Box on two Conveyor Belts)</a><br>
% <tr>....3. Basic 3D:<br>
% <tr>.......a. Sphere-to-Sphere Force: <a href="matlab:web('Sphere_to_Sphere_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_04_Ball_on_Ball;">Example (Ball on Ball)</a><br>
% <tr>.......b. Sphere-in-Sphere Force: <a href="matlab:web('Sphere_in_Sphere_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_06_Ball_in_Ball;">Example (Ball in Ball)</a><br>
% <tr>.......c. Sphere-to-Plane Force: <a href="matlab:web('Sphere_to_Plane_Contact.html');">Description</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_02_Ball_Plane_Spin;">Example (Ball on Spinning Plane)</a><br>
% <tr>.......d. Sphere-to-Tube Force: <a href="matlab:web('Sphere_to_Tube_Contact.html');">Description</a>; <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_04_Ball_in_Tube_Fixed;"> Example (Ball in Fixed Tube)</a><br>
% <tr>.......e. Sphere-to-Cone Force: <a href="matlab:web('Sphere_to_Cone_Contact.html');">Description</a>; <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_08_Ball_in_Spinning_Cone;"> Example (Ball in Spinning Cone)</a><br>
% <tr>4.  Friction Force: <a href="matlab:web('Friction_Laws.html');">Laws</a><br>
% <br>
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_2D_Collision.html');">2D Collision Examples (Basic)</a></b><br>
% <tr>1.  Ball on Infinite Plane: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_01_Ball_Infinite_Plane;">Model</a>, <a href="matlab:CheckAnim('Collision_01_Ball_Infinite_Plane_Anim.html');">Animation</a><br>
% <tr>2.  Disk on Finite Plane (fixed): <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_02_Disk_Finite_Plane_Fixed;">Model</a>, <a href="matlab:CheckAnim('Collision_02_Disk_Finite_Plane_Fixed_Anim.html');">Animation</a><br>
% <tr>3.  Disk on Finite Plane (spin): <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_03_Disk_Finite_Plane_Spin;">Model</a>, <a href="matlab:CheckAnim('Collision_03_Disk_Finite_Plane_Spin_Anim.html');">Animation</a><br>
% <tr>4.  Disks in Box: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_04_Disks_in_Box;">Model</a>, Animation (<a href="matlab:CheckAnim('Collision_04_Disks_In_Box_Anim.html');">No Friction</a>, <a href="matlab:CheckAnim('Collision_04_Disks_In_Box_Friction_Anim.html');">With Friction</a>)<br>
% <tr>5.  Disk in Ring: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_05_Disk_in_Ring;">Model</a>, Animation (<a href="matlab:CheckAnim('Collision_05_Disk_In_Ring_Anim.html');">No Friction</a>, <a href="matlab:CheckAnim('Collision_05_Disk_In_Ring_Friction_Anim.html');">With Friction</a>)<br>
% <tr>6.  Catapult: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_06_Catapult;">Model</a>, <a href="matlab:CheckAnim('Collision_06_Catapult_Friction_Anim.html');">Animation</a><br>
% <tr>7.  Ball and Floating Beam: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Collision']);Collision_07_Ball_Finite_Plane_Float;">Model</a>, <a href="matlab:CheckAnim('Collision_07_Ball_Finite_Plane_Float_Anim.html');">Animation</a><br>
% <br>
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_2D_Friction.html');">2D Friction Examples (Basic)</a></b><br>
% <tr>1.  Box on Ramp (Constraint): <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_01_Box_on_Ramp_Constraint;">Model</a>, <a href="matlab:CheckAnim('Friction_01_Box_on_Ramp_Constraint_Anim.html');">Animation</a><br>
% <tr>2.  Box on Ramp : <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_02_Box_on_Ramp;">Model</a>, <a href="matlab:CheckAnim('Friction_02_Box_on_Ramp_Anim.html');">Animation</a><br>
% <tr>3.  Double Pendulum (Constraint): <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_03_Double_Pendulum_Constraint;">Model</a>, <a href="matlab:CheckAnim('Friction_03_Double_Pendulum_Constraint_Anim.html');">Animation</a><br>
% <tr>4.  Disk Rolling on Ramp: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_04_Disk_Rolling_on_Ramp;">Model</a>, <a href="matlab:CheckAnim('Friction_04_Disk_Rolling_on_Ramp_Anim.html');">Animation</a><br>
% <tr>5.  Beam on Wheel: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_05_Beam_on_Wheel;">Model</a>, <a href="matlab:CheckAnim('Friction_05_Beam_on_Wheel_Anim.html');">Animation</a><br>
% <tr>6.  Disk on Disk: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_06_Disk_on_Disk;">Model</a>, <a href="matlab:CheckAnim('Friction_06_Disk_on_Disk_Anim.html');">Animation</a><br>
% <tr>7.  Floating Disks: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_07_Floating_Disks;">Model</a>, <a href="matlab:CheckAnim('Friction_07_Floating_Disks_Anim.html');">Animation</a><br>
% <tr>8.  Disks and Ring: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_08_Disks_and_Ring;">Model</a>, <a href="matlab:CheckAnim('Friction_08_Disks_and_Ring_Anim.html');">Animation</a><br>
% <tr>9.  Ring on Disk: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_09_Ring_on_Disk_Float;">Model</a>, <a href="matlab:CheckAnim('Friction_09_Ring_on_Disk_Float_Anim.html');">Animation</a><br>
% <tr>10. Ball on Wheel: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Simple' filesep 'Friction']);Friction_10_Ball_on_Wheel;">Model</a>, <a href="matlab:CheckAnim('Friction_10_Ball_on_Wheel_Anim.html');">Animation</a><br>
% <br>
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_2D_Applications.html');">2D Examples (Applications)</a></b><br>
% <tr>1.  Cam Follower: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Cam_Follower']);Cam_Follower;">Model</a>, <a href="matlab:CheckAnim('Cam_Follower_Anim.html');">Animation</a>, <a href="matlab:web('Cam_Follower_Contact.html');">Force Description</a><br>
% <tr>2.  Cam Follower with Constraint: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Cam_Follower_Constraint']);Cam_Follower_Constraint;">Model</a>, <a href="matlab:CheckAnim('Cam_Follower_Constraint_Anim.html');">Animation</a><br>
% <tr>3.  Geneva Drive: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Geneva_Drive']);Geneva_Drive;">Model</a>, <a href="matlab:CheckAnim('Geneva_Drive_Anim.html');">Animation</a>, <a href="matlab:web('Geneva_Drive_Contact_Forces.html');">Force Description</a><br>
% <tr>... <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Geneva_Drive' filesep 'CAD' filesep 'Assembly']);winopen('Geneva_Drive.SLDASM');">CAD Model </a> -> <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Geneva_Drive' filesep 'CAD' filesep 'Export']);smimport('Geneva_Drive_XML.xml');"> Import XML</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Geneva_Drive' filesep 'CAD' filesep 'Export']);Geneva_Drive_imported;"> Simscape Multibody Model</a><br>
% <tr>4.  Mini Golf: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Mini_Golf']);startup_Mini_Golf;">Model</a>, Animation: <a href="matlab:CheckAnim('Mini_Golf_Hole_6_Anim.html');">Hole 6</a>, <a href="matlab:CheckAnim('Mini_Golf_Hole_7_Anim.html');">Hole 7</a><br>
% <tr>5.  Spinning Boxes: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Spinning_Boxes']);Spinning_Boxes;">Model</a>, <a href="matlab:CheckAnim('Spinning_Boxes_Anim.html');">Animation</a>, <a href="matlab:web('Box_to_Box_Contact.html');">Force Description</a><br>
% <tr>6.  Two Conveyor Belts: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Conveyor_Belts']);Belts_01_Two_Belts;">Model</a>, <a href="matlab:CheckAnim('Belts_01_Two_Belts_Anim.html');">Animation</a><br>
% <tr>7.  Ball Bearing: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '2D' filesep 'Ball_Bearing']);startup_sm_ball_bearing_testrig;">Model</a>, <a href="matlab:CheckAnim('Ball_Bearing_Testrig_Anim.html');">Animation</a><br>
% <br>
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_3D_Collision.html');">3D Collision Examples (Basic)</a></b><br>
% <tr>1.  Ball on Fixed Plane: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_01_Ball_Plane_Fixed;">Model</a>, Animation (<a href="matlab:CheckAnim('Coll3D_01_Ball_Plane_Fixed_Anim.html');">No Friction</a>, <a href="matlab:CheckAnim('Coll3D_01_Ball_Plane_Fixed_Anim_friction.html');">With Friction</a>)<br>
% <tr>2.  Ball on Spinning Plane: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_02_Ball_Plane_Spin;">Model</a>, Animation (<a href="matlab:CheckAnim('Coll3D_02_Ball_Plane_Spin_Anim.html');">No Friction</a>, <a href="matlab:CheckAnim('Coll3D_02_Ball_Plane_Spin_Anim_friction.html');">With Friction</a>)<br>
% <tr>3.  Balls in Box: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_03_Balls_in_Box;">Model</a>, Animation (<a href="matlab:CheckAnim('Coll3D_03_Balls_in_Box_Anim.html');">No Friction</a>, <a href="matlab:CheckAnim('Coll3D_03_Balls_in_Box_Anim_friction.html');">With Friction</a>)<br>
% <tr>4.  Ball in Fixed Tube: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_04_Ball_in_Tube_Fixed;">Model</a>, <a href="matlab:CheckAnim('Coll3D_04_Ball_in_Tube_Fixed_Anim.html');">Animation</a><br>
% <tr>5.  Ball on Peg Board: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_05_Ball_Peg_Board;">Model</a>, <a href="matlab:CheckAnim('Coll3D_05_Ball_Peg_Board_Anim.html');">Animation</a><br>
% <tr>6.  Ball in Ball: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_06_Ball_in_Ball;">Model</a>, <a href="matlab:CheckAnim('Coll3D_06_Ball_in_Ball_Anim.html');">Animation</a><br>
% <tr>7.  Balls and Sliding Tube: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_07_Balls_and_Sliding_Tube;">Model</a>, <a href="matlab:CheckAnim('Coll3D_07_Balls_and_Sliding_Tube_Anim.html');">Animation</a><br>
% <tr>8.  Ball in Spinning Cone: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Collision']);Coll3D_08_Ball_in_Spinning_Cone;">Model</a>, <a href="matlab:CheckAnim('Coll3D_08_Ball_in_Spinning_Cone_Anim.html');">Animation</a><br>
% <br>
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_3D_Friction.html');">3D Friction Examples (Basic)</a></b><br>
% <tr>1.  Box on Table: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_01_Box_on_Table;">Model</a>, <a href="matlab:CheckAnim('Frict3D_01_Box_on_Table_Anim.html');">Animation</a><br>
% <tr>2.  Ball on Table: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_02_Ball_on_Table;">Model</a>, <a href="matlab:CheckAnim('Frict3D_02_Ball_on_Table_Anim.html');">Animation</a><br>
% <tr>3.  Board on Balls: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_03_Board_on_Balls;">Model</a>, <a href="matlab:CheckAnim('Frict3D_03_Board_on_Balls_Anim.html');">Animation</a><br>
% <tr>4.  Ball on Ball: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_04_Ball_on_Ball;">Model</a>, <a href="matlab:CheckAnim('Frict3D_04_Ball_on_Ball_Anim.html');">Animation</a><br>
% <tr>5.  Tube on Balls: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_05_Tube_on_Balls;">Model</a>, <a href="matlab:CheckAnim('Frict3D_05_Tube_on_Balls_Anim.html');">Animation</a><br>
% <tr>6.  Ball on Balls: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_06_Ball_on_Balls;">Model</a>, <a href="matlab:CheckAnim('Frict3D_06_Ball_on_Balls_Anim.html');">Animation</a><br>
% <tr>7.  Ball in Ball: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_07_Ball_in_Ball;">Model</a>, <a href="matlab:CheckAnim('Frict3D_07_Ball_in_Ball_Anim.html');">Animation</a><br>
% <tr>8.  Balls on Driven Tube: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Simple' filesep 'Friction']);Frict3D_08_Ball_on_Driven_Tube;">Model</a>, <a href="matlab:CheckAnim('Frict3D_08_Ball_on_Driven_Tube_Anim.html');">Animation</a><br>
% <tr>9.  MATLAB Script, Spheres in Sphere: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'MATLAB_Build' filesep 'Spheres_in_Sphere']);sm_spheres_in_sphere_5big;">Model</a>, <a href="matlab:edit sm_build_spheres_in_sphere;">Edit MATLAB Code</a><br>
% <br>
% <tr><b><a href="matlab:web('Contact_Forces_Demo_Script_3D_Applications.html');">3D Applications</a></b><br>
% <tr>1.  Two-Wheel Robot: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Robot_2_Whl']);Robot_2_Whl;">Model</a>, <a href="matlab:CheckAnim('Robot_2_Whl_Anim.html');">Animation</a><br>
% <tr>2.  Cart with Caster Wheels: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Caster_4_Whl']);Caster_4_Whl;">Model</a>, <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Caster_4_Whl']);Caster_4_Whl_Hill;">Cart on Hill</a>, <a href="matlab:CheckAnim('Caster_4_Whl_Anim.html');">Animation</a><br>
% <tr>3.  Gripper with Conveyor Belts: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Gripper_2Belts']);Gripper_2Belts;">Model</a>, <a href="matlab:CheckAnim('Gripper_2Belts_Anim.html');">Animation</a><br>
% <tr>4.  Tread Drive on Uneven Surface: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Tread_Drive']);sm_tread_drive;">Model</a>, <a href="matlab:CheckAnim('sm_tread_drive_Anim.html');">Animation</a><br>
% <tr>5.  Robot with Six Legs Built from 4 Four-Bar Linkages: <a href="matlab:cd([CFR_HomeDir filesep 'Examples' filesep '3D' filesep 'Robot_6Legs_4Bar']);startup_sm_robot_6legs_4bar;">Model</a>, <a href="matlab:CheckAnim('sm_robot_6legs_4bar_Anim.html');">Animation</a><br>
% </style>
% </style>
% </html>
% 
% Copyright 2014-2019 The MathWorks(TM), Inc.

