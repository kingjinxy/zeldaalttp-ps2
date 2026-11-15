	THUMB_FUNC_START sub_0812D618
sub_0812D618: @ 0x0812D618
	push {r4-r6,lr}
	bl sub_08130D9C
	bl sub_081295F4
	ldr r4, _0812D69C  @ =gRam
	mov r0, #162
	lsl r0, r0, #3
	add r1, r4, r0
	mov r6, #0
	mov r5, #0
	ldr r0, _0812D6A0  @ =0x00002081
	strh r0, [r1]
	mov r2, #149
	lsl r2, r2, #4
	add r1, r4, r2
	mov r0, #8
	strh r0, [r1]
	ldr r1, _0812D6A4  @ =0x00000956
	add r0, r4, r1
	mov r2, #24
	strh r2, [r0]
	ldr r0, _0812D6A8  @ =0x00000952
	add r1, r4, r0
	mov r0, #16
	strh r0, [r1]
	ldr r1, _0812D6AC  @ =0x00000958
	add r0, r4, r1
	strh r2, [r0]
	ldr r0, _0812D6B0  @ =gUnknown_083B47FC
	ldr r1, _0812D6B4  @ =0x06003400
	bl LZ77UnCompVram
	mov r0, #93
	bl sub_0812FCDC
	ldr r2, _0812D6B8  @ =0x00000CFE
	add r0, r4, r2
	mov r1, #2
	strh r1, [r0]
	ldr r2, _0812D6BC  @ =0x000009C6
	add r0, r4, r2
	strh r5, [r0]
	ldr r2, _0812D6C0  @ =0x00000CAE
	add r0, r4, r2
	strb r6, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r6, [r0]
	add r2, r2, #74
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _0812D6C4  @ =0x00000CF8
	add r1, r4, r0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0812D6C8  @ =0x00000CFC
	add r0, r4, r1
	strh r5, [r0]
	sub r2, r2, #92
	add r4, r4, r2
	strh r5, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812D69C:
	.4byte gRam
_0812D6A0:
	.4byte 0x00002081
_0812D6A4:
	.4byte 0x00000956
_0812D6A8:
	.4byte 0x00000952
_0812D6AC:
	.4byte 0x00000958
_0812D6B0:
	.4byte gUnknown_083B47FC
_0812D6B4:
	.4byte 0x06003400
_0812D6B8:
	.4byte 0x00000CFE
_0812D6BC:
	.4byte 0x000009C6
_0812D6C0:
	.4byte 0x00000CAE
_0812D6C4:
	.4byte 0x00000CF8
_0812D6C8:
	.4byte 0x00000CFC
	THUMB_FUNC_END sub_0812D618

