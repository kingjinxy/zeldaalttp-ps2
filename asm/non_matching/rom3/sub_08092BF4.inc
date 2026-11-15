	THUMB_FUNC_START sub_08092BF4
sub_08092BF4: @ 0x08092BF4
	push {r4,lr}
	ldr r1, _08092C38  @ =gRam
	ldr r2, _08092C3C  @ =0x00001719
	add r0, r1, r2
	mov r3, #0
	strb r3, [r0]
	ldr r0, _08092C40  @ =0x000016FA
	add r4, r1, r0
	ldrb r2, [r4]
	mov r0, #246
	and r0, r0, r2
	strb r0, [r4]
	ldr r2, _08092C44  @ =0x000016EB
	add r0, r1, r2
	strb r3, [r0]
	sub r2, r2, #1
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _08092C48  @ =0x000016E8
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #126
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _08092C4C  @ =0x00001705
	add r1, r1, r2
	ldrb r2, [r1]
	mov r0, #254
	and r0, r0, r2
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092C38:
	.4byte gRam
_08092C3C:
	.4byte 0x00001719
_08092C40:
	.4byte 0x000016FA
_08092C44:
	.4byte 0x000016EB
_08092C48:
	.4byte 0x000016E8
_08092C4C:
	.4byte 0x00001705
	THUMB_FUNC_END sub_08092BF4

