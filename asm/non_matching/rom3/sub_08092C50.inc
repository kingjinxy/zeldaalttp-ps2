	THUMB_FUNC_START sub_08092C50
sub_08092C50: @ 0x08092C50
	push {lr}
	ldr r3, _08092C8C  @ =gRam
	ldr r1, _08092C90  @ =0x0000178A
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08092C94  @ =0x00001789
	add r0, r3, r2
	strb r1, [r0]
	sub r2, r2, #158
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _08092C98  @ =0x000016E8
	add r2, r3, r0
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	strb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08092C88
	ldr r1, _08092C9C  @ =0x00001705
	add r2, r3, r1
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_08092C88:
	pop {r0}
	bx r0
_08092C8C:
	.4byte gRam
_08092C90:
	.4byte 0x0000178A
_08092C94:
	.4byte 0x00001789
_08092C98:
	.4byte 0x000016E8
_08092C9C:
	.4byte 0x00001705
	THUMB_FUNC_END sub_08092C50

