	THUMB_FUNC_START sub_080BCD58
sub_080BCD58: @ 0x080BCD58
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r4, _080BCE0C  @ =gRam
	ldr r0, _080BCE10  @ =0x000009AD
	add r5, r4, r0
	ldrb r1, [r5]
	str r1, [sp]
	ldr r3, _080BCE14  @ =0x000016C4
	add r2, r4, r3
	ldrh r6, [r2]
	mov r10, r6
	mov r0, #182
	lsl r0, r0, #5
	add r3, r4, r0
	ldrh r1, [r3]
	str r1, [sp, #4]
	ldr r1, _080BCE18  @ =gUnknown_08173F38
	ldr r6, _080BCE1C  @ =0x00000996
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #2
	add r0, r0, #80
	mov r1, #0
	strh r0, [r2]
	ldr r0, _080BCE20  @ =0x00001390
	strh r0, [r3]
	strb r1, [r5]
	bl sub_080CE350
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r5]
	mov r6, #15
	add r7, r4, #0
	ldr r1, _080BCE24  @ =0x00000FA2
	add r1, r1, r7
	mov r9, r1
_080BCDB0:
	ldr r3, _080BCE28  @ =0x00000FF2
	add r0, r7, r3
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BCE4A
	ldr r1, _080BCE2C  @ =0x000015DC
	add r0, r7, r1
	mov r4, #0
	strb r6, [r0]
	ldr r3, _080BCE10  @ =0x000009AD
	add r0, r7, r3
	strb r4, [r0]
	ldr r1, _080BCE30  @ =0x00001012
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	bl sub_080CF370
	lsl r0, r6, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C1F70
	ldr r3, _080BCE34  @ =0x000010E2
	add r0, r7, r3
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BCDFA
	sub r0, r0, #1
	strb r0, [r1]
_080BCDFA:
	mov r0, r9
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #9
	bne _080BCE38
	add r0, r5, #0
	bl SpriteActive_MainLong
	b _080BCE4A
_080BCE0C:
	.4byte gRam
_080BCE10:
	.4byte 0x000009AD
_080BCE14:
	.4byte 0x000016C4
_080BCE18:
	.4byte gUnknown_08173F38
_080BCE1C:
	.4byte 0x00000996
_080BCE20:
	.4byte 0x00001390
_080BCE24:
	.4byte 0x00000FA2
_080BCE28:
	.4byte 0x00000FF2
_080BCE2C:
	.4byte 0x000015DC
_080BCE30:
	.4byte 0x00001012
_080BCE34:
	.4byte 0x000010E2
_080BCE38:
	cmp r0, #6
	bne _080BCE44
	add r0, r5, #0
	bl sub_080C6DC8
	b _080BCE4A
_080BCE44:
	strb r4, [r1]
	mov r1, r8
	strb r4, [r1]
_080BCE4A:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BCDB0
	ldr r2, _080BCEE0  @ =gRam
	ldr r3, _080BCEE4  @ =0x000016C4
	add r0, r2, r3
	mov r6, r10
	strh r6, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	mov r3, sp
	ldrh r3, [r3, #4]
	strh r3, [r0]
	ldr r6, _080BCEE8  @ =0x00000A02
	add r0, r2, r6
	ldrb r1, [r0]
	ldr r3, _080BCEEC  @ =0x00000A03
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #150
	lsl r0, r0, #1
	cmp r1, r0
	bne _080BCEBC
	mov r6, #15
	add r4, r2, #0
	ldr r0, _080BCEF0  @ =0x00001022
	add r5, r4, r0
_080BCE86:
	ldr r1, _080BCEF4  @ =0x00000FF2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #190
	bne _080BCEAC
	ldr r3, _080BCEF8  @ =0x00000FA2
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080BCEAC
	add r1, r6, r5
	mov r0, #0
	strb r0, [r1]
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_080C2160
_080BCEAC:
	sub r6, r6, #1
	cmp r6, #4
	bgt _080BCE86
	ldr r2, _080BCEE0  @ =gRam
	ldr r6, _080BCEFC  @ =0x00000F62
	add r1, r2, r6
	mov r0, #16
	strb r0, [r1]
_080BCEBC:
	ldr r0, _080BCF00  @ =0x000009AD
	add r4, r2, r0
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE324
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r4]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BCEE0:
	.4byte gRam
_080BCEE4:
	.4byte 0x000016C4
_080BCEE8:
	.4byte 0x00000A02
_080BCEEC:
	.4byte 0x00000A03
_080BCEF0:
	.4byte 0x00001022
_080BCEF4:
	.4byte 0x00000FF2
_080BCEF8:
	.4byte 0x00000FA2
_080BCEFC:
	.4byte 0x00000F62
_080BCF00:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080BCD58

