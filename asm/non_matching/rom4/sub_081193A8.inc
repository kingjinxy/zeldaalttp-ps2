	THUMB_FUNC_START sub_081193A8
sub_081193A8: @ 0x081193A8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #8
	bl sub_080C18C8
	ldr r2, _081193F0  @ =gRam
	ldr r1, _081193F4  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08119404
	ldr r1, _081193F8  @ =0x00000E33
	add r0, r2, r1
	add r1, r4, r0
	ldrb r3, [r1]
	cmp r3, #0
	bne _08119404
	mov r0, #6
	strb r0, [r1]
	ldr r0, _081193FC  @ =0x00000E29
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _08119404
	ldr r1, _08119400  @ =0x00000E15
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	b _0811940A
_081193F0:
	.4byte gRam
_081193F4:
	.4byte 0x000009AD
_081193F8:
	.4byte 0x00000E33
_081193FC:
	.4byte 0x00000E29
_08119400:
	.4byte 0x00000E15
_08119404:
	add r0, r4, #0
	bl sub_08119410
_0811940A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081193A8

