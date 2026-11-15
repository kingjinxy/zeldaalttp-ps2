	THUMB_FUNC_START sub_0812D928
sub_0812D928: @ 0x0812D928
	push {r4-r6,lr}
	bl sub_08126D5C
	bl sub_0812E0A0
	bl sub_08069F08
	ldr r4, _0812D974  @ =gRam
	ldr r0, _0812D978  @ =0x0000099D
	add r6, r4, r0
	mov r5, #0
	ldrsb r5, [r6, r5]
	cmp r5, #0
	bne _0812D96E
	mov r0, #8
	bl sub_0812A0A0
	ldr r0, _0812D97C  @ =0x00000A36
	add r1, r4, r0
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	ldr r0, _0812D980  @ =0x000009AC
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0812D984  @ =0x00000B52
	add r0, r4, r1
	strh r5, [r0]
	ldr r1, _0812D988  @ =0x000009AD
	add r0, r4, r1
	strb r2, [r0]
	strb r2, [r6]
	ldr r0, _0812D98C  @ =gUnknown_02006880
	strb r2, [r0]
_0812D96E:
	pop {r4-r6}
	pop {r0}
	bx r0
_0812D974:
	.4byte gRam
_0812D978:
	.4byte 0x0000099D
_0812D97C:
	.4byte 0x00000A36
_0812D980:
	.4byte 0x000009AC
_0812D984:
	.4byte 0x00000B52
_0812D988:
	.4byte 0x000009AD
_0812D98C:
	.4byte gUnknown_02006880
	THUMB_FUNC_END sub_0812D928

