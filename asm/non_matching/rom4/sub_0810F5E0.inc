	THUMB_FUNC_START sub_0810F5E0
sub_0810F5E0: @ 0x0810F5E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810F618  @ =gRam
	ldr r1, _0810F61C  @ =0x00000B6C
	add r0, r5, r1
	ldrb r0, [r0]
	sub r0, r0, #1
	cmp r0, #1
	ble _0810F612
	mov r1, #194
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810F612
	ldr r0, _0810F620  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810F612:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810F618:
	.4byte gRam
_0810F61C:
	.4byte 0x00000B6C
_0810F620:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810F5E0

