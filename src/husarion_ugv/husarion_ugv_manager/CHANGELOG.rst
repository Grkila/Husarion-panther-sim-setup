^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package husarion_ugv_manager
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.1.2 (2024-12-02)
------------------
* Fix safety_manager path (`#411 <https://github.com/husarion/panther_ros/issues/411>`_)
* Merge branch 'ros2-devel' into ros2-lights-tests
* Contributors: Jakub Delicat, pawelirh

2.1.1 (2024-09-05)
------------------
* Merge branch 'ros2-devel' into ros2-ns-refactor
* Merge branch 'ros2-devel' of https://github.com/husarion/panther_ros into ros2-add-nmea-gps
* Merge remote-tracking branch 'origin/ros2-devel' into ros2-testing-poc
* Merge pull request `#389 <https://github.com/husarion/panther_ros/issues/389>`_ from husarion/hotfix-ssh-lib
* Add missing module configuration
* Merge remote-tracking branch 'origin/ros2-devel' into ros2-testing-poc
* Merge pull request `#386 <https://github.com/husarion/panther_ros/issues/386>`_ from husarion/ros2-unify-filenames
* Move BT plugins to src directory
* Minor modifications
* Fix links in documentations (`#387 <https://github.com/husarion/panther_ros/issues/387>`_)
* Merge remote-tracking branch 'origin/ros2-devel' into ros2-unify-filenames
* Rename shutdown hosts config
* Reorganize files in panther_lights
* Ros2 estop sim gui (`#384 <https://github.com/husarion/panther_ros/issues/384>`_)
* Restructure files tree in manager tests
* Correct include guards in manager package
* Rename config and launch file in manager package
* Merge branch 'ros2-devel' into ros2-ns-refactor
* Ros2 increase bt service timeout (`#382 <https://github.com/husarion/panther_ros/issues/382>`_)
* Update after changes in panther_diagnostics
* unify CMakeLists.txt files (`#381 <https://github.com/husarion/panther_ros/issues/381>`_)
* unify CMakeLists.txt files
* New format of documentation  (`#369 <https://github.com/husarion/panther_ros/issues/369>`_)
* Contributors: Dawid, Dawid Kmak, KmakD, Paweł Irzyk, pawelirh, rafal-gorecki

2.1.0 (2024-08-02)
------------------
* Merge pull request `#362 <https://github.com/husarion/panther_ros/issues/362>`_ from husarion/ros2-api-reorganization
* Enhance ROS API names in the stack
* Contributors: Dawid Kmak, pawelirh

2.0.4 (2024-06-28)
------------------
* Merge pull request `#337 <https://github.com/husarion/panther_ros/issues/337>`_ from husarion/ros2-gz-lights
* Merge branch 'ros2-devel' into ros2-gz-lights
* Save work
* Merge remote-tracking branch 'origin/ros2-devel' into ros2-gpio-controller-revision
* Merge branch 'ros2' into ros2-build-in-animation
* ROS 2 remove obsolate tests in BT (`#333 <https://github.com/husarion/panther_ros/issues/333>`_)
* Merge branch 'ros2' into ros2-gz-lights
* Contributors: Dawid Kmak, pawelirh, rafal-gorecki

2.0.3 (2024-06-06)
------------------
* Merge pull request `#320 <https://github.com/husarion/panther_ros/issues/320>`_ from husarion/ros2-clear-logs
* Remove unused header include
* Move utils include to cpp files
* Update panther_manager/src/lights_manager_node.cpp
* Revise logging in BT panther_manager
* Contributors: Dawid Kmak, Paweł Irzyk, pawelirh

2.0.2 (2024-06-05)
------------------
* Merge pull request `#319 <https://github.com/husarion/panther_ros/issues/319>`_ from husarion/ros2-fix-battery-and-manager-tests
* Formatting
* Fixed tests
* Merge remote-tracking branch 'origin/ros2-fix-bt' into ros2
* Launch refactor (`#307 <https://github.com/husarion/panther_ros/issues/307>`_)
* Fix behaviour trees
* Merge pull request `#301 <https://github.com/husarion/panther_ros/issues/301>`_ from husarion/ros2-manager-refactor
* coderabbit suggestions
* disable shutdown nodes in tests
* fix TurnOnFanAtStartup test
* Merge pull request `#314 <https://github.com/husarion/panther_ros/issues/314>`_ from husarion/ros2-logging
* speed up tests
* Changed all RCLCPP logs to streams
* review fixes
* format bt files
* almost there
* BehaviorTreeManager briefs and tests
* move factory outside bt manager
* add BehaviorTreeManager class
* update parameters names
* review fixes
* Merge branch 'ros2' of https://github.com/husarion/panther_ros into ros2-manager-refactor
* add behavior trees tests
* Multi robot spawn working (`#256 <https://github.com/husarion/panther_ros/issues/256>`_)
* add lights and safety tests
* update readme
* update briefs
* update bt_utils tests
* add utils briefs
* move bt registration to bt_utils
* update behaviortree_ros2 repository
* update bb in subscribers callbacks
* move lights and safety to separate nodes
* Contributors: Dawid, Dawid Kmak, Jakub Delicat, Paweł Irzyk, pawelirh, rafal-gorecki

