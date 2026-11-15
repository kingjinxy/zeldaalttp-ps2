	THUMB_FUNC_START sub_08092CA0
sub_08092CA0: @ 0x08092CA0
	push {r4,lr}
	ldr r4, _08092D04  @ =gRam
	ldr r0, _08092D08  @ =0x000017A8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08092CFC
	mov r1, #0
	strb r1, [r2]
	ldr r3, _08092D0C  @ =0x000016EA
	add r2, r4, r3
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	strb r1, [r2]
	ldr r2, _08092D10  @ =0x000016E8
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #2
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #48
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #17
	add r0, r4, r3
	strb r1, [r0]
	mov r3, #0
	ldr r0, _08092D14  @ =0x00000E15
	add r2, r4, r0
	mov r4, #0
_08092CE2:
	add r1, r3, r2
	ldrb r0, [r1]
	sub r0, r0, #42
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08092CF2
	strb r4, [r1]
_08092CF2:
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #9
	bls _08092CE2
_08092CFC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092D04:
	.4byte gRam
_08092D08:
	.4byte 0x000017A8
_08092D0C:
	.4byte 0x000016EA
_08092D10:
	.4byte 0x000016E8
_08092D14:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08092CA0

