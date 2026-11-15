	THUMB_FUNC_START sub_080E0C24
sub_080E0C24: @ 0x080E0C24
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080E0CD8  @ =gRam
	ldr r1, _080E0CDC  @ =0x000010A2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #4
	bls _080E0C42
	ldr r2, _080E0CE0  @ =0x00000F72
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #6
	strb r1, [r0]
_080E0C42:
	ldr r1, _080E0CE4  @ =0x00001012
	add r0, r6, r1
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, #224
	and r0, r0, r1
	strb r0, [r5]
	ldr r2, _080E0CE8  @ =0x00000FE2
	add r0, r6, r2
	add r7, r4, r0
	ldrb r3, [r7]
	cmp r3, #0
	bne _080E0C66
	ldr r1, _080E0CEC  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r3, r0, #3
_080E0C66:
	ldr r0, _080E0CF0  @ =0x00001122
	add r2, r6, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	mov r1, #4
	and r3, r3, r1
	lsl r1, r3, #4
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080E0CF4  @ =0x00001624
	add r1, r6, r2
	ldrb r0, [r1]
	sub r0, r0, #3
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C6240
	ldrb r0, [r7]
	cmp r0, #0
	beq _080E0CCC
	ldrb r0, [r5]
	mov r1, #5
	orr r0, r0, r1
	strb r0, [r5]
	ldrb r0, [r7]
	cmp r0, #96
	bne _080E0CC6
	ldr r1, _080E0CF8  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E0CC6
	ldr r2, _080E0CFC  @ =0x00000FC2
	add r1, r6, r2
	mov r0, #112
	strb r0, [r1]
	ldr r1, _080E0D00  @ =gUnknown_0817683A
	sub r2, r2, #80
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_080AA83C
_080E0CC6:
	add r0, r4, #0
	bl sub_080E0DF8
_080E0CCC:
	add r0, r4, #0
	bl sub_080E0D04
	pop {r4-r7}
	pop {r0}
	bx r0
_080E0CD8:
	.4byte gRam
_080E0CDC:
	.4byte 0x000010A2
_080E0CE0:
	.4byte 0x00000F72
_080E0CE4:
	.4byte 0x00001012
_080E0CE8:
	.4byte 0x00000FE2
_080E0CEC:
	.4byte 0x00001052
_080E0CF0:
	.4byte 0x00001122
_080E0CF4:
	.4byte 0x00001624
_080E0CF8:
	.4byte 0x000009AD
_080E0CFC:
	.4byte 0x00000FC2
_080E0D00:
	.4byte gUnknown_0817683A
	THUMB_FUNC_END sub_080E0C24

