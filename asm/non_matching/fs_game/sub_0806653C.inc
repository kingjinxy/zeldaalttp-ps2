	THUMB_FUNC_START sub_0806653C
sub_0806653C: @ 0x0806653C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08003828
	ldr r0, [r7]
	bl sub_08000580
	add r1, r7, #4
	strb r0, [r1]
	ldrb r0, [r1]
	cmp r0, #0
	bne _0806655C
	b _08066680
_0806655C:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08066578
	ldr r0, [r7]
	ldr r1, _08066634  @ =gUnknown_03006A30
	ldr r2, [r1, #40]
	str r2, [r0, #88]
_08066578:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08066598
	ldr r0, [r7]
	ldr r2, _08066634  @ =gUnknown_03006A30
	add r1, r2, #0
	add r2, r2, #184
	ldr r1, [r2]
	str r1, [r0, #88]
_08066598:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080665BC
	ldr r0, [r7]
	ldr r2, _08066634  @ =gUnknown_03006A30
	add r1, r2, #0
	mov r1, #164
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	str r1, [r0, #88]
_080665BC:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080665E0
	ldr r0, [r7]
	ldr r2, _08066634  @ =gUnknown_03006A30
	add r1, r2, #0
	mov r1, #236
	lsl r1, r1, #1
	add r2, r2, r1
	ldr r1, [r2]
	str r1, [r0, #88]
_080665E0:
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, _08066638  @ =gUnknown_08137B10
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r0, [r0, #96]
	ldr r1, [r1]
	and r0, r0, r1
	cmp r0, #0
	bne _0806663C
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, _08066638  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1, #96]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0, #96]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	mov r0, #24
	bl 0x08003DFC
	b _0806667A
	.byte 0x00
	.byte 0x00
_08066634:
	.4byte gUnknown_03006A30
_08066638:
	.4byte gUnknown_08137B10
_0806663C:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r1, #96]
	ldr r1, _0806667C  @ =0x0000FFFF
	cmp r0, r1
	bne _0806667A
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	ldr r0, [r7]
	bl sub_08066808
_0806667A:
	b _080666AA
_0806667C:
	.4byte 0x0000FFFF
_08066680:
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, _080666B4  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r3, [r2]
	mvn r2, r3
	ldr r1, [r1, #96]
	and r2, r2, r1
	str r2, [r0, #96]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
_080666AA:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080666B4:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0806653C

