	THUMB_FUNC_START sub_080A1BA8
sub_080A1BA8: @ 0x080A1BA8
	push {r4,lr}
	ldr r2, _080A1BD8  @ =gRam
	ldr r1, _080A1BDC  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	bne _080A1C78
	ldr r2, _080A1BE0  @ =0x0000172C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1BC8
	b _080A1CFA
_080A1BC8:
	ldr r1, _080A1BE4  @ =0x000016F8
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1BE8
	mov r0, #0
	b _080A1BEC
	.byte 0x00
	.byte 0x00
_080A1BD8:
	.4byte gRam
_080A1BDC:
	.4byte 0x000016E8
_080A1BE0:
	.4byte 0x0000172C
_080A1BE4:
	.4byte 0x000016F8
_080A1BE8:
	bl sub_080A1ADC
_080A1BEC:
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A1BF4
	b _080A1CFA
_080A1BF4:
	ldr r4, _080A1C54  @ =gRam
	ldr r2, _080A1C58  @ =0x000017F0
	add r0, r4, r2
	ldrb r2, [r0]
	cmp r2, #0
	bne _080A1CFA
	ldr r1, _080A1C5C  @ =0x000016D4
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _080A1C60  @ =0x0000178A
	add r1, r4, r0
	mov r0, #128
	strb r0, [r1]
	ldr r1, _080A1C64  @ =0x00001789
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080A1C68  @ =0x000016EB
	add r1, r4, r2
	mov r0, #7
	strb r0, [r1]
	mov r0, #0
	mov r1, #5
	bl sub_080ABCFC
	mov r0, #1
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080A1C6C  @ =0x000016EA
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #8
	bhi _080A1CC4
	ldr r2, _080A1C70  @ =0x00001732
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A1C78
	ldr r1, _080A1C74  @ =0x00000545
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	sub r2, r2, #102
	add r1, r4, r2
	strb r0, [r1]
	b _080A1C84
	.byte 0x00
	.byte 0x00
_080A1C54:
	.4byte gRam
_080A1C58:
	.4byte 0x000017F0
_080A1C5C:
	.4byte 0x000016D4
_080A1C60:
	.4byte 0x0000178A
_080A1C64:
	.4byte 0x00001789
_080A1C68:
	.4byte 0x000016EB
_080A1C6C:
	.4byte 0x000016EA
_080A1C70:
	.4byte 0x00001732
_080A1C74:
	.4byte 0x00000545
_080A1C78:
	ldr r0, _080A1D00  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
_080A1C84:
	ldr r1, _080A1D04  @ =0x0000178A
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1CC4
	bl sub_080A38AC
	ldr r0, _080A1D08  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080A1D0C  @ =0x000016EB
	add r1, r4, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A1CFA
	mov r0, #5
	strb r0, [r1]
	ldr r0, _080A1D10  @ =0x00001789
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _080A1CFA
_080A1CC4:
	ldr r3, _080A1D14  @ =gRam
	ldr r1, _080A1D04  @ =0x0000178A
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080A1D10  @ =0x00001789
	add r0, r3, r2
	strb r1, [r0]
	sub r2, r2, #158
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _080A1D18  @ =0x000016E8
	add r2, r3, r0
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	strb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080A1CFA
	ldr r1, _080A1D00  @ =0x00001705
	add r2, r3, r1
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_080A1CFA:
	pop {r4}
	pop {r0}
	bx r0
_080A1D00:
	.4byte 0x00001705
_080A1D04:
	.4byte 0x0000178A
_080A1D08:
	.4byte 0x00001727
_080A1D0C:
	.4byte 0x000016EB
_080A1D10:
	.4byte 0x00001789
_080A1D14:
	.4byte gRam
_080A1D18:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_080A1BA8

