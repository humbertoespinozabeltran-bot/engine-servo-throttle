# Mechanical Design

The mechanical system replaces or complements manual throttle control by using a servo motor connected through a linkage mechanism.

## System Architecture

The mechanism consists of:

- Servo mounting bracket positioned near the carburetor
- Adjustable linkage rods
- Governor arm interface
- Throttlen actuation
- Air filter adapter compatible with the mounting structure

The linkage system was designed to maintain correct movement synchronization between:

Servo → Governor arm → Throttle

This ensures that factory governor functionality is preserved while allowing electronic throttle control.

## Design Considerations

Key design priorities include:

- Compatibility with common small engines
- Minimal modification to engine components
- Avoidance of interference with air intake components
- Smooth mechanical motion without binding
- Adjustable linkage geometry

Instead of using rigid solid linkages, pivot-connected rods were implemented. This allows small alignment tolerances and reduces mechanical stress on servo and carburetor components.

## CAD Simulation

All components were assembled in CAD with functional joints to validate:

- Throttle travel range
- Mechanical interference clearance
- Motion synchronization
- Governor compatibility

Servo motion is limited between idle and wide-open throttle positions to avoid mechanical overtravel.

The system currently operates within a simulated servo range of approximately:

-40° to +6°

