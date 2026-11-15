	THUMB_FUNC_START sub_080BEBE0
sub_080BEBE0: @ 0x080BEBE0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r2, #15
	ldr r7, _080BED78  @ =gRam
_080BEBF6:
	ldr r1, _080BED7C  @ =0x00000996
	add r0, r7, r1
	ldrb r0, [r0]
	add r1, r2, #0
	eor r1, r1, r0
	mov r0, #3
	and r1, r1, r0
	ldr r3, _080BED80  @ =0x000010C2
	add r0, r7, r3
	add r0, r2, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	add r3, r3, #176
	add r0, r7, r3
	add r0, r2, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	beq _080BEC1E
	b _080BED5A
_080BEC1E:
	ldr r1, _080BED84  @ =0x000010F2
	add r0, r7, r1
	add r0, r2, r0
	ldr r3, _080BED88  @ =0x00000E47
	add r1, r7, r3
	add r1, r1, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _080BEC34
	b _080BED5A
_080BEC34:
	ldr r1, _080BED8C  @ =0x00000FA2
	add r0, r7, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #8
	bhi _080BEC42
	b _080BED5A
_080BEC42:
	sub r3, r3, #120
	add r0, r7, r3
	add r0, r0, r9
	mov r8, r0
	ldrb r1, [r0]
	add r3, r3, #20
	add r0, r7, r3
	mov r3, r9
	add r6, r3, r0
	ldrb r0, [r6]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _080BED90  @ =gUnknown_03002B90
	strb r1, [r0]
	lsr r1, r1, #8
	mov r3, #151
	lsl r3, r3, #4
	add r0, r7, r3
	strb r1, [r0]
	ldr r1, _080BED94  @ =0x00000DC5
	add r0, r7, r1
	mov r3, r9
	add r5, r3, r0
	ldrb r1, [r5]
	ldr r3, _080BED98  @ =0x00000DD9
	add r0, r7, r3
	mov r3, r9
	add r4, r3, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080BED9C  @ =0x00000A92
	add r0, r7, r3
	add r0, r0, r9
	ldrb r0, [r0]
	sub r1, r1, r0
	sub r1, r1, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _080BEDA0  @ =0x00000961
	add r0, r0, r7
	mov r10, r0
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r3, _080BEDA4  @ =0x00000971
	add r0, r7, r3
	strb r1, [r0]
	ldr r1, _080BEDA8  @ =0x00000964
	add r0, r7, r1
	mov r1, #48
	strb r1, [r0]
	sub r3, r3, #12
	add r0, r7, r3
	strb r1, [r0]
	add r0, r2, #0
	str r2, [sp]
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	ldr r2, [sp]
	cmp r0, #0
	beq _080BED5A
	ldr r1, _080BEDAC  @ =0x00000FF2
	add r0, r7, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #146
	bne _080BECE0
	ldr r3, _080BEDB0  @ =0x00000F82
	add r0, r7, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080BED5A
_080BECE0:
	mov r1, r8
	ldrb r0, [r1]
	ldr r3, _080BEDB4  @ =gUnknown_03002B98
	strb r0, [r3]
	ldrb r1, [r6]
	ldr r3, _080BEDB8  @ =0x00000969
	add r0, r7, r3
	strb r1, [r0]
	ldrb r0, [r5]
	ldr r1, _080BEDBC  @ =gUnknown_03002B9C
	strb r0, [r1]
	ldrb r1, [r4]
	add r3, r3, #4
	add r0, r7, r3
	strb r1, [r0]
	ldr r1, _080BEDC0  @ =0x00000E15
	add r0, r7, r1
	add r0, r0, r9
	ldrb r1, [r0]
	add r0, r2, #0
	str r2, [sp]
	bl sub_080C4E94
	ldr r3, _080BEDC4  @ =0x000016C4
	add r5, r7, r3
	ldrh r0, [r5]
	mov r8, r0
	mov r1, #182
	lsl r1, r1, #5
	add r4, r7, r1
	ldrh r6, [r4]
	ldr r3, _080BEDB4  @ =gUnknown_03002B98
	ldrh r0, [r3]
	strh r0, [r5]
	ldr r1, _080BEDBC  @ =gUnknown_03002B9C
	ldrh r0, [r1]
	strh r0, [r4]
	ldr r2, [sp]
	add r0, r2, #0
	mov r1, #64
	bl sub_080C2CB4
	mov r3, r8
	strh r3, [r5]
	strh r6, [r4]
	ldr r0, _080BEDC8  @ =0x00001102
	add r1, r7, r0
	ldr r2, [sp]
	add r1, r2, r1
	ldr r3, _080BED90  @ =gUnknown_03002B90
	mov r0, #0
	ldrsb r0, [r3, r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080BEDCC  @ =gUnknown_03003342
	add r1, r2, r0
	mov r3, r10
	mov r0, #0
	ldrsb r0, [r3, r0]
	neg r0, r0
	strb r0, [r1]
_080BED5A:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	blt _080BED66
	b _080BEBF6
_080BED66:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BED78:
	.4byte gRam
_080BED7C:
	.4byte 0x00000996
_080BED80:
	.4byte 0x000010C2
_080BED84:
	.4byte 0x000010F2
_080BED88:
	.4byte 0x00000E47
_080BED8C:
	.4byte 0x00000FA2
_080BED90:
	.4byte gUnknown_03002B90
_080BED94:
	.4byte 0x00000DC5
_080BED98:
	.4byte 0x00000DD9
_080BED9C:
	.4byte 0x00000A92
_080BEDA0:
	.4byte 0x00000961
_080BEDA4:
	.4byte 0x00000971
_080BEDA8:
	.4byte 0x00000964
_080BEDAC:
	.4byte 0x00000FF2
_080BEDB0:
	.4byte 0x00000F82
_080BEDB4:
	.4byte gUnknown_03002B98
_080BEDB8:
	.4byte 0x00000969
_080BEDBC:
	.4byte gUnknown_03002B9C
_080BEDC0:
	.4byte 0x00000E15
_080BEDC4:
	.4byte 0x000016C4
_080BEDC8:
	.4byte 0x00001102
_080BEDCC:
	.4byte gUnknown_03003342
	THUMB_FUNC_END sub_080BEBE0

