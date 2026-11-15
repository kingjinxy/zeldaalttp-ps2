	THUMB_FUNC_START sub_08068CFC
sub_08068CFC: @ 0x08068CFC
	push {r4,lr}
	ldr r1, _08068D48  @ =gRam
	mov r0, #162
	lsl r0, r0, #3
	add r2, r1, r0
	mov r4, #0
	mov r3, #0
	ldr r0, _08068D4C  @ =0x00002001
	strh r0, [r2]
	ldr r0, _08068D50  @ =0x0000050E
	add r2, r1, r0
	mov r0, #8
	strh r0, [r2]
	ldr r2, _08068D54  @ =0x0000051E
	add r0, r1, r2
	strh r3, [r0]
	sub r2, r2, #4
	add r0, r1, r2
	strh r3, [r0]
	add r2, r2, #2
	add r0, r1, r2
	strh r3, [r0]
	ldr r2, _08068D58  @ =0x0000099A
	add r0, r1, r2
	strb r4, [r0]
	sub r2, r2, #2
	add r0, r1, r2
	strb r4, [r0]
	add r2, r2, #1
	add r0, r1, r2
	strb r4, [r0]
	ldr r0, _08068D5C  @ =0x0000098A
	add r1, r1, r0
	strb r4, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08068D48:
	.4byte gRam
_08068D4C:
	.4byte 0x00002001
_08068D50:
	.4byte 0x0000050E
_08068D54:
	.4byte 0x0000051E
_08068D58:
	.4byte 0x0000099A
_08068D5C:
	.4byte 0x0000098A
	THUMB_FUNC_END sub_08068CFC

