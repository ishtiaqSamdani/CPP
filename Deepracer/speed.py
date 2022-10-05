def reward_function(params):
    off_track = params["is_offtrack"]
    steps = params['steps']
    speed = params["speed"]
    progress = params['progress']
    abs_steering = abs(params['steering_angle'])
    reward = 1.0
    if(off_track or speed<.965):
        return 1e-8
    
    if(speed>.98 and speed<1):
        reward+=8
    elif(speed>=1):
        reward+=16
    else:
        reward*=1e-8
        
    ABS_STEERING_THRESHOLD = 15
    if abs_steering < ABS_STEERING_THRESHOLD and speed >= 1:
        reward += 5

    TOTAL_NUM_STEPS = 530
    if (steps % 15) == 0 and progress > (steps / TOTAL_NUM_STEPS) * 100 :
        reward += 10.0
    else:
        reward*=1e-8


    return float(reward)

