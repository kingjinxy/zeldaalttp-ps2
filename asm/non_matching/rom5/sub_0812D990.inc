	THUMB_FUNC_START sub_0812D990
sub_0812D990: @ 0x0812D990
	push {r4-r6,lr}
	bl sub_08126D5C
	bl sub_0812E0A0
	bl sub_08069F08
	ldr r5, _0812D9F0  @ =gRam
	ldr r0, _0812D9F4  @ =0x0000099D
	add r6, r5, r0
	mov r4, #0
	ldrsb r4, [r6, r4]
	cmp r4, #0
	bne _0812D9EA
	mov r0, #8
	bl sub_0812A0A0
	bl sub_0806BE2C
	bl sub_0806BDB8
	ldr r1, _0812D9F8  @ =gUnknown_020023F3
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0812D9FC  @ =0x00000A36
	add r1, r5, r0
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	ldr r0, _0812DA00  @ =0x000009AC
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _0812DA04  @ =0x000009AD
	add r0, r5, r1
	strb r2, [r0]
	ldr r1, _0812DA08  @ =0x00000B52
	add r0, r5, r1
	strh r4, [r0]
	ldr r1, _0812DA0C  @ =0x00000A1C
	add r0, r5, r1
	strh r4, [r0]
	strb r2, [r6]
	ldr r0, _0812DA10  @ =gUnknown_02006880
	strb r2, [r0]
_0812D9EA:
	pop {r4-r6}
	pop {r0}
	bx r0
_0812D9F0:
	.4byte gRam
_0812D9F4:
	.4byte 0x0000099D
_0812D9F8:
	.4byte gUnknown_020023F3
_0812D9FC:
	.4byte 0x00000A36
_0812DA00:
	.4byte 0x000009AC
_0812DA04:
	.4byte 0x000009AD
_0812DA08:
	.4byte 0x00000B52
_0812DA0C:
	.4byte 0x00000A1C
_0812DA10:
	.4byte gUnknown_02006880
	THUMB_FUNC_END sub_0812D990

