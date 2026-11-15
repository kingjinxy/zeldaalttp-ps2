	THUMB_FUNC_START sub_08089AFC
sub_08089AFC: @ 0x08089AFC
	push {r4,r5,lr}
	ldr r3, _08089B90  @ =gRam
	ldr r0, _08089B94  @ =0x0000051A
	add r1, r3, r0
	mov r5, #0
	mov r0, #63
	strh r0, [r1]
	ldr r2, _08089B98  @ =0x0000051C
	add r1, r3, r2
	mov r0, #61
	strh r0, [r1]
	ldr r0, _08089B9C  @ =0x000009B8
	add r1, r3, r0
	mov r0, #22
	strb r0, [r1]
	ldr r1, _08089BA0  @ =0x000009B9
	add r0, r3, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _08089BA4  @ =0x000009B5
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _08089BA8  @ =0x000009D3
	add r1, r3, r0
	mov r0, #2
	strb r0, [r1]
	add r2, r2, #31
	add r1, r3, r2
	mov r0, #98
	strb r0, [r1]
	ldr r0, _08089BAC  @ =0x0000051E
	add r1, r3, r0
	ldr r0, _08089BB0  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _08089BB4  @ =0x00000998
	add r0, r3, r1
	mov r1, #8
	strb r1, [r0]
	sub r2, r2, #59
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _08089BB8  @ =0x00000516
	add r4, r3, r0
	ldrh r2, [r4]
	ldr r1, _08089BBC  @ =0x0000FFFC
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #3
	orr r0, r0, r2
	strh r0, [r4]
	ldr r0, _08089BC0  @ =0x00000514
	add r2, r3, r0
	ldrh r0, [r2]
	and r1, r1, r0
	mov r0, #2
	orr r1, r1, r0
	strh r1, [r2]
	ldr r1, _08089BC4  @ =0x00000ACA
	add r0, r3, r1
	strh r5, [r0]
	ldr r2, _08089BC8  @ =0x000009E8
	add r3, r3, r2
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	mov r0, #1
	bl sub_0806BD6C
	bl sub_08089A38
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089B90:
	.4byte gRam
_08089B94:
	.4byte 0x0000051A
_08089B98:
	.4byte 0x0000051C
_08089B9C:
	.4byte 0x000009B8
_08089BA0:
	.4byte 0x000009B9
_08089BA4:
	.4byte 0x000009B5
_08089BA8:
	.4byte 0x000009D3
_08089BAC:
	.4byte 0x0000051E
_08089BB0:
	.4byte 0x00003C42
_08089BB4:
	.4byte 0x00000998
_08089BB8:
	.4byte 0x00000516
_08089BBC:
	.4byte 0x0000FFFC
_08089BC0:
	.4byte 0x00000514
_08089BC4:
	.4byte 0x00000ACA
_08089BC8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08089AFC

