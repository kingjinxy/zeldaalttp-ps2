	thumb_func_start GetNextFrame	@ r0 = Entity* this
GetNextFrame: @ 0x08003828
	movs r1, #0x28
	ldrb r2, [r0, r1]			@ Load frame timer
	subs r2, #1
	strb r2, [r0, r1]
	beq FrameNeedsUpdate				@ Continue if frame expired
	mov pc, lr

