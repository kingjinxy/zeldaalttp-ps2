	THUMB_FUNC_START sub_080AF554
sub_080AF554: @ 0x080AF554
	push {r4,lr}
	ldr r0, _080AF5D4  @ =gRam
	ldr r2, _080AF5D8  @ =0x000017D4
	add r1, r0, r2
	mov r3, #0
	strb r3, [r1]
	ldr r4, _080AF5DC  @ =0x00001719
	add r1, r0, r4
	strb r3, [r1]
	add r2, r2, #182
	add r1, r0, r2
	strb r3, [r1]
	add r4, r4, #149
	add r1, r0, r4
	strb r3, [r1]
	ldr r2, _080AF5E0  @ =0x00001770
	add r1, r0, r2
	strb r3, [r1]
	ldr r4, _080AF5E4  @ =0x00000CB2
	add r1, r0, r4
	mov r2, #0
	strh r3, [r1]
	ldr r4, _080AF5E8  @ =0x000017FD
	add r1, r0, r4
	strb r2, [r1]
	add r4, r4, #8
	add r1, r0, r4
	strb r2, [r1]
	ldr r4, _080AF5EC  @ =0x000016CD
	add r1, r0, r4
	strb r2, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r2, [r1]
	add r4, r4, #1
	add r1, r0, r4
	strb r2, [r1]
	sub r4, r4, #7
	add r1, r0, r4
	strb r2, [r1]
	ldr r4, _080AF5F0  @ =0x000017E1
	add r1, r0, r4
	strb r2, [r1]
	sub r4, r4, #65
	add r1, r0, r4
	strh r3, [r1]
	ldr r3, _080AF5F4  @ =0x000017AA
	add r1, r0, r3
	strb r2, [r1]
	sub r4, r4, #136
	add r1, r0, r4
	strb r2, [r1]
	mov r1, #184
	lsl r1, r1, #5
	add r0, r0, r1
	strb r2, [r0]
	bl sub_080AB73C
	bl sub_08092E50
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AF5D4:
	.4byte gRam
_080AF5D8:
	.4byte 0x000017D4
_080AF5DC:
	.4byte 0x00001719
_080AF5E0:
	.4byte 0x00001770
_080AF5E4:
	.4byte 0x00000CB2
_080AF5E8:
	.4byte 0x000017FD
_080AF5EC:
	.4byte 0x000016CD
_080AF5F0:
	.4byte 0x000017E1
_080AF5F4:
	.4byte 0x000017AA
	THUMB_FUNC_END sub_080AF554

