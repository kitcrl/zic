@echo on
@set PROJ_DIR=%1
@set ARCH=%2
  
@echo ">> %0 <<"
@echo "+------------------+------------------------------------------------------------"
@echo "| PATH of Project  | %PROJ_DIR%"
@echo "| ARCH             | %ARCH%"
@echo "+------------------+------------------------------------------------------------"

@if exist "%PROJ_DIR%/../../pub/%ARCH%" (
  @if not exist then mkdir coms
  @if not exist then mkdir coms\%ARCH%
  @copy /Y %PROJ_DIR%\..\..\pub\%ARCH%\* coms\%ARCH%
)
