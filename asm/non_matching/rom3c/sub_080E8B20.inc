	THUMB_FUNC_START sub_080E8B20
sub_080E8B20: @ 0x080E8B20
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _080E8BA0  @ =gRam
	ldr r1, _080E8BA4  @ =0x00001072
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080E8B84
	mov r0, #0
	strb r0, [r1]
	ldr r2, _080E8BA8  @ =0x00000F72
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	ldr r3, _080E8BAC  @ =0x000010A2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #192
	strb r1, [r0]
	ldr r0, _080E8BB0  @ =0x00000F22
	add r3, r6, r0
	add r3, r5, r3
	ldr r1, _080E8BB4  @ =0x00001112
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r2, #128
	add r1, r2, #0
	and r1, r1, r0
	lsr r0, r0, #1
	mov r4, #63
	and r0, r0, r4
	orr r1, r1, r0
	strb r1, [r3]
	ldr r3, _080E8BB8  @ =0x00000F12
	add r1, r6, r3
	add r1, r5, r1
	ldr r3, _080E8BBC  @ =0x00001102
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	and r2, r2, r0
	lsr r0, r0, #1
	and r0, r0, r4
	orr r2, r2, r0
	strb r2, [r1]
_080E8B84:
	ldr r1, _080E8BC0  @ =gUnknown_08177A4C
	ldr r2, _080E8BA8  @ =0x00000F72
	add r0, r6, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r7, #0
	bl _call_via_r1
	pop {r4-r7}
	pop {r0}
	bx r0
_080E8BA0:
	.4byte gRam
_080E8BA4:
	.4byte 0x00001072
_080E8BA8:
	.4byte 0x00000F72
_080E8BAC:
	.4byte 0x000010A2
_080E8BB0:
	.4byte 0x00000F22
_080E8BB4:
	.4byte 0x00001112
_080E8BB8:
	.4byte 0x00000F12
_080E8BBC:
	.4byte 0x00001102
_080E8BC0:
	.4byte gUnknown_08177A4C
	THUMB_FUNC_END sub_080E8B20

