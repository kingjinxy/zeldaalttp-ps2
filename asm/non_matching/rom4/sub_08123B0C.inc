	THUMB_FUNC_START sub_08123B0C
sub_08123B0C: @ 0x08123B0C
	push {r4,lr}
	sub sp, sp, #4
	mov r0, #65
	mov r1, sp
	bl sub_080AE588
	lsl r0, r0, #24
	cmp r0, #0
	bne _08123B4C
	mov r0, #4
	mov r1, #65
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _08123B4C
	ldr r2, _08123B54  @ =gRam
	mov r1, sp
	ldr r4, _08123B58  @ =0x00000E33
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	mov r0, sp
	ldr r1, _08123B5C  @ =0x00000E29
	add r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	strb r3, [r2]
_08123B4C:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_08123B54:
	.4byte gRam
_08123B58:
	.4byte 0x00000E33
_08123B5C:
	.4byte 0x00000E29
	THUMB_FUNC_END sub_08123B0C

