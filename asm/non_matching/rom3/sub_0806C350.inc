	THUMB_FUNC_START sub_0806C350
sub_0806C350: @ 0x0806C350
	push {lr}
	bl sub_08092E50
	ldr r1, _0806C370  @ =gRam
	ldr r0, _0806C374  @ =0x00001726
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	ldr r0, _0806C378  @ =0x00000A3C
	add r1, r1, r0
	ldr r0, _0806C37C  @ =0x0000FFF1
	strh r0, [r1]
	bl sub_080709C0
	pop {r0}
	bx r0
_0806C370:
	.4byte gRam
_0806C374:
	.4byte 0x00001726
_0806C378:
	.4byte 0x00000A3C
_0806C37C:
	.4byte 0x0000FFF1
	THUMB_FUNC_END sub_0806C350

