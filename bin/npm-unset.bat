@echo off
powershell -Command "npm config rm proxy"
powershell -Command "npm config rm https-proxy"