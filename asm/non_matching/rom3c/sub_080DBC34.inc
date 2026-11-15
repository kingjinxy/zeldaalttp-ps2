	THUMB_FUNC_START sub_080DBC34
sub_080DBC34: @ 0x080DBC34
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r2, #29
	ldr r1, _080DBD00  @ =gRam
	ldr r3, _080DBD04  @ =0x000011EF
	add r0, r1, r3
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #0
	beq _080DBC66
	ldr r5, _080DBD08  @ =0x000011D2
	add r1, r3, r5
_080DBC4E:
	lsl r0, r2, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r2, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080DBC6C
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DBC4E
_080DBC66:
	lsl r0, r2, #24
	cmp r0, #0
	bge _080DBC84
_080DBC6C:
	ldr r5, _080DBD0C  @ =0x00001642
	add r2, r3, r5
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080DBC82
	mov r0, #29
	strb r0, [r2]
_080DBC82:
	ldrb r2, [r2]
_080DBC84:
	lsl r2, r2, #24
	asr r2, r2, #24
	ldr r1, _080DBD08  @ =0x000011D2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #9
	strb r1, [r0]
	ldr r5, _080DBD10  @ =0x000015F8
	add r0, r3, r5
	strb r1, [r0]
	ldr r0, _080DBD14  @ =0x0000131C
	add r1, r3, r0
	add r1, r2, r1
	ldr r5, _080DBD18  @ =0x00000F62
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080DBD1C  @ =0x0000122C
	add r1, r3, r0
	add r1, r2, r1
	sub r5, r5, #128
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080DBD20  @ =0x00001268
	add r1, r3, r0
	add r1, r2, r1
	add r5, r5, #32
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080DBD24  @ =0x00000ED2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r5, r5, #16
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r4, _080DBD28  @ =0x0000120E
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
	ldr r5, _080DBD2C  @ =0x0000124A
	add r0, r3, r5
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080DBD30  @ =0x000012FE
	add r0, r3, r1
	add r2, r2, r0
	mov r0, #32
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080DBD00:
	.4byte gRam
_080DBD04:
	.4byte 0x000011EF
_080DBD08:
	.4byte 0x000011D2
_080DBD0C:
	.4byte 0x00001642
_080DBD10:
	.4byte 0x000015F8
_080DBD14:
	.4byte 0x0000131C
_080DBD18:
	.4byte 0x00000F62
_080DBD1C:
	.4byte 0x0000122C
_080DBD20:
	.4byte 0x00001268
_080DBD24:
	.4byte 0x00000ED2
_080DBD28:
	.4byte 0x0000120E
_080DBD2C:
	.4byte 0x0000124A
_080DBD30:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_080DBC34

