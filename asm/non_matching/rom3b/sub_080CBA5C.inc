	THUMB_FUNC_START sub_080CBA5C
sub_080CBA5C: @ 0x080CBA5C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r3, #15
	ldr r4, _080CBAAC  @ =gRam
	ldr r0, _080CBAB0  @ =0x00000FF2
	add r0, r0, r4
	mov r9, r0
	mov r6, #0
	ldr r1, _080CBAB4  @ =0x00000FB1
	add r5, r4, r1
	ldr r2, _080CBAB8  @ =0x00000E65
	add r2, r2, r4
	mov r8, r2
	mov r7, #171
	lsl r7, r7, #4
	add r7, r7, r4
	mov r12, r7
	ldr r0, _080CBABC  @ =0x00000F72
	add r7, r4, r0
_080CBA86:
	ldrb r1, [r5]
	mov r2, r9
	add r0, r3, r2
	ldrb r2, [r0]
	add r0, r2, #0
	cmp r1, #0
	beq _080CBAE0
	cmp r1, #10
	beq _080CBAC0
	cmp r2, #108
	beq _080CBAE0
	mov r1, r8
	add r0, r3, r1
	ldrb r0, [r0]
	mov r2, r12
	ldrh r2, [r2]
	cmp r0, r2
	beq _080CBAE0
	b _080CBADE
_080CBAAC:
	.4byte gRam
_080CBAB0:
	.4byte 0x00000FF2
_080CBAB4:
	.4byte 0x00000FB1
_080CBAB8:
	.4byte 0x00000E65
_080CBABC:
	.4byte 0x00000F72
_080CBAC0:
	cmp r0, #236
	beq _080CBAE0
	cmp r0, #210
	beq _080CBAE0
	cmp r0, #11
	bne _080CBAD2
	add r0, r3, r7
	strb r6, [r0]
	b _080CBAE0
_080CBAD2:
	ldr r1, _080CBB24  @ =0x00001792
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _080CBB28  @ =0x00001791
	add r0, r4, r2
	strb r6, [r0]
_080CBADE:
	strb r6, [r5]
_080CBAE0:
	sub r5, r5, #1
	sub r3, r3, #1
	cmp r3, #0
	bge _080CBA86
	mov r3, #7
	ldr r2, _080CBB2C  @ =gUnknown_03002F4B
	mov r7, #189
	lsl r7, r7, #1
	add r6, r2, r7
	ldr r0, _080CBB30  @ =0xFFFFFD95
	add r5, r2, r0
	mov r4, #0
_080CBAF8:
	add r1, r3, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _080CBB0C
	add r0, r3, r6
	ldrb r0, [r0]
	ldrh r7, [r5]
	cmp r0, r7
	beq _080CBB0C
	strb r4, [r1]
_080CBB0C:
	sub r3, r3, #1
	cmp r3, #0
	bge _080CBAF8
	bl sub_0811195C
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CBB24:
	.4byte 0x00001792
_080CBB28:
	.4byte 0x00001791
_080CBB2C:
	.4byte gUnknown_03002F4B
_080CBB30:
	.4byte 0xFFFFFD95
	THUMB_FUNC_END sub_080CBA5C

