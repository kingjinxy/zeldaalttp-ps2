	THUMB_FUNC_START sub_0811A010
sub_0811A010: @ 0x0811A010
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0811A0AC  @ =gRam
	ldr r2, _0811A0B0  @ =0x00000DC5
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r3, _0811A0B4  @ =0x00001732
	add r0, r1, r3
	mov r3, #0
	strb r2, [r0]
	ldr r5, _0811A0B8  @ =0x00000DD9
	add r0, r1, r5
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r5, _0811A0BC  @ =0x00001733
	add r0, r1, r5
	strb r2, [r0]
	ldr r0, _0811A0C0  @ =0x00000979
	add r5, r1, r0
	strb r3, [r5]
	sub r0, r0, #1
	add r2, r1, r0
	strb r3, [r2]
	ldr r3, _0811A0C4  @ =0x00000E3D
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r0, r0, #24
	add r3, r1, #0
	cmp r0, #2
	bne _0811A068
	ldr r1, _0811A0C8  @ =0x00000A92
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811A068
	mov r0, #255
	strb r0, [r5]
_0811A068:
	ldr r2, _0811A0CC  @ =0x00000978
	add r0, r3, r2
	ldrh r2, [r0]
	ldr r0, _0811A0D0  @ =0x0000FFFF
	cmp r2, r0
	bne _0811A076
	mov r2, #0
_0811A076:
	ldr r5, _0811A0B4  @ =0x00001732
	add r0, r3, r5
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, r2
	ldr r0, _0811A0D4  @ =0x0000097C
	add r2, r3, r0
	strh r1, [r2]
	ldr r1, _0811A0B0  @ =0x00000DC5
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r2, _0811A0B8  @ =0x00000DD9
	add r0, r3, r2
	add r0, r4, r0
	ldr r5, _0811A0D8  @ =0x0000097D
	add r1, r3, r5
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0811A0AC:
	.4byte gRam
_0811A0B0:
	.4byte 0x00000DC5
_0811A0B4:
	.4byte 0x00001732
_0811A0B8:
	.4byte 0x00000DD9
_0811A0BC:
	.4byte 0x00001733
_0811A0C0:
	.4byte 0x00000979
_0811A0C4:
	.4byte 0x00000E3D
_0811A0C8:
	.4byte 0x00000A92
_0811A0CC:
	.4byte 0x00000978
_0811A0D0:
	.4byte 0x0000FFFF
_0811A0D4:
	.4byte 0x0000097C
_0811A0D8:
	.4byte 0x0000097D
	THUMB_FUNC_END sub_0811A010

