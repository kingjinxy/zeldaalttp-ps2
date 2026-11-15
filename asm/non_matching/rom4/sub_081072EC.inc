	THUMB_FUNC_START sub_081072EC
sub_081072EC: @ 0x081072EC
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08107324
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08107324
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_0810732C
	add r0, r4, #0
	bl sub_081070A4
_08107324:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081072EC

