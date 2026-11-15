	THUMB_FUNC_START sub_081226A0
sub_081226A0: @ 0x081226A0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r0, r4, #0
	mov r1, sp
	bl sub_080AE588
	lsl r0, r0, #24
	cmp r0, #0
	bne _0812270A
	add r0, r5, #0
	add r1, r4, #0
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _0812270A
	ldr r2, _08122714  @ =gRam
	mov r1, sp
	ldr r4, _08122718  @ =0x00000E33
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #120
	strb r1, [r0]
	mov r1, sp
	ldr r4, _0812271C  @ =0x00001818
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r4, _08122720  @ =0x00000A88
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r0, sp
	ldr r1, _08122724  @ =0x00000A92
	add r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	strb r3, [r2]
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #0
	bl sub_081227EC
_0812270A:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08122714:
	.4byte gRam
_08122718:
	.4byte 0x00000E33
_0812271C:
	.4byte 0x00001818
_08122720:
	.4byte 0x00000A88
_08122724:
	.4byte 0x00000A92
	THUMB_FUNC_END sub_081226A0

