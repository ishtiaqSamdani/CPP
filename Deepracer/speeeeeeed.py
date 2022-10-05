def reward_function(params):
    off_track = params["is_offtrack"]
    steps = params['steps']
    progress = params['progress']
    reward=1.0
    if off_track:
        return 0.0
    TOTAL_NUM_STEPS = 530
    if (steps % 10) == 0 and progress > (steps / TOTAL_NUM_STEPS) * 100 :
        reward += 10.0
    else:
        reward*=1e-8

    return float(reward)