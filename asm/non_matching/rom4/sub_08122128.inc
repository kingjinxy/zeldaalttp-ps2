	THUMB_FUNC_START sub_08122128
sub_08122128: @ 0x08122128
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08122174  @ =gRam
	ldr r2, _08122178  @ =0x00000E15
	add r1, r3, r2
	add r0, r0, r1
	mov r2, #0
	strb r2, [r0]
	ldr r1, _0812217C  @ =0x000017F0
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _08122180  @ =0x0000178A
	add r4, r3, r0
	ldrb r1, [r4]
	mov r5, #128
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0812216E
	strb r2, [r4]
	ldr r1, _08122184  @ =0x000016E8
	add r2, r3, r1
	ldrb r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	strb r0, [r2]
	cmp r0, #0
	bne _0812216E
	ldr r0, _08122188  @ =0x00001705
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_0812216E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08122174:
	.4byte gRam
_08122178:
	.4byte 0x00000E15
_0812217C:
	.4byte 0x000017F0
_08122180:
	.4byte 0x0000178A
_08122184:
	.4byte 0x000016E8
_08122188:
	.4byte 0x00001705
	THUMB_FUNC_END sub_08122128

