/*
  Copyright Kitware, Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/
#ifndef CASTXML_OPTIONS_H
#define CASTXML_OPTIONS_H

#include <cxsys/Configure.hxx>
#include <string>
#include <vector>

struct Options
{
  Options(): PPOnly(false), GccXml(false), HaveCC(false) {}
  bool PPOnly;
  bool GccXml;
  bool HaveCC;
  std::string OutputFile;
  std::vector<std::string> Includes;
  std::string Predefines;
  std::string Triple;
  std::vector<std::string> StartNames;
};

#endif // CASTXML_OPTIONS_H