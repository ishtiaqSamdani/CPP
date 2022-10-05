def reward_function(params):

    cw = params["closest_waypoints"][1]
    speed = params["speed"]
    off_track = params["is_offtrack"]
    is_left = params["is_left_of_center"]
    center_variance = params["distance_from_center"] / params["track_width"]
    abs_steering = abs(params['steering_angle'])
    steps = params['steps']
    progress = params['progress']
    TOTAL_NUM_STEPS = 525
    if off_track or speed<.965:
        return 1e-8

    left_lane = [125, 126, 120, 119, 102, 14, 15, 16, 31, 32, 33, 34, 37, 38, 40, 54, 59, 60, 127, 118, 103, 17, 18, 19, 20, 29, 30, 41, 42, 53, 61, 71, 134, 128, 21, 22, 28,
        43, 44, 52, 62, 70, 104, 117, 129, 130, 131, 132, 133, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 45, 46, 47, 48, 49, 50, 51, 63, 64, 65, 66, 67, 68, 69]

    center_lane = [1, 2, 122, 123, 3, 4, 5, 6, 7, 8, 9, 10, 11,
        124, 121, 12, 13, 35, 36, 55, 56, 57, 58, 72, 101, 100]

    right_lane = [73, 98, 99, 86, 87, 88, 89, 97, 74, 85, 90, 91,
        96, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 92, 93, 94, 95]

    if cw in left_lane and is_left and speed >= 0.97:
        reward = 2
        if speed >= 0.98:
            reward = 3
    elif cw in right_lane and (not is_left) and speed >= 0.97:
        reward = 2
        if speed >= 0.98:
            reward = 3
        elif cw in center_lane and center_variance <= 0.25 and speed >= 0.97:
            reward = 2
            if speed >= 0.98:
                reward = 3
    else:
        reward = 0.1
    

    ABS_STEERING_THRESHOLD = 10.0
    if abs_steering > ABS_STEERING_THRESHOLD:
        reward *= 0.8
    if (steps % 15) == 0 and progress > (steps / TOTAL_NUM_STEPS) * 100 :
        reward += 5.0
    else:
        reward*=0.6
    
    

    return float(reward)
