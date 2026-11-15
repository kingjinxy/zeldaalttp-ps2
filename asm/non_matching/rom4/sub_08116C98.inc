	THUMB_FUNC_START sub_08116C98
sub_08116C98: @ 0x08116C98
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _08116D20  @ =gRam
	ldr r1, _08116D24  @ =0x0000178A
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08116D16
	mov r0, #4
	mov r1, #63
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _08116D16
	mov r1, sp
	ldr r3, _08116D28  @ =0x00000E29
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _08116D2C  @ =0x00000E33
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	mov r0, #21
	bl Sound_SetSfxPanWithPlayerCoords
	ldr r3, _08116D30  @ =0x00001734
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08116D34  @ =0x00001735
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #2
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _08116D38  @ =0x00001732
	add r0, r4, r1
	ldrb r1, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_08116D16:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08116D20:
	.4byte gRam
_08116D24:
	.4byte 0x0000178A
_08116D28:
	.4byte 0x00000E29
_08116D2C:
	.4byte 0x00000E33
_08116D30:
	.4byte 0x00001734
_08116D34:
	.4byte 0x00001735
_08116D38:
	.4byte 0x00001732
	THUMB_FUNC_END sub_08116C98

