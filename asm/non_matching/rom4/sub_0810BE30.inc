	THUMB_FUNC_START sub_0810BE30
sub_0810BE30: @ 0x0810BE30
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810BE92
	ldr r3, _0810BE98  @ =gRam
	ldr r1, _0810BE9C  @ =0x00001142
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #24
	strb r1, [r0]
	mov r1, #0
	ldr r2, _0810BEA0  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810BE5E
	mov r1, #1
_0810BE5E:
	cmp r1, #0
	beq _0810BE92
	ldr r0, _0810BEA4  @ =0x00000EA5
	add r2, r3, r0
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #7
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _0810BEA8  @ =0x00001122
	add r2, r3, r1
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #241
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _0810BEAC  @ =0x00001022
	add r1, r3, r2
	add r1, r5, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	strb r0, [r1]
_0810BE92:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810BE98:
	.4byte gRam
_0810BE9C:
	.4byte 0x00001142
_0810BEA0:
	.4byte 0x000009DA
_0810BEA4:
	.4byte 0x00000EA5
_0810BEA8:
	.4byte 0x00001122
_0810BEAC:
	.4byte 0x00001022
	THUMB_FUNC_END sub_0810BE30

