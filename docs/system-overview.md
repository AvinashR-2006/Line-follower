# System Overview

## Public Repository Scope

This repository is meant to demonstrate the platform, sensor layout, and development workflow. It is not the full competition release.

## Typical Architecture

- IR sensors detect the track position.
- The controller computes line error from the sensor pattern.
- Motor speed is adjusted independently to maintain tracking.
- Tuning depends heavily on sensor height, surface finish, battery condition, and wheel traction.

## Recommended Public Extensions

- Add a calibration routine
- Add live serial plotting for sensor values
- Add a basic proportional controller for experimentation
