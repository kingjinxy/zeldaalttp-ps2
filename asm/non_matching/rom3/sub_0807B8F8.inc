	THUMB_FUNC_START sub_0807B8F8
sub_0807B8F8: @ 0x0807B8F8
	push {lr}
	ldr r3, _0807B924  @ =gRam
	ldr r1, _0807B928  @ =0x000016C5
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807B91E
	ldr r1, _0807B92C  @ =0x000016C1
	add r0, r3, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807B91E
	bl sub_0807B43C
_0807B91E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B924:
	.4byte gRam
_0807B928:
	.4byte 0x000016C5
_0807B92C:
	.4byte 0x000016C1
	THUMB_FUNC_END sub_0807B8F8

