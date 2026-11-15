	THUMB_FUNC_START sub_08111D48
sub_08111D48: @ 0x08111D48
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r5, _08111E2C  @ =gRam
	ldr r1, _08111E30  @ =0x00000FB2
	add r0, r5, r1
	add r0, r0, r7
	mov r10, r0
	ldrb r4, [r0]
	str r4, [sp]
	ldr r2, _08111E34  @ =gShield
	ldrb r2, [r2]
	str r2, [sp, #4]
	lsr r0, r4, #1
	mov r2, #0
	mov r1, #3
	eor r0, r0, r1
	mov r3, r10
	strb r0, [r3]
	ldr r0, _08111E34  @ =gShield
	strb r2, [r0]
	add r0, r7, #0
	bl sub_080EC688
	lsl r0, r0, #24
	asr r6, r0, #24
	cmp r6, #0
	blt _08111E0C
	ldr r1, _08111E38  @ =gUnknown_03003112
	add r0, r7, r1
	ldrb r2, [r0]
	ldr r3, _08111E3C  @ =0x00000F02
	add r3, r3, r5
	mov r12, r3
	add r0, r7, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _08111E40  @ =gUnknown_0817D720
	mov r8, r0
	lsr r1, r4, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r2
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r5
	mov r9, r2
	strh r0, [r2]
	ldr r0, _08111E44  @ =0x00000ED2
	add r3, r5, r0
	add r0, r7, r3
	ldrb r2, [r0]
	ldr r0, _08111E48  @ =0x00000EF2
	add r4, r5, r0
	add r0, r7, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	add r1, r1, #1
	add r1, r1, r8
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, r2
	ldr r2, _08111E4C  @ =0x00000964
	add r1, r5, r2
	strh r0, [r1]
	ldr r0, _08111E38  @ =gUnknown_03003112
	add r0, r6, r0
	str r0, [sp, #8]
	mov r2, r9
	ldrb r0, [r2]
	ldr r2, [sp, #8]
	strb r0, [r2]
	mov r0, r12
	add r0, r6, r0
	str r0, [sp, #12]
	ldr r2, _08111E50  @ =0x00000961
	add r0, r5, r2
	ldrb r0, [r0]
	ldr r2, [sp, #12]
	strb r0, [r2]
	add r3, r6, r3
	ldrb r0, [r1]
	strb r0, [r3]
	add r4, r6, r4
	ldr r3, _08111E54  @ =0x00000965
	add r0, r5, r3
	ldrb r0, [r0]
	strb r0, [r4]
_08111E0C:
	mov r0, sp
	ldrb r1, [r0]
	mov r0, r10
	strb r1, [r0]
	mov r2, sp
	ldrb r3, [r2, #4]
	ldr r2, _08111E34  @ =gShield
	strb r3, [r2]
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08111E2C:
	.4byte gRam
_08111E30:
	.4byte 0x00000FB2
_08111E34:
	.4byte gShield
_08111E38:
	.4byte gUnknown_03003112
_08111E3C:
	.4byte 0x00000F02
_08111E40:
	.4byte gUnknown_0817D720
_08111E44:
	.4byte 0x00000ED2
_08111E48:
	.4byte 0x00000EF2
_08111E4C:
	.4byte 0x00000964
_08111E50:
	.4byte 0x00000961
_08111E54:
	.4byte 0x00000965
	THUMB_FUNC_END sub_08111D48

