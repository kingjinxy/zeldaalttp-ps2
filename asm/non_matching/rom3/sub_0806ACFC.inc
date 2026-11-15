	THUMB_FUNC_START sub_0806ACFC
sub_0806ACFC: @ 0x0806ACFC
	push {lr}
	bl sub_08070A24
	bl sub_08070B60
	ldr r3, _0806AD48  @ =gRam
	ldr r0, _0806AD4C  @ =0x00000CF8
	add r1, r3, r0
	mov r2, #0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0806AD50  @ =0x00000CFC
	add r0, r3, r1
	strh r2, [r0]
	ldr r0, _0806AD54  @ =0x00000CFA
	add r1, r3, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _0806AD58  @ =0x000009DA
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806AD42
	ldr r0, _0806AD5C  @ =0x000009D4
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0806AD60  @ =0x0000051E
	add r1, r3, r0
	mov r0, #204
	strh r0, [r1]
	ldr r0, _0806AD64  @ =0x0000099A
	add r1, r3, r0
	mov r0, #31
	strb r0, [r1]
_0806AD42:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806AD48:
	.4byte gRam
_0806AD4C:
	.4byte 0x00000CF8
_0806AD50:
	.4byte 0x00000CFC
_0806AD54:
	.4byte 0x00000CFA
_0806AD58:
	.4byte 0x000009DA
_0806AD5C:
	.4byte 0x000009D4
_0806AD60:
	.4byte 0x0000051E
_0806AD64:
	.4byte 0x0000099A
	THUMB_FUNC_END sub_0806ACFC

