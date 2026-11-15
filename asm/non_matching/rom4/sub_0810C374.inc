	THUMB_FUNC_START sub_0810C374
sub_0810C374: @ 0x0810C374
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810C404  @ =gRam
	ldr r1, _0810C408  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r0, r0, #124
	ldr r2, _0810C40C  @ =0x00000968
	add r1, r5, r2
	strh r0, [r1]
	ldr r1, _0810C410  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r0, r0, #48
	add r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #48
	bl sub_080C2DCC
	ldr r1, _0810C414  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _0810C418  @ =0x00000961
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810C41C  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	sub r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_Move
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	add r0, r4, #0
	bl sub_0810C208
	add r0, r4, #0
	bl sub_0810C2F4
	cmp r0, #0
	beq _0810C3FA
	ldr r0, _0810C420  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810C424  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_0810C3FA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810C404:
	.4byte gRam
_0810C408:
	.4byte 0x00000F02
_0810C40C:
	.4byte 0x00000968
_0810C410:
	.4byte 0x00000EF2
_0810C414:
	.4byte 0x00000F22
_0810C418:
	.4byte 0x00000961
_0810C41C:
	.4byte 0x00000F12
_0810C420:
	.4byte 0x00000F52
_0810C424:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_0810C374

