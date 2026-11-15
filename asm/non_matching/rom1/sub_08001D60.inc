	thumb_func_start sub_08001D60
sub_08001D60: @ 0x08001D60
	ldr r1, _08002148 @ =0x08000FF4
	lsls r2, r2, #2
	ldr r1, [r1, r2]
	mov pc, lr

