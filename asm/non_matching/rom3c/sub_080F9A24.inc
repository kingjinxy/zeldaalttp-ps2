	THUMB_FUNC_START sub_080F9A24
sub_080F9A24: @ 0x080F9A24
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r5, _080F9AA8  @ =gRam
	ldr r1, _080F9AAC  @ =0x00001052
	add r0, r5, r1
	add r6, r4, r0
	ldrb r1, [r6]
	mov r7, #3
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080F9A9C
	ldr r0, _080F9AB0  @ =0x00001152
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #16
	bne _080F9A7E
	ldr r0, _080F9AB4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F9BB8
	ldr r1, _080F9AB8  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldr r1, _080F9ABC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #80
	strb r1, [r0]
_080F9A7E:
	ldrb r0, [r6]
	add r2, r7, #0
	and r2, r2, r0
	cmp r2, #0
	bne _080F9A9C
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r5, r1
	strb r2, [r0]
	mov r0, r8
	bl sub_080F98B4
_080F9A9C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9AA8:
	.4byte gRam
_080F9AAC:
	.4byte 0x00001052
_080F9AB0:
	.4byte 0x00001152
_080F9AB4:
	.4byte 0x00000F52
_080F9AB8:
	.4byte 0x00000EF2
_080F9ABC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F9A24

