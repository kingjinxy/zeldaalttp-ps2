	THUMB_FUNC_START sub_080C6240
sub_080C6240: @ 0x080C6240
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C6264
	mov r0, sp
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C626C
_080C6264:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6240

