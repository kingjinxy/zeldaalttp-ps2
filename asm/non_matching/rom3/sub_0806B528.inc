	THUMB_FUNC_START sub_0806B528
sub_0806B528: @ 0x0806B528
	push {r4,lr}
	ldr r4, _0806B574  @ =gRam
	ldr r0, _0806B578  @ =0x00000C99
	add r1, r4, r0
	mov r0, #36
	strb r0, [r1]
	ldr r0, _0806B57C  @ =0x00000C9B
	add r1, r4, r0
	mov r0, #125
	strb r0, [r1]
	ldr r0, _0806B580  @ =0x00000C9A
	add r1, r4, r0
	mov r0, #81
	strb r0, [r1]
	ldr r0, _0806B584  @ =0x00000C9C
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
	bl sub_0812E8DC
	mov r0, #4
	bl sub_08077E64
	mov r0, #14
	mov r1, #0
	bl sub_0813084C
	bl sub_08076440
	ldr r0, _0806B588  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B574:
	.4byte gRam
_0806B578:
	.4byte 0x00000C99
_0806B57C:
	.4byte 0x00000C9B
_0806B580:
	.4byte 0x00000C9A
_0806B584:
	.4byte 0x00000C9C
_0806B588:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806B528

