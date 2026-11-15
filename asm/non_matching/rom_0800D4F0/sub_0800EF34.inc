	THUMB_FUNC_START sub_0800EF34
sub_0800EF34: @ 0x0800EF34
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	add r6, r1, #0
	ldrb r0, [r7, #2]
	ldrb r1, [r7, #3]
	cmp r0, r1
	bhi _0800EF48
	b _0800F08E
_0800EF48:
	ldr r0, [r6]
	bl sub_0800F190
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _0800EF58
	b _0800F08E
_0800EF58:
	ldr r2, _0800EF7C  @ =gUnknown_0202E158
	mov r8, r2
	ldrb r0, [r7, #3]
	mov r4, #7
	add r1, r4, #0
	and r1, r1, r0
	ldrb r0, [r2, #1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0800EF80
	neg r0, r5
	orr r0, r0, r5
	lsr r0, r0, #31
	b _0800EF9E
	.byte 0x00
	.byte 0x00
_0800EF7C:
	.4byte gUnknown_0202E158
_0800EF80:
	bl sub_0800B830
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r1, [r7, #3]
	add r0, r4, #0
	and r0, r0, r1
	mov r1, r8
	ldrb r1, [r1, #3]
	add r0, r0, r1
	mov r1, #3
	cmp r0, #8
	bgt _0800EF9C
	mov r1, #2
_0800EF9C:
	add r0, r1, #0
_0800EF9E:
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	beq _0800EFE4
	cmp r0, #2
	bgt _0800EFB0
	cmp r0, #1
	beq _0800EFB6
	b _0800F07C
_0800EFB0:
	cmp r0, #3
	beq _0800F014
	b _0800F07C
_0800EFB6:
	lsl r0, r5, #26
	lsr r5, r0, #24
	mov r2, #16
	ldr r0, _0800EFDC  @ =gUnknown_0202E160
	mov r8, r0
	mov r4, r8
	ldr r3, _0800EFE0  @ =gUnknown_0202E158
_0800EFC4:
	ldm r6!, {r0}
	ldr r1, [r3, #4]
	and r0, r0, r1
	lsr r0, r0, r5
	stm r4!, {r0}
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0800EFC4
	mov r6, r8
	b _0800F07C
_0800EFDC:
	.4byte gUnknown_0202E160
_0800EFE0:
	.4byte gUnknown_0202E158
_0800EFE4:
	lsl r0, r5, #26
	lsr r5, r0, #24
	mov r2, #16
	ldr r1, _0800F00C  @ =gUnknown_0202E160
	mov r8, r1
	mov r4, r8
	ldr r3, _0800F010  @ =gUnknown_0202E158
_0800EFF2:
	ldm r6!, {r0}
	ldr r1, [r3, #4]
	and r0, r0, r1
	lsl r0, r0, r5
	stm r4!, {r0}
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0800EFF2
	mov r6, r8
	b _0800F07C
	.byte 0x00
	.byte 0x00
_0800F00C:
	.4byte gUnknown_0202E160
_0800F010:
	.4byte gUnknown_0202E158
_0800F014:
	ldrb r0, [r7, #3]
	mov r1, #7
	and r1, r1, r0
	mov r0, #8
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0800F098  @ =gUnknown_0202E158
	ldrb r1, [r2, #1]
	add r1, r3, r1
	ldrb r0, [r2, #3]
	sub r0, r0, r3
	strb r0, [r2, #3]
	lsl r0, r5, #26
	lsr r5, r0, #24
	lsl r1, r1, #26
	lsr r1, r1, #24
	mov r12, r1
	mov r3, #16
	ldr r0, _0800F09C  @ =gUnknown_0202E160
	mov r8, r0
	mov r4, r8
_0800F040:
	ldr r0, [r6]
	ldr r1, [r2, #4]
	and r0, r0, r1
	lsl r0, r0, r5
	str r0, [r4]
	ldm r6!, {r0}
	ldr r1, [r2, #4]
	and r0, r0, r1
	mov r1, r12
	lsr r0, r0, r1
	str r0, [r4, #64]
	add r4, r4, #4
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _0800F040
	add r0, r7, #0
	mov r1, r8
	bl sub_0800F0A0
	mov r6, r8
	add r6, r6, #64
	ldrb r0, [r7, #3]
	add r0, r0, #7
	mov r2, #8
	neg r2, r2
	add r1, r2, #0
	and r0, r0, r1
	strb r0, [r7, #3]
_0800F07C:
	add r0, r7, #0
	add r1, r6, #0
	bl sub_0800F0A0
	ldr r0, _0800F098  @ =gUnknown_0202E158
	ldrb r0, [r0, #3]
	ldrb r1, [r7, #3]
	add r0, r0, r1
	strb r0, [r7, #3]
_0800F08E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0800F098:
	.4byte gUnknown_0202E158
_0800F09C:
	.4byte gUnknown_0202E160
	THUMB_FUNC_END sub_0800EF34