2.0.1 (2024-05-01)
------------------
* Merge pull request `#261 <https://github.com/husarion/panther_ros/issues/261>`_ from husarion/ros2-readme
* Pawel sugestions
* Merge branch 'ros2-devel' into ros2-readme
* Merge remote-tracking branch 'origin/ros2-devel' into ros2-os-diagnostics
* Add controller readme
* Merge remote-tracking branch 'origin/ros2-devel' into ros2-os-diagnostics
* Contributors: Jakub Delicat, Paweł Irzyk, rafal-gorecki

2.0.0 (2024-03-29)
------------------
* Merge pull request `#258 <https://github.com/husarion/panther_ros/issues/258>`_ from husarion/ros2-control-fix-err-flag-reset
  ROS 2- Fix Error Clearing Mechanism for Roboteq Controllers
* fixes for pth 1.06
* Ros2 namespace (`#255 <https://github.com/husarion/panther_ros/issues/255>`_)
  * Preparation for namespace
  * Simulation working
  * Hardware look ok
  * Update panther_controller/config/WH01_controller.yaml
  Co-authored-by: Jakub Delicat <109142865+delihus@users.noreply.github.com>
  * Apply Jakub suggestions
  Co-authored-by: Jakub Delicat <109142865+delihus@users.noreply.github.com>
  * Fix imu
  * Readme
  * Add imu namespace
  * Jakub suggestions
  * Add panther manager to xml
  * pre-commit
  * Fixed ekf
  * Additional remapping
  * fix imu
  * Pawel suggestions (collision with gamepad)
  * cmd_vel
  * Use namespace instead of PushRosNamespace
  ---------
  Co-authored-by: Jakub Delicat <109142865+delihus@users.noreply.github.com>
  Co-authored-by: Jakub Delicat <jakub.delicat@husarion.com>
* Merge pull request `#257 <https://github.com/husarion/panther_ros/issues/257>`_ from husarion/ros2-headers
  Divide Headers into std and local liblaries
* few more
* Group and order improvement
* Rest of fils
* Headers + Copyright
* Merge pull request `#246 <https://github.com/husarion/panther_ros/issues/246>`_ from husarion/ros2-panther-manager
  ROS 2 panther_manager
* Merge branch 'ros2-devel' of https://github.com/husarion/panther_ros into ros2-panther-manager
* Merge pull request `#232 <https://github.com/husarion/panther_ros/issues/232>`_ from husarion/ros2-manager-plugins
  ROS 2 manager plugins
* fix tests
* add missing params and fix default launch
* Fixed typo | cleaned up the test_shutdown_hosts_node
* fix
* Added shutdonw hosts node
* Merge branch 'ros2-manager-plugins' of https://github.com/husarion/panther_ros into ros2-panther-manager
* remove MultiThreadedExecutor
* Add suggestions
* Add README
* remove bad file
* Added all suggestions
* fixed user to username | added test_shutdown_host
* fixed tick after timeout node
* add MultiThreadedExecutor
* review fixes
* fix merge and move files
* Merge branch 'ros2-manager-plugins' of https://github.com/husarion/panther_ros into ros2-panther-manager
* fixed tests
* Changed tests' names to PascalCase | added testing::TempDir() | Starting services when there are wrong parameters
* Added RegisterNode template function
* Made  fixed commit for behaviortreee | templated create service function | removed unused warnings
* applied panther_utils
* Changed utils names and moved start stop to constructor and destructor
* Added package suggestions without tests
* fix bb constant name
* add missing dependencies
* add manager_bt_node tests
* add log if tree fails
* clean up code
* port manager to ROS 2
* added tests for tick_after_timeout
* Added TickAfterTimeout
* typo
* tested on the robot
* Fixed tesT
* Revert "added test for single host plugin"
  This reverts commit a4f9051c8dfcf03cefa4f827904126fb50c0b316.
* added test for single host plugin
* added test single plugin
* Added tests for signal shutdown plugin
* Fixed building trigger
* Removed different types of building behavio tree
* Moved pluigns to actions | added shutdown plugins
* Added explicite casts
* Added tests for set animation plugin
* Added trigger tests
* Added full call_set_bool plugin test
* Added trigger service call plugin
* added set bool service
* added set bool service
* added behaviortree_ros2 to the repository because it is not in rosped
* Contributors: Dawid, Dawid Kmak, Jakub Delicat, Paweł Irzyk, Paweł Kowalski, rafal-gorecki
