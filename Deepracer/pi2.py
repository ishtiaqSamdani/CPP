

def reward_function(params):

    cw = params["closest_waypoints"][1]
    speed = params["speed"]
    off_track = params["is_offtrack"]
    is_left = params["is_left_of_center"]
    distance_from_center = params['distance_from_center']
    track_width = params['track_width']
    # center_variance = params["distance_from_center"] / params["track_width"]
    abs_steering = abs(params['steering_angle'])

    marker_1 = 0.1 * track_width
    marker_2 = 0.2 * track_width
    marker_3 = 0.3 * track_width
    marker_4 = 0.4 * track_width
    marker_5 = 0.5 * track_width

    iceCream = 1

    if off_track:
        return 0.0
    else:
        if speed < 0.96:
            return 0.0
        if cw in [1,2]:
            if speed >= .98 and speed < 1 and is_left:
                iceCream += 1.5
            elif speed >= 1:
                iceCream += 2
            iceCream *= 2

        # Dead Center
        elif cw in [122,123,3,4,5,6,7,8,9,10,11]:

            if distance_from_center <= (marker_1/2):
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2
            elif distance_from_center <= marker_1:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                # iceCream*=1
        # LEFT
        if cw in [124,121,12,13,35,36,55,56,57,58,72,101]:

            # if distance_from_center <= (marker_1/2):
            #     if speed >= .98 and speed < 1:
            #         iceCream += 1.5
            #     elif speed >= 1:
            #         iceCream += 2
            #     iceCream *= 2

            if distance_from_center <= marker_1 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                # iceCream*=1
                iceCream*=2
            elif distance_from_center <= marker_2 and distance_from_center > marker_1 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= .8
            elif distance_from_center > marker_2:
                iceCream *= 1e-3
            else:
                iceCream *= 1e-3

        elif cw in [125,126,120,119,102,14,15,16,31,32,33,34,37,38,40,54,59,60]:

            if distance_from_center >= marker_1 and distance_from_center <= marker_2 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2

            elif distance_from_center > marker_2 and distance_from_center <= marker_3 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
            elif distance_from_center > marker_3 or not is_left:
                iceCream *= 1e-3

        elif cw in [127,118,103,17,18,19,20,29,30,41,42,53,61,71,]:

            if distance_from_center >= marker_2 and distance_from_center <= marker_3 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2

            elif distance_from_center > marker_3 and distance_from_center <= marker_4 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 0.75
            elif distance_from_center > marker_3 or not is_left:
                iceCream *= 1e-3

        elif cw in [134,128,21,22,28,43,44,52,62,70,104,117]:

            if distance_from_center >= marker_3 and distance_from_center <= marker_4 and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2

            elif distance_from_center > marker_4 and distance_from_center <= (marker_5/2.5) and is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 0.725
            elif distance_from_center > (marker_5/2.5) or not is_left:
                iceCream *= 1e-3

        # if cw in []:

        #     if distance_from_center >= (marker_3/3) and distance_from_center <= marker_4 and is_left:
        #         # if speed >= .95:
        #         #     iceCream += 1.5
        #         # # elif speed>=1:
        #         # #     iceCream+=2
        #         # iceCream *= 2
        #         if speed >= .98 and speed < 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 1.75
        #         iceCream *= 2

        #     elif distance_from_center > marker_4 and distance_from_center <= marker_5 and is_left:
        #         if speed >= .98 and speed < 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 1.75
        #         iceCream *=.725
        #     elif distance_from_center > marker_5 or not is_left:
        #         iceCream *= 1e-3

        elif cw in [129,130,131,132,133,105,106,107,108,109,110,111,112,113,114,115,116,45,46,47,48,49,50,51,63,64,65,66,67,68,69]:

            if distance_from_center >= marker_4 and distance_from_center <= marker_5 and is_left:
                # if speed >= .95:
                #     iceCream += 1.5
                # # elif speed>=1:
                # #     iceCream+=2
                # iceCream *= 2
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 1.75
                iceCream *= 2

            elif distance_from_center > marker_5 or not is_left:
                iceCream *= 1e-3

        # if cw in []:

        #     if distance_from_center >= (marker_4/2) and distance_from_center <= marker_5 and is_left:
        #         if speed >= .98 and speed < 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 1.75
        #         iceCream *= 2

        #     elif distance_from_center > marker_4 and distance_from_center <= (marker_4/2) and is_left:
        #         if speed >= .98 and speed < 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 1.75
        #         iceCream *=.725
        #     elif distance_from_center > marker_5 or not is_left:
        #         iceCream *= 1e-3

        # RIGHT
        elif cw in [100]:

            # if distance_from_center <= (marker_1/2):
            #     if speed >= .98 and speed < 1:
            #         iceCream += 1.5
            #     elif speed >= 1:
            #         iceCream += 2
            #     iceCream *= 2

            if distance_from_center <= marker_1 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                # iceCream*=1
                iceCream*=2
            elif distance_from_center <= marker_2 and distance_from_center > marker_1 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= .8
            elif distance_from_center > marker_2:
                iceCream *= 1e-3
            else:
                iceCream *= 1e-3
        elif cw in [73,98,99]:

            if distance_from_center >= marker_1 and distance_from_center <= marker_2 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2

            elif distance_from_center > marker_2 and distance_from_center <= marker_3 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
            elif distance_from_center > marker_3 or is_left:
                iceCream *= 1e-3

        elif cw in [86,87,88,89,97]:

            if distance_from_center >= marker_2 and distance_from_center <= marker_3 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2

            elif distance_from_center > marker_3 and distance_from_center <= marker_4 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 0.75
            elif distance_from_center > marker_3 or is_left:
                iceCream *= 1e-3

        elif cw in [74,85,90,91,96]:

            if distance_from_center >= marker_3 and distance_from_center <= marker_4 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 2

            elif distance_from_center > marker_4 and distance_from_center <= (marker_5/2.5) and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 2
                iceCream *= 0.725
            elif distance_from_center > (marker_5/2.5) or is_left:
                iceCream *= 1e-3

        # if cw in []:

        #     if distance_from_center >= (marker_3/3) and distance_from_center <= marker_4 and not is_left:
        #         if speed >= .98 and speed < 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 1.75
        #         iceCream *= 2

        #     elif distance_from_center > marker_4 and distance_from_center <= marker_5 and not is_left:
        #         if speed >= .98 and speed < 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 1.75
        #         iceCream *=.725

        #     elif distance_from_center > marker_5 or is_left:
        #         iceCream *= 1e-3

        elif cw in [75,76,77,78,79,80,81,82,83,84,92,93,94,95]:

            if distance_from_center >= marker_4 and distance_from_center <= marker_5 and not is_left:
                if speed >= .98 and speed < 1:
                    iceCream += 1.5
                elif speed >= 1:
                    iceCream += 1.75
                iceCream *= 2

            elif distance_from_center > marker_5 or is_left:
                iceCream *= 1e-3

        # if cw in []:

        #     if distance_from_center >= (marker_4/3) and distance_from_center <= marker_5 and not is_left:
        #         if speed >= .95:
        #             iceCream += 1.5
        #         iceCream *= 2

        #     elif distance_from_center > marker_4 and distance_from_center <= (marker_4/2) and not is_left:
        #         if speed >= .95 and speed <= 1:
        #             iceCream += 1.5
        #         elif speed >= 1:
        #             iceCream += 2
        #         iceCream *= 0.725
        #     elif distance_from_center > marker_5 or is_left:
        #         iceCream *= 1e-3

    return float(iceCream)
