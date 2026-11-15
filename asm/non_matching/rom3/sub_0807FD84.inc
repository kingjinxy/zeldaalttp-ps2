	THUMB_FUNC_START sub_0807FD84
sub_0807FD84: @ 0x0807FD84
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r1, _0807FDA0  @ =gRam
	ldr r2, _0807FDA4  @ =0x000009EA
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	ldr r3, _0807FDA8  @ =0x000009EE
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _0807FDAC  @ =0x000009F4
	add r1, r1, r0
	ldrh r0, [r1]
	b _0807FDF4
_0807FDA0:
	.4byte gRam
_0807FDA4:
	.4byte 0x000009EA
_0807FDA8:
	.4byte 0x000009EE
_0807FDAC:
	.4byte 0x000009F4
_0807FDB0:
	ldr r1, _0807FDE0  @ =gRam
	ldr r2, _0807FDE4  @ =0x000009F4
	add r4, r1, r2
	ldrh r0, [r4]
	add r0, r5, r0
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r1, r3
	strb r0, [r2]
	ldrh r0, [r4]
	add r0, r5, r0
	ldrb r0, [r0, #1]
	add r3, r3, #1
	add r1, r1, r3
	strb r0, [r1]
	ldrh r1, [r2]
	ldr r0, _0807FDE8  @ =0x0000FFF0
	cmp r1, r0
	bne _0807FDEC
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	b _0807FE02
_0807FDE0:
	.4byte gRam
_0807FDE4:
	.4byte 0x000009F4
_0807FDE8:
	.4byte 0x0000FFF0
_0807FDEC:
	add r0, r5, #0
	bl sub_0807FC20
	ldrh r0, [r4]
_0807FDF4:
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #255
	bne _0807FDB0
	ldrb r0, [r1, #1]
	cmp r0, #255
	bne _0807FDB0
_0807FE02:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807FD84

