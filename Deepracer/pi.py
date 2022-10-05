def reward_function(params):
    
    cw = params["closest_waypoints"][1]
    speed = params["speed"]
    off_track = params["is_offtrack"]
    is_left = params["is_left_of_center"]
    center_variance = params["distance_from_center"] / params["track_width"]
    abs_steering = abs(params['steering_angle'])
    
    left_lane = [10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 39,40, 41, 42, 43, 
    44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 60, 61, 62, 
    63, 64, 65, 66, 67]
    
    center_lane = [1, 2, 3, 4, 5, 6, 7, 8, 9, 35, 36, 37, 38,27,28, 54, 55, 56, 57, 58,59, 68, 69, 70]
    
    right_lane = [33, 34,29,30,31,32,33,34]
    
    if off_track:
        return 0.0
    else:
        
        if speed < 0.96:
            return 0.0
        
        if cw in left_lane and is_left and speed >= 0.98 and center_variance > 0.3 and center_variance <= 0.5:
            reward = 2
            if speed >= 1:
                reward = 10
            elif speed >= 0.99:
                reward = 8
            elif speed >= 0.98:
                reward = 5
        elif cw in right_lane and (not is_left) and speed >= 0.98 and center_variance > 0.2 and center_variance <= 0.5:
            reward = 2
            if speed >= 1:
                reward = 10
            elif speed >= 0.99:
                reward = 8
            elif speed >= 0.98:
                reward = 5
        elif cw in center_lane and center_variance <= 0.25 and speed >= 0.98:
            reward = 2
            if speed >= 1:
                reward = 10
            elif speed >= 0.99:
                reward = 8
            elif speed >= 0.98:
                reward = 5
        else:
            reward = 0.1

    return float(reward)