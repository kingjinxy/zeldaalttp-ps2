	THUMB_FUNC_START sub_080C9898
sub_080C9898: @ 0x080C9898
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #1
	str r0, [sp]
	mov r2, #15
	ldr r4, _080C9984  @ =gRam
	ldr r1, _080C9988  @ =0x00000F02
	add r1, r1, r4
	mov r10, r1
	ldr r3, _080C998C  @ =0x00000ED2
	add r3, r3, r4
	mov r9, r3
	ldr r1, _080C9990  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	str r0, [sp, #4]
	ldr r3, _080C9994  @ =0x00000EF2
	add r3, r3, r4
	mov r8, r3
	ldr r0, _080C9998  @ =0x00000968
	add r0, r0, r4
	mov r12, r0
_080C98D0:
	lsl r2, r2, #24
	asr r3, r2, #24
	add r1, r3, #0
	ldr r0, [sp, #4]
	eor r1, r1, r0
	mov r0, #1
	and r1, r1, r0
	add r7, r2, #0
	cmp r1, #0
	bne _080C99BC
	ldr r1, _080C9984  @ =gRam
	ldr r2, _080C999C  @ =0x00000FA2
	add r0, r1, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C99BC
	ldr r1, _080C99A0  @ =0x00000FF2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #28
	bne _080C99BC
	ldr r2, _080C99A4  @ =gUnknown_03003112
	add r0, r5, r2
	ldrb r0, [r0]
	ldr r1, _080C99A8  @ =gUnknown_03002B90
	strb r0, [r1]
	mov r2, r10
	add r0, r5, r2
	ldrb r1, [r0]
	ldr r2, _080C99AC  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
	mov r1, r9
	add r0, r5, r1
	ldrb r0, [r0]
	add r2, r2, #3
	add r6, r4, r2
	strb r0, [r6]
	mov r1, r8
	add r0, r5, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080C99A4  @ =gUnknown_03003112
	add r0, r3, r1
	ldrb r0, [r0]
	mov r2, r12
	strb r0, [r2]
	mov r1, r10
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080C99B0  @ =0x00000969
	add r0, r4, r2
	strb r1, [r0]
	mov r1, r9
	add r0, r3, r1
	ldrb r0, [r0]
	ldr r1, _080C99B4  @ =0x0000096C
	add r2, r4, r1
	strb r0, [r2]
	mov r1, r8
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r3, _080C99B8  @ =0x0000096D
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C99A8  @ =gUnknown_03002B90
	ldrh r0, [r1]
	mov r3, r12
	ldrh r1, [r3]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bhi _080C99BC
	ldrh r0, [r6]
	ldrh r1, [r2]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bhi _080C99BC
	mov r0, #0
	str r0, [sp]
	b _080C99C8
_080C9984:
	.4byte gRam
_080C9988:
	.4byte 0x00000F02
_080C998C:
	.4byte 0x00000ED2
_080C9990:
	.4byte 0x00000996
_080C9994:
	.4byte 0x00000EF2
_080C9998:
	.4byte 0x00000968
_080C999C:
	.4byte 0x00000FA2
_080C99A0:
	.4byte 0x00000FF2
_080C99A4:
	.4byte gUnknown_03003112
_080C99A8:
	.4byte gUnknown_03002B90
_080C99AC:
	.4byte 0x00000961
_080C99B0:
	.4byte 0x00000969
_080C99B4:
	.4byte 0x0000096C
_080C99B8:
	.4byte 0x0000096D
_080C99BC:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r7, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080C98D0
_080C99C8:
	ldr r0, [sp]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C9898

	.byte 0x00
	.byte 0x00
