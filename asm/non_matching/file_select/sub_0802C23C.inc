	THUMB_FUNC_START sub_0802C23C
sub_0802C23C: @ 0x0802C23C
	push {r4,lr}
	lsl r0, r0, #16
	mov r2, #0
	ldr r1, _0802C270  @ =gUnknown_0842AA54
	lsr r0, r0, #14
	add r0, r0, r1
	ldr r1, [r0]
	sub r1, r1, #8
	ldr r4, _0802C274  @ =0x000001FF
	mov r3, #128
	lsl r3, r3, #24
_0802C252:
	add r1, r1, #8
	ldr r0, [r1, #4]
	add r0, r0, r4
	lsr r0, r0, #9
	add r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, [r1]
	and r0, r0, r3
	cmp r0, #0
	bne _0802C252
	add r0, r2, #0
	pop {r4}
	pop {r1}
	bx r1
_0802C270:
	.4byte gUnknown_0842AA54
_0802C274:
	.4byte 0x000001FF
	THUMB_FUNC_END sub_0802C23C

