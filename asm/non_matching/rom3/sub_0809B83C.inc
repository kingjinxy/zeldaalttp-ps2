	THUMB_FUNC_START sub_0809B83C
sub_0809B83C: @ 0x0809B83C
	push {r4,r5,lr}
	ldr r3, _0809B8B0  @ =gRam
	ldr r1, _0809B8B4  @ =0x000009AD
	add r0, r3, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _0809B8AA
	ldr r2, _0809B8B8  @ =0x00001806
	add r4, r3, r2
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809B8AA
	strb r1, [r4]
	ldr r5, _0809B8BC  @ =0x00000547
	add r2, r3, r5
	ldrb r1, [r2]
	mov r0, #224
	and r0, r0, r1
	mov r5, #150
	lsl r5, r5, #4
	add r1, r3, r5
	strb r0, [r1]
	ldrb r0, [r2]
	lsl r0, r0, #4
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	ldr r2, _0809B8C0  @ =0x00000546
	add r1, r3, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #240
	and r0, r0, r1
	cmp r0, #0
	beq _0809B8AA
	ldr r5, _0809B8C4  @ =0x0000180F
	add r1, r3, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0809B8C8  @ =0x000016D5
	add r1, r3, r0
	mov r0, #6
	strb r0, [r1]
	ldr r2, _0809B8CC  @ =0x0000180E
	add r1, r3, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #4
	strb r0, [r4]
_0809B8AA:
	pop {r4,r5}
	pop {r0}
	bx r0
_0809B8B0:
	.4byte gRam
_0809B8B4:
	.4byte 0x000009AD
_0809B8B8:
	.4byte 0x00001806
_0809B8BC:
	.4byte 0x00000547
_0809B8C0:
	.4byte 0x00000546
_0809B8C4:
	.4byte 0x0000180F
_0809B8C8:
	.4byte 0x000016D5
_0809B8CC:
	.4byte 0x0000180E
	THUMB_FUNC_END sub_0809B83C

