	thumb_func_start Advance4Frames	@ r0 = Entity* this
Advance4Frames: @ 0x08003834
	movs r1, #0x28
	ldrb r2, [r0, r1]
	subs r2, #4
	strb r2, [r0, r1]
	blo FrameNeedsUpdate
	mov pc, lr

