@echo off
"C:\Users\naync\Documents\Codex\2026-10-02\using-https-github-com-elliotttate-wind\outputs\toolchain\python-env\Scripts\python.exe" "%~dp0install_update.py" apply
if errorlevel 1 (
  echo.
  pause
  exit /b 1
)
