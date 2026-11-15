	THUMB_FUNC_START sub_0806B4B4
sub_0806B4B4: @ 0x0806B4B4
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0806B500  @ =gRam
	ldr r0, _0806B504  @ =0x000009DA
	add r1, r4, r0
	mov r5, #0
	ldr r0, _0806B508  @ =0x00000189
	strh r0, [r1]
	bl sub_08133600
	ldr r0, _0806B50C  @ =gUnknown_083C2270
	ldr r1, _0806B510  @ =0x0600A000
	bl LZ77UnCompVram
	mov r1, sp
	mov r0, #127
	strh r0, [r1]
	ldr r1, _0806B514  @ =0x06008000
	ldr r2, _0806B518  @ =0x01001000
	mov r0, sp
	bl CpuSet
	ldr r0, _0806B51C  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _0806B520  @ =0x000009AC
	add r1, r4, r0
	mov r0, #25
	strb r0, [r1]
	ldr r0, _0806B524  @ =0x000009AD
	add r4, r4, r0
	strb r5, [r4]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_0806B500:
	.4byte gRam
_0806B504:
	.4byte 0x000009DA
_0806B508:
	.4byte 0x00000189
_0806B50C:
	.4byte gUnknown_083C2270
_0806B510:
	.4byte 0x0600A000
_0806B514:
	.4byte 0x06008000
_0806B518:
	.4byte 0x01001000
_0806B51C:
	.4byte 0x000009E8
_0806B520:
	.4byte 0x000009AC
_0806B524:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806B4B4

