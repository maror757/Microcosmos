# TNM094-Media-navigering
OSX: [![Build Status](https://travis-ci.com/erikssonjohan/TNM094-Media-navigering.svg?token=YWiGzNVaCammAsa6b6oD&branch=master)](https://travis-ci.com/erikssonjohan/TNM094-Media-navigering)




#### If asked to upgrade the vc2013 project to match vc2015 press "OK"

  Right click your project and go to Properties and set Configuration to "All Configurations" and Platform to "x64"

  then go to: C/C++ - General, and set Additional Include Directories to <..\include;"..\..\..\Cinder\include";%  (AdditionalIncludeDirectories)>
  then go to: Linker - General, and set Additional Library Directories to   <..\..\..\Cinder\lib\msw\$(PlatformTarget);..\..\..\Cinder\lib\msw\$(PlatformTarget)\$(Configuration)\$(PlatformToolset)>
  then go to: Resources - General, and set Additional Include Directories to <"..\..\..\Cinder\include";..\include;%(AdditionalIncludeDirectories)>

  When adding a new class to a project:
  Go to Project - Add Existing Item, and add the .cpp and .h files to your project.

