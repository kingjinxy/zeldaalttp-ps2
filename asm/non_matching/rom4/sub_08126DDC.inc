	THUMB_FUNC_START sub_08126DDC
sub_08126DDC: @ 0x08126DDC
	push {r4,lr}
	ldr r2, _08126E00  @ =gRam
	ldr r0, _08126E04  @ =0x00000A38
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
	ldr r0, _08126E08  @ =0x00001B08
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _08126DFA
	bl sub_081271A8
	mov r0, #1
	strb r0, [r4]
_08126DFA:
	pop {r4}
	pop {r0}
	bx r0
_08126E00:
	.4byte gRam
_08126E04:
	.4byte 0x00000A38
_08126E08:
	.4byte 0x00001B08
	THUMB_FUNC_END sub_08126DDC

