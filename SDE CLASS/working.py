import math

 

def reward_function(params):  


    # Read input variables

    waypoints = params['waypoints']

    closest_waypoints = params['closest_waypoints']

    heading = params['heading']

 

    # Initialize the reward with typical value

    reward = 1.0

    # Calculate the direction of the center line based 

    next_point = waypoints[closest_waypoints[1]]

    prev_point = waypoints[closest_waypoints[0]]

    # Calculate the direction in radius, arctan2(dy, dx), 

    track_direction = math.atan2(next_point[1] - prev_point[1], next_point[0] - prev_point[0])

    # Convert to degree

    track_direction = math.degrees(track_direction)

    # Calculate the difference between the track direction and the heading direction of the car

    direction_diff = abs(track_direction - heading)

    if direction_diff > 180:

        direction_diff = 360 - direction_diff

    # Penalize the reward if the difference is too large

    DIRECTION_THRESHOLD = 10.0

    if direction_diff > DIRECTION_THRESHOLD:

        reward *= 0.5

    return float(reward)