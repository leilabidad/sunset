#!/bin/bash
set -e
cd /opt/app

echo "Cleaning and building..."
make clean || true
make

echo "Calling acap-build (ACAP SDK tool) to create .eap..."
acap-build

echo "Build finished. Look for .eap in /opt/app or a dist/ folder."
