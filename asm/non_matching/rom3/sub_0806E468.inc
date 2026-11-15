	THUMB_FUNC_START sub_0806E468
sub_0806E468: @ 0x0806E468
	push {r4,lr}
	bl sub_08089EEC
	ldr r3, _0806E4A8  @ =gRam
	mov r0, #161
	lsl r0, r0, #4
	add r4, r3, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0806E498
	ldr r0, _0806E4AC  @ =0x000009B4
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _0806E4B0  @ =0x000009B5
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #16
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #3
	strb r0, [r4]
_0806E498:
	ldr r0, _0806E4B4  @ =0x000009E8
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0806E4A8:
	.4byte gRam
_0806E4AC:
	.4byte 0x000009B4
_0806E4B0:
	.4byte 0x000009B5
_0806E4B4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806E468

