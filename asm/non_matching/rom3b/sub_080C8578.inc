	THUMB_FUNC_START sub_080C8578
sub_080C8578: @ 0x080C8578
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r9, r4
	ldr r0, _080C85A4  @ =gRam
	mov r8, r0
	ldr r0, _080C85A8  @ =0x00000F52
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C85AC
	add r0, r4, #0
	bl sub_080C86D8
	b _080C869A
	.byte 0x00
	.byte 0x00
_080C85A4:
	.4byte gRam
_080C85A8:
	.4byte 0x00000F52
_080C85AC:
	ldr r0, _080C86AC  @ =0x00000F62
	add r0, r0, r8
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #6
	bne _080C85BE
	mov r0, #8
	bl sub_080CF3A0
_080C85BE:
	ldr r2, _080C86B0  @ =0x00001032
	add r2, r2, r8
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C6240
	ldr r2, _080C86B4  @ =gUnknown_081724E0
	ldr r0, _080C86B8  @ =0x00001052
	add r0, r0, r8
	add r0, r0, r4
	mov r10, r0
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r5, _080C86BC  @ =0x00000969
	add r5, r5, r8
	strb r0, [r5]
	ldr r0, _080C86C0  @ =0x00000FC2
	add r0, r0, r8
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #1
	bne _080C8604
	ldr r0, _080C86C4  @ =0x00000FA2
	add r0, r0, r8
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080C8604:
	mov r6, #26
	ldrb r0, [r7]
	cmp r0, #0
	beq _080C861A
	mov r0, #0
	strb r0, [r5]
	ldr r1, _080C86C8  @ =gUnknown_081724E4
	ldrb r0, [r7]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r6, [r0]
_080C861A:
	ldr r0, _080C86CC  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r4, r0, #3
	mov r1, #170
	lsl r1, r1, #3
	add r1, r1, r8
	add r4, r4, r1
	ldrh r1, [r4, #2]
	lsl r1, r1, #23
	lsr r1, r1, #23
	ldrb r2, [r4]
	ldrb r5, [r5]
	mov r3, #36
	orr r3, r3, r5
	lsl r3, r3, #8
	orr r6, r6, r3
	ldrb r3, [r4, #3]
	lsr r3, r3, #6
	lsl r3, r3, #1
	str r3, [sp]
	add r3, r6, #0
	bl sub_080C6004
	ldrb r0, [r7]
	cmp r0, #0
	bne _080C869A
	mov r0, r9
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _080C869A
	mov r1, r10
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, r9
	bl Sprite3_Move
	mov r0, r9
	bl sub_080C2C4C
	ldr r1, _080C86D0  @ =0x00001152
	add r1, r1, r8
	add r1, r1, r9
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	ldr r0, _080C86D4  @ =0x00001142
	add r0, r0, r8
	mov r1, r9
	add r2, r1, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C869A
	strb r4, [r2]
	mov r0, #18
	strb r0, [r7]
	mov r0, r9
	bl sub_080C8764
_080C869A:
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
_080C86AC:
	.4byte 0x00000F62
_080C86B0:
	.4byte 0x00001032
_080C86B4:
	.4byte gUnknown_081724E0
_080C86B8:
	.4byte 0x00001052
_080C86BC:
	.4byte 0x00000969
_080C86C0:
	.4byte 0x00000FC2
_080C86C4:
	.4byte 0x00000FA2
_080C86C8:
	.4byte gUnknown_081724E4
_080C86CC:
	.4byte gUnknown_03003E74
_080C86D0:
	.4byte 0x00001152
_080C86D4:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080C8578

