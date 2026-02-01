# [3829. Design Ride Sharing System](https://leetcode.com/problems/design-ride-sharing-system)

## Problem Statement
Design a simple ride sharing system with the following operations:

1. `addRider(riderId)` – Adds a rider to the system.
2. `addDriver(driverId)` – Adds a driver to the system.
3. `matchDriverWithRider()` – Matches the earliest driver with the earliest active rider and removes them from the queues. Returns `[-1,-1]` if no match is possible.
4. `cancelRider(riderId)` – Cancels a rider’s request.

The system should maintain **FIFO** order for drivers and riders while allowing rider cancellations.

---

## Constraints
- Rider and driver IDs are **unique integers**.
- Total number of operations ≤ 10⁵.
- All IDs are positive integers ≤ 10⁹.

---

## Approach
- Maintain two queues:
  - `driver` → drivers in order of arrival
  - `rider` → riders in order of arrival
- Maintain a set `st` for active riders (to support cancellations efficiently)
- When matching:
  - Skip any rider no longer in the set
  - Match front driver and front active rider
  - Remove both from queues and update set
- Canceling a rider only removes them from the set; they are lazily removed from the queue during matching.

---

## Example
```cpp
RideSharingSystem rs;
rs.addRider(1);
rs.addDriver(100);
rs.addRider(2);
vector<int> match = rs.matchDriverWithRider(); // returns [100,1]
rs.cancelRider(2);
match = rs.matchDriverWithRider(); // returns [-1,-1]
Complexity Analysis
Time Complexity: O(1) per operation on average (amortized for matching)

Space Complexity: O(n) (for queues and active rider set)
