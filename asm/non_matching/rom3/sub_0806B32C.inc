	THUMB_FUNC_START sub_0806B32C
sub_0806B32C: @ 0x0806B32C
	push {r4,r5,lr}
	bl sub_08069FF4
	ldr r5, _0806B3A0  @ =gRam
	ldr r1, _0806B3A4  @ =0x0000099D
	add r0, r5, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #0
	bne _0806B39A
	ldr r2, _0806B3A8  @ =0x00000AA8
	add r0, r5, r2
	mov r4, #0
	strh r1, [r0]
	ldr r1, _0806B3AC  @ =0x00001605
	add r0, r5, r1
	strb r4, [r0]
	bl sub_0810BB04
	ldr r2, _0806B3B0  @ =0x000016D5
	add r1, r5, r2
	mov r0, #2
	strb r0, [r1]
	ldr r0, _0806B3B4  @ =0x00000A1A
	add r1, r5, r0
	mov r0, #9
	strh r0, [r1]
	ldr r1, _0806B3B8  @ =0x000009B2
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _0806B3BC  @ =0x00000A4C
	add r1, r5, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _0806B3C0  @ =0x000009E8
	add r1, r5, r0
	mov r0, #128
	strh r0, [r1]
	add r2, r2, #102
	add r1, r5, r2
	ldr r0, _0806B3C4  @ =0x0000FFFF
	strh r0, [r1]
	ldr r1, _0806B3C8  @ =0x000009AD
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _0806B3CC  @ =0x00000514
	add r1, r5, r2
	ldr r0, _0806B3D0  @ =0x0000F441
	strh r0, [r1]
	mov r0, #163
	lsl r0, r0, #3
	add r1, r5, r0
	ldr r0, _0806B3D4  @ =0x0000FC43
	strh r0, [r1]
_0806B39A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806B3A0:
	.4byte gRam
_0806B3A4:
	.4byte 0x0000099D
_0806B3A8:
	.4byte 0x00000AA8
_0806B3AC:
	.4byte 0x00001605
_0806B3B0:
	.4byte 0x000016D5
_0806B3B4:
	.4byte 0x00000A1A
_0806B3B8:
	.4byte 0x000009B2
_0806B3BC:
	.4byte 0x00000A4C
_0806B3C0:
	.4byte 0x000009E8
_0806B3C4:
	.4byte 0x0000FFFF
_0806B3C8:
	.4byte 0x000009AD
_0806B3CC:
	.4byte 0x00000514
_0806B3D0:
	.4byte 0x0000F441
_0806B3D4:
	.4byte 0x0000FC43
	THUMB_FUNC_END sub_0806B32C

