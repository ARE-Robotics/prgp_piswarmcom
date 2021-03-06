/*
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2015, University of York Robotics Laboratory (YRL).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above
 *   copyright notice, this list of conditions and the following
 *   disclaimer in the documentation and/or other materials provided
 *   with the distribution.
 * * Neither the name of the copyright holder nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/**
 *  @file piswarmcom_utest.cpp
 *  @brief The unit testing file for prgp_piswarmcom package.
 *  @details This unit testing is using google testing framework. The file lists some test cases for
 *   methods of the class.
 *  @author Shengsong Yang
 *  @date 18 Aug 2015
 *  @copyright BSD License.
 */

#include "gtest/gtest.h"
#include "prgp_piswarmcom/prgp_piswarmcom.h"
#include <iostream>


TEST(CustomComTest, SendCmdToPiSwarmTest)
{
  PRGPPiSwarmCom com;
  std::cout << "========== Start testing sendCmdToPiSwarm(char msg_w) ==========" << std::endl;
  EXPECT_TRUE(com.sendCmdToPiSwarm('a'));
  EXPECT_TRUE(com.sendCmdToPiSwarm('b'));
}
TEST(CustomComTest, RevCmdFromPiSwarmTest)
{
  PRGPPiSwarmCom com;
  std::cout << "========== Start testing revCmdFromPiSwarm() ==========" << std::endl;
  EXPECT_TRUE(com.revCmdFromPiSwarm());
}
TEST(CustomComTest, SendCmdToHomeBeaconTest)
{
  PRGPPiSwarmCom com;
  std::cout << "========== Start testing sendCmdToHomeBeacon(char msg_w) ==========" << std::endl;
  EXPECT_TRUE(com.sendCmdToHomeBeacon('a'));
  EXPECT_TRUE(com.sendCmdToHomeBeacon('b'));
}
TEST(CustomComTest, SendToTargetBeaconTest)
{
  PRGPPiSwarmCom com;
  std::cout << "========== Start testing sendCmdToTargetBeacon(char msg_w) ==========" << std::endl;
  EXPECT_TRUE(com.sendCmdToTargetBeacon('a'));
  EXPECT_TRUE(com.sendCmdToTargetBeacon('b'));
}
TEST(CustomComTest, PRGPUITest)
{
  PRGPPiSwarmCom com;
  std::cout << "========== Start testing prgp_ui() ==========" << std::endl;
  EXPECT_TRUE(com.prgp_ui());
}


int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "prgp_piswarmcom_test");
  return RUN_ALL_TESTS();
}
