@echo off

REM ====================================================================================
REM Batch file for generating
REM
REM Author  : 
REM Date    : 
REM Version : 
REM Company :  
REM
REM 
REM Command syntax: genDoc.bat
REM
REM  Version: 
REM ====================================================================================

SETLOCAL ENABLEEXTENSIONS ENABLEDELAYEDEXPANSION

REM -- Delete previous generated HTML files ---------------------
  ECHO.
  ECHO Delete previous generated HTML files

REM -- Remove generated doxygen files ---------------------
PUSHD ..\Documentation
FOR %%A IN (ToolNumbers) DO IF EXIST %%A (RMDIR /S /Q %%A)
POPD

REM -- Generate New HTML Files ---------------------
  ECHO.
  ECHO Generate New HTML Files

pushd ToolNumbers
CALL doxygen_tool_numbers.bat
popd
  
:END
  ECHO.
REM done
