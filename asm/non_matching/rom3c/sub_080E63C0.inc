	THUMB_FUNC_START sub_080E63C0
sub_080E63C0: @ 0x080E63C0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r2, r1, #24
	ldr r4, _080E649C  @ =gRam
	ldr r1, _080E64A0  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r6, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E643C
	ldr r3, _080E64A4  @ =0x00000EE2
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080E64A8  @ =0x00000968
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080E64AC  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080E64B0  @ =0x00000ED2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080E64B4  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _080E64B8  @ =0x0000096D
	add r0, r4, r2
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #19
	bl sub_080C2DCC
	ldr r3, _080E64BC  @ =0x00000F12
	add r0, r4, r3
	add r0, r6, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r4, r3
	add r0, r6, r0
	add r2, r2, #1
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080E643C:
	mov r2, #15
	add r5, r4, #0
	ldr r3, _080E64C0  @ =0x00000FF2
	add r7, r5, r3
_080E6444:
	lsl r2, r2, #24
	asr r3, r2, #24
	ldr r4, _080E64A0  @ =0x00000996
	add r0, r5, r4
	ldrb r1, [r0]
	eor r1, r1, r3
	mov r0, #3
	and r1, r1, r0
	ldr r4, _080E64C4  @ =0x000010E2
	add r0, r5, r4
	add r0, r3, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	add r4, r2, #0
	cmp r1, #0
	bne _080E6488
	ldr r1, _080E64C8  @ =0x00000FA2
	add r0, r5, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E6488
	add r0, r3, r7
	ldrb r0, [r0]
	cmp r0, #220
	beq _080E6480
	cmp r0, #225
	beq _080E6480
	cmp r0, #217
	bne _080E6488
_080E6480:
	lsr r1, r4, #24
	add r0, r6, #0
	bl sub_080E64CC
_080E6488:
	mov r2, #255
	lsl r2, r2, #24
	add r0, r4, r2
	lsr r2, r0, #24
	cmp r0, #0
	bge _080E6444
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E649C:
	.4byte gRam
_080E64A0:
	.4byte 0x00000996
_080E64A4:
	.4byte 0x00000EE2
_080E64A8:
	.4byte 0x00000968
_080E64AC:
	.4byte 0x00000F02
_080E64B0:
	.4byte 0x00000ED2
_080E64B4:
	.4byte 0x00000EF2
_080E64B8:
	.4byte 0x0000096D
_080E64BC:
	.4byte 0x00000F12
_080E64C0:
	.4byte 0x00000FF2
_080E64C4:
	.4byte 0x000010E2
_080E64C8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080E63C0

